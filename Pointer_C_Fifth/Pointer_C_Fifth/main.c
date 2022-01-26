#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <malloc.h>	

int main(void)
{
	//int aList[3] = { 0 };
	//int* pList = aList;
	//해석 순서
	//1. *pList = pList는 포인터이다
	//2. int =  포인터가 가르키는 대상은 int이다.

	//ex)
	//int** (*ppList) = 0;
	//1. ppList는 포인터이다
	//2. int**형식이다

	//~에 대한 포인터 = *(이름);
	//포인터의 문제점 .
	//대상에 대한 설명은 있지만 ( 형식 )
	//갯수는 알 수 없다.
	//ex) 갯수를 알 수 없는 예시
	//int *pList = aList[3];
	//int *pList = &aList;

	//정리하자면 포인터가 가진 근본적인 문제점은
	//1. 갯수를 알 수 없고
	//2. 가르키는 대상의 유효성을 확인할 수 없다.
	//C언어 : "개발자 스스로 알아서 쓰고 잘못되면 니 책임" 자유도는 높지만 책임도 본인이 져야한다.

	//포인터 자료형		//간접지정 연산결과			//코드 예
	// char *				*(char *) == char		int nData = 10;
	//												int *pnData = &nData;
	// 
	// char* *				*(char**)== char*		int* *ppnData = &pnData;
	// 
	// char** *				*(char ***)==char**		int** *pppnData = &ppnData;

	//char* [3] 배열을 각각의 문자열로 초기화	
	char* astrList[3] = { "Hello", "World", "String" };

	printf("%s\n", astrList[0]);
	printf("%s\n", astrList[1]);
	printf("%s\n", astrList[2]);
	
	printf("%s\n", astrList[0]+1);
	printf("%s\n", astrList[1]+2);
	printf("%s\n", astrList[2]+2);
	

	//astrList[0]이 주소 이다
	
	printf("%c\n", astrList[0][3]);
	printf("%c\n", astrList[1][3]);
	printf("%c\n", astrList[2][3]);
	//다섯번째 강의 21분 
	return 0;
}
