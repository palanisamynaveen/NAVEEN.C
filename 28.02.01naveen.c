#include <stdio.h>
#include<conio.h>
int main() 
{
int x,y,temp;

scanf("%d %d",&x,&y);
x=x^y;
y=x^y;
x=x^y;
printf("%d %d",x,y);
getch();
return 0;
}
