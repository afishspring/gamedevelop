//2151137 �ᴺ��
#include <iostream>
using namespace std;
/***************************************************************************
  �������ƣ�InputCheck
  ��    �ܣ���������Ƿ���ȷ
  ���������side
  �� �� ֵ��true/false
  ˵    ����
***************************************************************************/
bool InputCheck(int side) {
	if (side > 0 && side < 10000)
		return true;
	else
		return false;
}

/***************************************************************************
  �������ƣ�TriangleCheck
  ��    �ܣ��ж��Ƿ񹹳�������
  ���������side1,side2,side3
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void TriangleCheck(int side1, int side2, int side3) {
	int side_max = side1;    //���ж����
	if (side1 < side2)
		side_max = side2;
	if (side_max < side3)
		side_max = side3;    
	if (side1 + side2 + side3 > 2 * side_max)    
		cout << "�ɹ���������" << endl;
	else
		cout << "��������ʧ��" << endl;
}

/***************************************************************************
  �������ƣ�main
  ��    �ܣ��������
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main() {
	int side_a, side_b, side_c;
	while (1) {
		cout << "�������������߳��ȣ�" << endl;
		cin >> side_a >> side_b >> side_c;
		if (cin.good() && InputCheck(side_a) && InputCheck(side_b) && InputCheck(side_c)) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "����Ƿ������������룡" << endl;
			continue;
		}
	}
	/*�ж��Ƿ񹹳������β����*/
	TriangleCheck(side_a, side_b, side_c);
	return 0;
}