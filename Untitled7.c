#include<stdio.h>
#include<stdlib.h>

main()
{
	int rno,s1,s2,s3,tot=0;
	char name[30];
	float avg=0;
	printf("enter the name\n");
	scanf("%s",name);
	printf("enter the rollno\n");
    scanf("%d",&rno);
    printf("enter the marks\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    tot=s1+s2+s3;
    avg=(float)tot/3;
    printf("avg is %f",avg);
	
	
}
