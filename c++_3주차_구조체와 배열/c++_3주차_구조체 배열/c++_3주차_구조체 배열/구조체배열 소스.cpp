/*
M&S ����� C++���� 3����
20140545 ������
*/

#include <iostream>

using namespace std;

struct student //student ����ü ����
{
	char name[15];  //����ü ������ �����
	int student_num;
	double grade;
}info;

int i;

char mode; //mode�� char������ �����Ͽ� ������ �ƴ� ���ڰ� �ԷµǾ ������ ���� ����.
int student_order; //�л��� ���� ex) n��° �л�.
bool discrimination = false; //true�� false���� �����ϴ� 1��Ʈ �ڷ��� bool.

int main(void)
{
	struct student info[30] =   //�ʱⰪ�� �̸� �����Ͽ� ��� 1������ ���� input���� ���� ��� 2��,3������ ��µǵ��� ��.
	{
		{"������", 20140545, 4.5},
		{"����ȯ", 20140550, 4.5},
		{"������", 20140543, 4.5}
	};

	cout << endl << "@ �⼮�� ���α׷�" << endl << endl
	       << "=========== Manual ===========" << endl << " 1�� : �л����� �Է�" << endl << " 2�� : �� �л��� ���� ���" << endl 
	   	  << " 3�� : ��� �л��� ���� ���" << endl << " 4�� : ���α׷� ����" << endl << "==============================" << endl;

	while (!discrimination)  // false���� ������ �ִ� discrimination�� not������ !�� ���� ������ ����.
	{
		cout << endl << "@ ��弱�� : ";
		cin >> mode;
		cout << endl << "==============================" << endl << endl;

		switch (mode)
		{
		case '1':		
			cout << "@ �л��� ��ȣ�� �Է��ϼ��� : ";
			cin >> student_order;
			cout << "@ " << student_order << "�� �л��� ������ �Է��ϼ���" << endl;
			{
				int j = student_order - 1;  // j�� ���������� �����ϸ� i�� � ���ڰ� �͵� j����  -1�� �Ǿ������ ����...? 
				cout << "  �̸� : ";   // 1���л��� ������ info[0]�� ����ǹǷ� j�� �л��� ���� -1 �� ����.
				cin >> info[j].name;
				cout << "  �й� : ";
				cin >> info[j].student_num;
				cout << "  ���� : ";
				cin >> info[j].grade;
				cout << endl;

				cout << "==============================" << endl;
				break;
			}
		case '2':
			cout << "@ �л��� ��ȣ�� �Է��ϼ��� : ";  // student_order�� �Է��ϸ� j��°(student_order-1��°) �迭�� ��� ��.
			cin >> student_order;
			{
				int j = student_order - 1;
				cout << "@ " << student_order << "���л��� �����Դϴ�." << endl
					<< "  �̸� : " << info[j].name << endl << "  �й� : " << info[j].student_num << endl
					<< "  ���� : " << info[j].grade << endl << "==============================" << endl;
			}
				break;
			
		case '3':
			cout << "@ ����л��� ������ ����մϴ�." <<endl<< endl;  // for���� �̿��Ͽ� 0��° ~ 2��° �迭�� ������� ���.
			for (i = 0; i < 30; i++)
			{
				int k = i + 1;
				if (info[i].grade == 0)
				{
					//cout <<"@ "<< k<<"�� �л��� ������ �����ϴ�"<<endl;
				 }
				else
				{
					cout << "@ " << k << "�� �л��� ����" << endl
						<< "  �̸� : " << info[i].name << endl
						<< "  �й� : " << info[i].student_num << endl
						<< "  ���� : " << info[i].grade << endl
						<< "==============================" << endl;
				}
			}	
			break;

		case '4':
			cout << "@ ���α׷��� �����մϴ�." << endl << endl;  // 4���� �Է��� ��� discrimination�� true���� �� whlie(!discrimination) ���� Ż��.
			discrimination = true;
			break;

		default:  // mode�� 1,2,3,4�� �ƴ� �ٸ� ���� �� ��� �ٽ� �Է�. 
			cout << "@ �ٽ� �Է��ϼ���." << endl;
		}
	}
	return 0;
}