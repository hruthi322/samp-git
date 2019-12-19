#include<stdio.h>
main()
{
	int a,b;
	char ch;
printf("enter two values");
scanf("%d %d",&a,&b);
printf("\n enter operator of ypur choice");
ch=getche();
//fflush(stdin);
//scanf("%c",&ch);
switch(ch)
{
case '+':printf("sum is %d",a+b);break;
case '-':printf("sub is %d",a-b);break;
case '*':printf("mul is %d",a*b);break;
default:printf("not valid");

}
}

