/*
	M&S 2����_����ü
	20140545_������
*/

#include <iostream>
#include <cstring> //strcpy�Լ��� ����ϱ� ���� string.h ����� �߰�

using namespace std;

struct student  //student ����ü ����
{
	char name[15];  //����ü ������ �����
	int student_num;
	double grade;
} info; //����ü ���� info


int main(void)
{
	cout << endl<<"========�л� ����========" << endl << endl;

	strcpy_s(info.name,"Tae_Hyoung Kim"); //�̹� ����� �迭�� ���ڿ��� �ֱ����� strcpy�Լ��� ���(���ڿ� b�� a�� �����Ѵ�.)
	info.student_num = 20140545;
	info.grade = 4.4999;

	cout.precision(2);  // precision�� ���� �Ҽ��� ù° �ڸ������� ǥ��
	cout << "@ �̸� : " << info.name << endl << "@ �й� : " << info.student_num << endl << "@ ���� : " << info.grade << endl << endl;
	cout << "=========================" << endl << endl;


	student info = {"Jun_Hyeoun Kim", 20140543, 4.39999}; //����ü ������ info�� �ʱ�ȭ

	cout << "@ �̸� : " << info.name << endl << "@ �й� : " << info.student_num << endl << "@ ���� : " << info.grade << endl << endl;
	cout << "=========================" << endl << endl;
	
	
	return 0;
}