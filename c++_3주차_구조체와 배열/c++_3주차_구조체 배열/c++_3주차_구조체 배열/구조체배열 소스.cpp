/*
M&S 실험실 C++교육 3주차
20140545 김태형
*/

#include <iostream>

using namespace std;

struct student //student 구조체 선언
{
	char name[15];  //구조체 변수의 멤버들
	int student_num;
	double grade;
}info;

int i;

char mode; //mode를 char형으로 선언하여 정수가 아닌 문자가 입력되어도 오류가 뜨지 않음.
int student_order; //학생의 순번 ex) n번째 학생.
bool discrimination = false; //true와 false만을 저장하는 1비트 자료형 bool.

int main(void)
{
	struct student info[30] =   //초기값을 미리 지정하여 모드 1번에서 값을 input하지 않을 경우 2번,3번에서 출력되도록 함.
	{
		{"김태형", 20140545, 4.5},
		{"문정환", 20140550, 4.5},
		{"김준현", 20140543, 4.5}
	};

	cout << endl << "@ 출석부 프로그램" << endl << endl
	       << "=========== Manual ===========" << endl << " 1번 : 학생정보 입력" << endl << " 2번 : 한 학생의 정보 출력" << endl 
	   	  << " 3번 : 모든 학생의 정보 출력" << endl << " 4번 : 프로그램 종료" << endl << "==============================" << endl;

	while (!discrimination)  // false값을 가지고 있는 discrimination에 not연산자 !를 붙혀 참으로 만듦.
	{
		cout << endl << "@ 모드선택 : ";
		cin >> mode;
		cout << endl << "==============================" << endl << endl;

		switch (mode)
		{
		case '1':		
			cout << "@ 학생의 번호를 입력하세요 : ";
			cin >> student_order;
			cout << "@ " << student_order << "번 학생의 정보를 입력하세요" << endl;
			{
				int j = student_order - 1;  // j를 전역변수로 선언하면 i에 어떤 숫자가 와도 j값이  -1이 되어버리는 현상...? 
				cout << "  이름 : ";   // 1번학생의 정보가 info[0]에 저장되므로 j를 학생의 순번 -1 로 선언.
				cin >> info[j].name;
				cout << "  학번 : ";
				cin >> info[j].student_num;
				cout << "  성적 : ";
				cin >> info[j].grade;
				cout << endl;

				cout << "==============================" << endl;
				break;
			}
		case '2':
			cout << "@ 학생의 번호를 입력하세요 : ";  // student_order을 입력하면 j번째(student_order-1번째) 배열이 출력 됨.
			cin >> student_order;
			{
				int j = student_order - 1;
				cout << "@ " << student_order << "번학생의 정보입니다." << endl
					<< "  이름 : " << info[j].name << endl << "  학번 : " << info[j].student_num << endl
					<< "  힉점 : " << info[j].grade << endl << "==============================" << endl;
			}
				break;
			
		case '3':
			cout << "@ 모든학생의 정보를 출력합니다." <<endl<< endl;  // for문을 이용하여 0번째 ~ 2번째 배열을 순서대로 출력.
			for (i = 0; i < 30; i++)
			{
				int k = i + 1;
				if (info[i].grade == 0)
				{
					//cout <<"@ "<< k<<"번 학생의 정보가 없습니다"<<endl;
				 }
				else
				{
					cout << "@ " << k << "번 학생의 정보" << endl
						<< "  이름 : " << info[i].name << endl
						<< "  학번 : " << info[i].student_num << endl
						<< "  성적 : " << info[i].grade << endl
						<< "==============================" << endl;
				}
			}	
			break;

		case '4':
			cout << "@ 프로그램을 종료합니다." << endl << endl;  // 4번을 입력할 경우 discrimination에 true값이 들어가 whlie(!discrimination) 문을 탈출.
			discrimination = true;
			break;

		default:  // mode에 1,2,3,4가 아닌 다른 값이 올 경우 다시 입력. 
			cout << "@ 다시 입력하세요." << endl;
		}
	}
	return 0;
}