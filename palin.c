#include<stdio.h>
int main(){
int n,r,rev=0,ch,i;
printf("Enter the number : ");
scanf("%d",&n);
printf("Select option from menu:\n 1--For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
int temp=n;
switch(ch)
{
case 1:
for(;temp!=0;temp/=10)
{
r=temp%10;
rev=(rev*10)+r;
}
if(rev==n)
{
printf("%d is a palindrome number\n",n);
}
else
{
printf("%d is not a palindrome number\n",n);
}
break;

case 2:
while(temp!=0)
{
r=temp%10;
rev=(rev*10)+r;
temp=temp/10;
}
if(rev==n)
{
printf("%d is a palindrome number\n",n);
}
else
{
printf("%d is not a palindrome number\n",n);
}
break;

case 3:
do
{
r=temp%10;
rev=(rev*10)+r;
temp=temp/10;
}while(temp!=0);
if(rev==n)
{
printf("%d is a palindrome number\n",n);
}
else
{
printf("%d is not a palindrome number\n",n);
}
break;

default:
printf("INVALID CHOICE");
break;
}
}
