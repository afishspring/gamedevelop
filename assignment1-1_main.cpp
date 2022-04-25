//2151137 俞春先
#include <iostream>
using namespace std;
/***************************************************************************
  函数名称：InputCheck
  功    能：检查输入是否正确
  输入参数：side
  返 回 值：true/false
  说    明：
***************************************************************************/
bool InputCheck(int side) {
	if (side > 0 && side < 10000)
		return true;
	else
		return false;
}

/***************************************************************************
  函数名称：TriangleCheck
  功    能：判断是否构成三角形
  输入参数：side1,side2,side3
  返 回 值：
  说    明：
***************************************************************************/
void TriangleCheck(int side1, int side2, int side3) {
	int side_max = side1;    //先判断最长边
	if (side1 < side2)
		side_max = side2;
	if (side_max < side3)
		side_max = side3;    
	if (side1 + side2 + side3 > 2 * side_max)    
		cout << "成功锻造武器" << endl;
	else
		cout << "锻造武器失败" << endl;
}

/***************************************************************************
  函数名称：main
  功    能：输入输出
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main() {
	int side_a, side_b, side_c;
	while (1) {
		cout << "输入武器的三边长度：" << endl;
		cin >> side_a >> side_b >> side_c;
		if (cin.good() && InputCheck(side_a) && InputCheck(side_b) && InputCheck(side_c)) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "输入非法，请重新输入！" << endl;
			continue;
		}
	}
	/*判断是否构成三角形并输出*/
	TriangleCheck(side_a, side_b, side_c);
	return 0;
}