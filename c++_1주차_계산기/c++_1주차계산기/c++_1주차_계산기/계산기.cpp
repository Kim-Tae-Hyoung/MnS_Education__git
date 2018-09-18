/*
M&S 실험실 C++교육 1주차
20140545 김태형
*/


#include <iostream>


char arithmetic; //연산의 종류를 arithmetic으로 정의하였습니다.

double num1; //연산에 사용될 첫번째 숫자를 num1으로 정의하였습니다.
double num2; //연산에 사용될 첫번째 숫자를 num2으로 정의하였습니다.

double add(); //덧셈함수를 add로 정의하였습니다.
double substract(); //뺄셈함수를 substract로 정의하였습니다.
double multiply();  //곱셈함수를 multiply로 정의하였습니다.
double division();  //나눗셈함수를 division으로 정의하였습니다.

int main(void)
{
	std::cout << "\n===============사칙연산 계산기==============\n\n";  //
	std::cout << "덧셈 : 1, 뺄셈 : 2, 곱셈 : 3, 나눗셈 : 4, 종료 : 5\n\n";
	while (1)  //무한루프를 위해 조건문 whilel을 사용, 1을 넣어 항상 참이되게했습니다. 
	{
		std::cout << "@연산종류를 선택해주세요  <1, 2, 3, 4, 5> : ";
		std::cin >> arithmetic;
		
		if (arithmetic == '5')
		break;

		switch (arithmetic)
		{ 
		case '1': 	add(); break;
		case '2': 	substract(); break;
		case '3': 	multiply(); break;
		case '4': 	division(); break;
		default: std::cout << "@다시 입력해주세요.\n\n"; break;
		}	

	}
	std::cout << "\n\n==========사칙연산 계산기 종료===========\n\n";

	return 0;
}

//여기부터는 함수의 정의입니다.

double add()  //덧셈함수를 정의했습니다.
{
	std::cout << "\n연산하려는 두 수를 입력하세요.\n" << "숫자입력 : ";
	std::cin >> num1;
	std::cout << "숫자입력 : ";
	std::cin >> num2;
	double result1 = num1 + num2;
	std::cout << "연산결과 : <" << result1 << ">\n\n";
	return result1;
}

double substract()  //뺄셈함수를 정의했습니다.
{
	std::cout << "연산하려는 두 수를 입력하세요.\n" << "숫자입력 : ";
	std::cin >> num1;
	std::cout << "숫자입력 : ";
	std::cin >> num2;
	double result1 = num1 - num2;
	std::cout << "연산결과 : <" << result1 << ">\n\n";
	return result1;
}

double multiply()  //곱셈함수를 정의했습니다.
{
	std::cout << "연산하려는 두 수를 입력하세요.\n" << "숫자입력 : ";
	std::cin >> num1;
	std::cout << "숫자입력 : ";
	std::cin >> num2;
	double result1 = num1 * num2;
	std::cout << "연산결과 : <" << result1 << ">\n\n";
	return result1;
}

double division()  //나눗셈함수를 정의했습니다.
{
	std::cout << "연산하려는 두 수를 입력하세요.\n" << "숫자입력 : ";
	std::cin >> num1;
	std::cout << "숫자입력 : ";
	std::cin >> num2;
	double result1 = num1 / num2;
	if (num2 == 0)
	{
		std::cout << "@0으로는 나눌 수 없습니다.\n\n";
	}
	else
	{
		std::cout << "연산결과 : <" << result1 << ">\n\n";
	}
	return result1;
}