/*
M&S ����� C++���� 1����
20140545 ������
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
	cout << endl << "==============��Ģ���� ����==============" << endl << endl;
	
	while (1)
	{
		cout << "@ ���� �Է� : ";

		cin >> num1 >> arithmetic >> num2;

		switch (arithmetic)
		{
		case '+': add(); break;
		case '-': substract(); break;
		case '*': multiply(); break;
		case '/': division(); break;
		default: cout << "�ٽ� �Է����ּ���." << endl;
		}
			cout << "@ ������ �����Ͻðڽ��ϱ�? (y, n) :";
			cin >> ch_end;
			if (ch_end == 'y')
			{
				cout <<endl<<"============������ �����մϴ�.============" << endl << endl;
				break;
			}	
			else if (ch_end == 'n')
			{
				cout << endl << "============������ ����մϴ�.============"<< endl << endl;
			}
			else
			{
				cout << endl << "============������ ����մϴ�.============" << endl << endl;
			}

	}
		return 0;
}


double add()
{
	double result = num1 + num2;
	cout << "@ ��� ��� : " << result << endl << endl;
	return result;
}

double substract()
{
	double result = num1 - num2;
	cout << "@ ��� ��� : " << result << endl << endl;
	return result;
}

double multiply()
{
	double result = num1 * num2;
	cout << "@ ��� ��� : " << result << endl << endl;
	return result;
}

double division()
{
	double result = (double)num1 / (double)num2;
	if (num2 == 0)
	{
		cout << endl << "@ 0���δ� ���� �� �����ϴ�." << endl<<endl;
	}
	else
	{
		cout << "@ ��� ��� : " << result << endl << endl;
	}
	return result;
}