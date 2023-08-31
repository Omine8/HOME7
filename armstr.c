#include<stdio.h>
#include<math.h>
int main(){
int n,r,i;
float sum=0.0;
int ch;
printf("Enter the number : ");
scanf("%d",&n);
printf("Select option from menu:\n 1--For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
int temp=n;
dign=0;

switch(ch)
{
case 1:
for(;temp!=0;temp/=10)
{
dign++;
}
printf("Number of digits are : %d\n",dign);
for(;temp!=0;temp/=10)
{
r=temp%10;
sum+= pow(r,dign);
}
printf("%f\n",sum);
if((int)sum==n)
{
printf("%d is an armstrong number\n",n);
}
else
{
printf("%d is not an armstrong number\n",n);
}
break;

case 2:

while(temp!=0)
{
r=temp%10;
sum=sum+pow(r,dign);
temp=temp/10;
}

if(sum==n)
{
printf("%d is an armstrong number\n",n);
}
else
{
printf("%d is not an armstrong number\n",n);
}
break;

case 3:
while(temp!=0)
{
r=temp%10;
sum=sum+pow(r,dign);
temp=temp/10;
}
if(sum==n)
{
printf("%d is an armstrong number\n",n);
}
else
{
printf("%d is not an armstrong number\n",n);
}
break;

default:
printf("INVALID CHOICE");
break;
}
}
