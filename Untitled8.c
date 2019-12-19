#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
int a,b;
if(argc<0)
  	printf("invalid no of args");
else
{
a=atoi(argv[1]);
b=atoi(argv[2]);
printf("\n sum is : %d",a+b);
}
}


