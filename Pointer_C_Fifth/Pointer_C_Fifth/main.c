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

	//����������
	char ch = 'A';
	//char*���� char�� �ּҸ� ��´�.
	char* pData = &ch;
	//char**���� char*�� �ּҸ� ��´�.
	char** ppData = &pData;
	//char***���� char**�� �ּҸ� ��´�
	char*** pppData = &ppData;

	printf("%c\n", ch);
	printf("%c\n", *pData);
	printf("%c\n", **ppData);
	printf("%c\n", ***pppData);
	


	////////////////////////////���������� ����////////////////////////////////////



	char* astrList[3] = { "Hello", "World", "String" };
	//astrList�� ��� ����� char*���̹Ƿ� char**�� ��´�
	char* *ppstrList = astrList;
	//char** ���� ������ �ּҴ� char***�� ��´�.
	char** *pppstrList = &ppstrList;

	//*(char**+�ε���)�� ������ char*�̴�.
	//���� %s�� ����ϰų� puts()�� ����Ѵ�.
	puts(ppstrList[0]);
	puts(ppstrList[1]);
	puts(ppstrList[2]);


	//char***�� �� �� ���������ϸ� char*�̴�
	puts(*pppstrList[0]);
	puts(*(*(pppstrList + 0) + 1));
	








	return 0;
	// int aList[3] = { 0 };
	//int* pList = aList;
	//�ؼ� ����
	//1. *pList = pList�� �������̴�
	//2. int =  �����Ͱ� ����Ű�� ����� int�̴�.

	//ex)
	//int** (*ppList) = 0;
	//1. ppList�� �������̴�
	//2. int**�����̴�

	//~�� ���� ������ = *(�̸�);
	//�������� ������ .
	//��� ���� ������ ������ ( ���� )
	//������ �� �� ����.
	//ex) ������ �� �� ���� ����
	//int *pList = aList[3];
	//int *pList = &aList;

	//�������ڸ� �����Ͱ� ���� �ٺ����� ��������
	//1. ������ �� �� ����
	//2. ����Ű�� ����� ��ȿ���� Ȯ���� �� ����.
	//C��� : "������ ������ �˾Ƽ� ���� �߸��Ǹ� �� å��" �������� ������ å�ӵ� ������ �����Ѵ�.

	//������ �ڷ���		//�������� ������			//�ڵ� ��
	// char *				*(char *) == char		int nData = 10;
	//												int *pnData = &nData;
	// 
	// char* *				*(char**)== char*		int* *ppnData = &pnData;
	// 
	// char** *				*(char ***)==char**		int** *pppnData = &ppnData;

	//char* [3] �迭�� ������ ���ڿ��� �ʱ�ȭ	
	//char* astrList[3] = { "Hello", "World", "String" };

	//printf("%s\n", astrList[0]);
	//printf("%s\n", astrList[1]);
	//printf("%s\n", astrList[2]);
	//
	//printf("%s\n", astrList[0]+1);
	//printf("%s\n", astrList[1]+2);
	//printf("%s\n", astrList[2]+2);
	//

	////astrList[0]�� �ּ� �̴�
	//
	//printf("%c\n", astrList[0][3]);
	//printf("%c\n", astrList[1][3]);
	//printf("%c\n", astrList[2][3]);








	//�� ��ġ�� int������ ������ ��

	//�̰� ���������� �𸣰ڴ�.


	//�� ��ü�� int�� ���� �ּҶ�� �ؼ��� �ϰڴ�
	//�װ��� ���������ع����� int������ �����Ǿ�����°�.

	int nData = 10;//0x0019FEDC 
	//*(int*)0x0019FEDC �־��� Stack ������ �´ٸ�...
	//�̿Ͱ��� ���� ������ �Ǵ°��̴�
	*(int*)0x0019FEDC = 10;
	printf("%d\n", *(int*)0x0019FEDC);
	//������� ���� �޸��̴� .



	return 0;
}
