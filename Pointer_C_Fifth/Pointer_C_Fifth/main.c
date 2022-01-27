#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <malloc.h>	

int main(int argc, char* argv[])
{

	//int i = 0;
	//for (i = 0; i < argc; ++i)
	//{
	//	puts(argv[i]);
	//}
	//puts("End");
	//return 0;

	//다중포인터
	char ch = 'A';
	//char*에는 char형 주소를 담는다.
	char* pData = &ch;
	//char**에는 char*형 주소를 담는다.
	char** ppData = &pData;
	//char***에는 char**형 주소를 담는다
	char*** pppData = &ppData;

	printf("%c\n", ch);
	printf("%c\n", *pData);
	printf("%c\n", **ppData);
	printf("%c\n", ***pppData);
	


	////////////////////////////다중포인터 예제////////////////////////////////////



	char* astrList[3] = { "Hello", "World", "String" };
	//astrList의 요소 방식이 char*형이므로 char**에 담는다
	char* *ppstrList = astrList;
	//char** 형식 변수의 주소는 char***에 담는다.
	char** *pppstrList = &ppstrList;

	//*(char**+인덱스)의 형식은 char*이다.
	//따라서 %s로 출력하거나 puts()로 출력한다.
	puts(ppstrList[0]);
	puts(ppstrList[1]);
	puts(ppstrList[2]);


	//char***를 두 번 간접지정하면 char*이다
	puts(*pppstrList[0]);
	puts(*(*(pppstrList + 0) + 1));
	








	return 0;
	// int aList[3] = { 0 };
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
	//char* astrList[3] = { "Hello", "World", "String" };

	//printf("%s\n", astrList[0]);
	//printf("%s\n", astrList[1]);
	//printf("%s\n", astrList[2]);
	//
	//printf("%s\n", astrList[0]+1);
	//printf("%s\n", astrList[1]+2);
	//printf("%s\n", astrList[2]+2);
	//

	////astrList[0]이 주소 이다
	//
	//printf("%c\n", astrList[0][3]);
	//printf("%c\n", astrList[1][3]);
	//printf("%c\n", astrList[2][3]);








	//이 위치가 int변수로 지정된 것

	//이게 무슨말인지 모르겠다.


	//이 자체를 int에 대한 주소라고 해석을 하겠다
	//그것을 간접지정해버리면 int변수로 지정되어버리는것.

	int nData = 10;//0x0019FEDC 
	//*(int*)0x0019FEDC 주어진 Stack 영역이 맞다면...
	//이와같은 논리도 성립이 되는것이다
	*(int*)0x0019FEDC = 10;
	printf("%d\n", *(int*)0x0019FEDC);
	//변수라는 것이 메모리이다 .



	return 0;
}
