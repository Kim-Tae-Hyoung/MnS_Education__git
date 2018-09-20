/*
	M&S 2주차_구조체
	20140545_김태형
*/

#include <iostream>
#include <cstring> //strcpy함수를 사용하기 위해 string.h 헤더를 추가

using namespace std;

struct student  //student 구조체 선언
{
	char name[15];  //구조체 변수의 멤버들
	int student_num;
	double grade;
} info; //구조체 변수 info


int main(void)
{
	cout << endl<<"========학생 정보========" << endl << endl;

	strcpy_s(info.name,"Tae_Hyoung Kim"); //이미 선언된 배열에 문자열을 넣기위해 strcpy함수를 사용(문자열 b를 a에 복사한다.)
	info.student_num = 20140545;
	info.grade = 4.4999;

	cout.precision(2);  // precision을 통해 소수점 첫째 자리까지만 표현
	cout << "@ 이름 : " << info.name << endl << "@ 학번 : " << info.student_num << endl << "@ 학점 : " << info.grade << endl << endl;
	cout << "=========================" << endl << endl;


	student info = {"Jun_Hyeoun Kim", 20140543, 4.39999}; //구조체 변수인 info를 초기화

	cout << "@ 이름 : " << info.name << endl << "@ 학번 : " << info.student_num << endl << "@ 학점 : " << info.grade << endl << endl;
	cout << "=========================" << endl << endl;
	
	
	return 0;
}