#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0,e;
char a[10];
clrscr();
scanf("%s",a);
e=strlen(a);
for(i=0;i<e;i++)
{
c=c+1;
}
printf("%d is the count value",c);
getch();
}
