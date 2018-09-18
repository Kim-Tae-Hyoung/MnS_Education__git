/*
M&S 실험실 C++교육 1주차
20140545 김태형
*/

#include <iostream>

using namespace std;


char arithmetic;
char ch_end;

int num1;
int num2;

double add();
double substract();
double multiply();
double division();



int main(void)
{
	cout << endl << "==============사칙연산 계산기==============" << endl << endl;
	
	while (1)
	{
		cout << "@ 계산식 입력 : ";

		cin >> num1 >> arithmetic >> num2;

		switch (arithmetic)
		{
		case '+': add(); break;
		case '-': substract(); break;
		case '*': multiply(); break;
		case '/': division(); break;
		default: cout << "다시 입력해주세요." << endl;
		}
			cout << "@ 연산을 종료하시겠습니까? (y, n) :";
			cin >> ch_end;
			if (ch_end == 'y')
			{
				cout <<endl<<"============연산을 종료합니다.============" << endl << endl;
				break;
			}	
			else if (ch_end == 'n')
			{
				cout << endl << "============연산을 계속합니다.============"<< endl << endl;
			}
			else
			{
				cout << endl << "============연산을 계속합니다.============" << endl << endl;
			}

	}
		return 0;
}


double add()
{
	double result = num1 + num2;
	cout << "@ 계산 결과 : " << result << endl << endl;
	return result;
}

double substract()
{
	double result = num1 - num2;
	cout << "@ 계산 결과 : " << result << endl << endl;
	return result;
}

double multiply()
{
	double result = num1 * num2;
	cout << "@ 계산 결과 : " << result << endl << endl;
	return result;
}

double division()
{
	double result = (double)num1 / (double)num2;
	if (num2 == 0)
	{
		cout << endl << "@ 0으로는 나눌 수 없습니다." << endl<<endl;
	}
	else
	{
		cout << "@ 계산 결과 : " << result << endl << endl;
	}
	return result;
}