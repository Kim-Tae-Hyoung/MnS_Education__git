/*
M&S 실험실 C++교육 2주차_배열
20140545 김태형
*/

#include <iostream>

using namespace std;

//배열의 선언과 초기화
int array_1 [5] = { 1,2,3,4,5 }; //방법1 : 배열의 크기와 배열 요소 모두 설정
int array_2[] = { 1,2,3,4,5 };  //방법2 : 배열 요소만 설정 -> 배열의 크기는 자동으로 맞춰짐
int array_3[5] = { 1,2 };  //방법3 : 배열의 크기보다 적은 배열 요소 -> 앞부터 채워지고 남은 배열은 0

int array_4[5]; 
int i;
int j=1;

int main(void)
{
	cout << endl << "==========배열==========" << endl << endl;

	for (i = 0; i < 5; i++)
	{
		cout <<"@ "<< j<<"번째 원소 = ";
		cin >> array_4[i];
		j++;
	}
	cout << endl << "=========================" << endl << endl;

	return 0;
}