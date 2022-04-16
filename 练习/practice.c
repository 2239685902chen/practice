#include <stdio.h>
#include <assert.h>
typedef struct book//typedef可以在第七行让book成为结构体类型
{
	char name[20];
	int prince;
	char author[20];
}book;
void Print(const book* one)
{
	assert(one != 'NULL');
	printf("书名：%s\n", one->name);
	printf("价格：%d\n", one->prince);
	printf("作者：%s\n", one->author);
}
int main()
{
	book one = { "c和指针",54,"肯尼迪·里科" };//book是结构体类型
	Print(&one);//打印结构体里的内容
	return 0;
}