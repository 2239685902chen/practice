#include <stdio.h>
#include <assert.h>
typedef struct book//typedef�����ڵ�������book��Ϊ�ṹ������
{
	char name[20];
	int prince;
	char author[20];
}book;
void Print(const book* one)
{
	assert(one != 'NULL');
	printf("������%s\n", one->name);
	printf("�۸�%d\n", one->prince);
	printf("���ߣ�%s\n", one->author);
}
int main()
{
	book one = { "c��ָ��",54,"����ϡ����" };//book�ǽṹ������
	Print(&one);//��ӡ�ṹ���������
	return 0;
}