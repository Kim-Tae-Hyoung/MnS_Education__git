/*
	M&S_2����_������
	20140545_������
*/

#include <iostream>

using namespace std;

int a = 10; 
int *p_a = &a; //������ p_a�� �����ϰ� a�� �ּҰ��� ����
int **pp_a = &p_a;  //���������� pp_a�� �����ϰ� p_a�� �ּҰ��� ����

char b = 'A';
char *p_b = &b;
char**pp_b = &p_b;

double c = 7.77;
double *p_c = &c;
double **pp_c = &p_c;

int pointer_a ();
int pointer_b ();
int pointer_c ();


int main(void)
{
	pointer_a ( );
	pointer_b ( );
	pointer_c ( );
	
	return 0;
}


int pointer_a ()
{
	cout << "@ a�� �� : " << a << endl;
	cout << "@ a�� �ּҰ� : " << p_a << endl;
	cout << "@ p_a�� �� : " << p_a << endl;
	cout << "@ p_a�� ǥ���ϰ��� �ϴ� �� : " << *p_a << endl;
	cout << "@ p_a�� �ּҰ� : " << pp_a << endl << endl;

	return 0;
}

int pointer_b()
{
	cout << "@ b�� �� : " << b << endl;
	cout << "@ b�� �ּҰ� : " << (void*)p_b << endl; //char���� �ּҰ��� ����ϱ����� int������ �� ��ȯ
	cout << "@ p_b�� �� : " << (void*)p_b << endl;
	cout << "@ p_b�� ǥ���ϰ��� �ϴ� �� : " << *p_b << endl;
	cout << "@ p_b�� �ּҰ� : " << &pp_b << endl << endl;

	return 0;
}

int pointer_c()
{
	cout << "@ c�� �� : " << c << endl;
	cout << "@ c�� �ּҰ� : " << p_c << endl;
	cout << "@ p_c�� �� : " << p_c << endl;
	cout << "@ p_c�� ǥ���ϰ��� �ϴ� �� : " << *p_c << endl;
	cout << "@ p_c�� �ּҰ� : " << pp_c << endl << endl;

	return 0;
}