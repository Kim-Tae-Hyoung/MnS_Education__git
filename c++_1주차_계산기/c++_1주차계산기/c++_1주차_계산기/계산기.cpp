/*
M&S ����� C++���� 1����
20140545 ������
*/


#include <iostream>


char arithmetic; //������ ������ arithmetic���� �����Ͽ����ϴ�.

double num1; //���꿡 ���� ù��° ���ڸ� num1���� �����Ͽ����ϴ�.
double num2; //���꿡 ���� ù��° ���ڸ� num2���� �����Ͽ����ϴ�.

double add(); //�����Լ��� add�� �����Ͽ����ϴ�.
double substract(); //�����Լ��� substract�� �����Ͽ����ϴ�.
double multiply();  //�����Լ��� multiply�� �����Ͽ����ϴ�.
double division();  //�������Լ��� division���� �����Ͽ����ϴ�.

int main(void)
{
	std::cout << "\n===============��Ģ���� ����==============\n\n";  //
	std::cout << "���� : 1, ���� : 2, ���� : 3, ������ : 4, ���� : 5\n\n";
	while (1)  //���ѷ����� ���� ���ǹ� whilel�� ���, 1�� �־� �׻� ���̵ǰ��߽��ϴ�. 
	{
		std::cout << "@���������� �������ּ���  <1, 2, 3, 4, 5> : ";
		std::cin >> arithmetic;
		
		if (arithmetic == '5')
		break;

		switch (arithmetic)
		{ 
		case '1': 	add(); break;
		case '2': 	substract(); break;
		case '3': 	multiply(); break;
		case '4': 	division(); break;
		default: std::cout << "@�ٽ� �Է����ּ���.\n\n"; break;
		}	

	}
	std::cout << "\n\n==========��Ģ���� ���� ����===========\n\n";

	return 0;
}

//������ʹ� �Լ��� �����Դϴ�.

double add()  //�����Լ��� �����߽��ϴ�.
{
	std::cout << "\n�����Ϸ��� �� ���� �Է��ϼ���.\n" << "�����Է� : ";
	std::cin >> num1;
	std::cout << "�����Է� : ";
	std::cin >> num2;
	double result1 = num1 + num2;
	std::cout << "������ : <" << result1 << ">\n\n";
	return result1;
}

double substract()  //�����Լ��� �����߽��ϴ�.
{
	std::cout << "�����Ϸ��� �� ���� �Է��ϼ���.\n" << "�����Է� : ";
	std::cin >> num1;
	std::cout << "�����Է� : ";
	std::cin >> num2;
	double result1 = num1 - num2;
	std::cout << "������ : <" << result1 << ">\n\n";
	return result1;
}

double multiply()  //�����Լ��� �����߽��ϴ�.
{
	std::cout << "�����Ϸ��� �� ���� �Է��ϼ���.\n" << "�����Է� : ";
	std::cin >> num1;
	std::cout << "�����Է� : ";
	std::cin >> num2;
	double result1 = num1 * num2;
	std::cout << "������ : <" << result1 << ">\n\n";
	return result1;
}

double division()  //�������Լ��� �����߽��ϴ�.
{
	std::cout << "�����Ϸ��� �� ���� �Է��ϼ���.\n" << "�����Է� : ";
	std::cin >> num1;
	std::cout << "�����Է� : ";
	std::cin >> num2;
	double result1 = num1 / num2;
	if (num2 == 0)
	{
		std::cout << "@0���δ� ���� �� �����ϴ�.\n\n";
	}
	else
	{
		std::cout << "������ : <" << result1 << ">\n\n";
	}
	return result1;
}