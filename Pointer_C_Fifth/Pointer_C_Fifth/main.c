#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <malloc.h>	

int main(void)
{
	//int aList[3] = { 0 };
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
	char* astrList[3] = { "Hello", "World", "String" };

	printf("%s\n", astrList[0]);
	printf("%s\n", astrList[1]);
	printf("%s\n", astrList[2]);
	
	printf("%s\n", astrList[0]+1);
	printf("%s\n", astrList[1]+2);
	printf("%s\n", astrList[2]+2);
	

	//astrList[0]�� �ּ� �̴�
	
	printf("%c\n", astrList[0][3]);
	printf("%c\n", astrList[1][3]);
	printf("%c\n", astrList[2][3]);
	//�ټ���° ���� 21�� 
	return 0;
}
