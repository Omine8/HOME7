#include<stdio.h>
int main(){
int i=1,n,ch;
printf("Enter the number : ");
scanf("%d",&n);
printf("Select option from menu:\n 1---For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("The factors of %d are :\n",n);
for(i;i<=n;i++)
{
if(n%i==0)
{
printf("%d ",i);
}
}
printf("\n");
break;

case 2:
printf("The factors of %d are :\n",n);
while(i<=n)
{
if(n%i==0)
{
printf("%d ",i);
}
i++;
}
printf("\n");
break;

case 3:
do
{
if(n%i==0)
{
printf("%d ",i);
}
i++;
}while(i<=n);
printf("\n");
break;

default:
printf("INVALID CHOICE");
break;

}
}
