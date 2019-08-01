#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i;
for(i=0;i<=9;i++)
{
	printf("input 10 nos\t");
	scanf("%d",&a[i]);
	
}
for(i=9;i>=0;i--)
{
	printf("%d\n",a[i]);	
}
getch();
}
