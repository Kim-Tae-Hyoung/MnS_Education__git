/*
	M&S_2주차_포인터
	20140545_김태형
*/

#include <iostream>

using namespace std;

int a = 10; 
int *p_a = &a; //포인터 p_a를 선언하고 a의 주소값을 대입
int **pp_a = &p_a;  //더블포인터 pp_a를 선언하고 p_a의 주소값을 대입

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
	cout << "@ a의 값 : " << a << endl;
	cout << "@ a의 주소값 : " << p_a << endl;
	cout << "@ p_a의 값 : " << p_a << endl;
	cout << "@ p_a가 표시하고자 하는 값 : " << *p_a << endl;
	cout << "@ p_a의 주소값 : " << pp_a << endl << endl;

	return 0;
}

int pointer_b()
{
	cout << "@ b의 값 : " << b << endl;
	cout << "@ b의 주소값 : " << (void*)p_b << endl; //char형의 주소값을 출력하기위해 int형으로 형 변환
	cout << "@ p_b의 값 : " << (void*)p_b << endl;
	cout << "@ p_b가 표시하고자 하는 값 : " << *p_b << endl;
	cout << "@ p_b의 주소값 : " << &pp_b << endl << endl;

	return 0;
}

int pointer_c()
{
	cout << "@ c의 값 : " << c << endl;
	cout << "@ c의 주소값 : " << p_c << endl;
	cout << "@ p_c의 값 : " << p_c << endl;
	cout << "@ p_c가 표시하고자 하는 값 : " << *p_c << endl;
	cout << "@ p_c의 주소값 : " << pp_c << endl << endl;

	return 0;
}