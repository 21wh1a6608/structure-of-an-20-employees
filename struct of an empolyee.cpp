#include<stdio.h>
struct empolyee
{
	char name[10];
	int age,salary,phonenumeber[11];
};
int main()
{
struct empolyee e[20];
int i;
for(i=0;i<20;i++)
{
	printf("enter the empolyee name,age,phonenumeber,salary");
	scanf("%s%d%d%d",e[i].name,&e[i].age,&e[i].phonenumeber,&e[i].salary);
	printf("%s\n%d\n%d\n%d",e[i].name,e[i].age,e[i].phonenumeber,e[i].salary);
}
}
