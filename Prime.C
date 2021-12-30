#include<stdio.h>
#include<Conio.h>
int Check_Prime(int,int);
int main()
{
int no,f;
Printf("\n Enter a value: ");
Scanf("%d",&no);
f=check_prime (2,no);
if (f==0)
   Printf("\n Number is Prime:");
else
   Printf("\n Number is not Prime:");
getch();
return 0;
}
int Check_Prime (inti,int no)
{
if (i==no)
return 0;
else
if(no%i==0)
return 1;
else
return (Check_Prime (i+1,no));  //recursive call
}}
