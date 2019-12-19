#include<stdio.h>
main()
{
int i,count=0;
for(i=0;i<256;i++,count++)
{
printf("\n%d \t%c",i,i);
if(count==20)
{
printf("prress any key");
getch();
count=0;
}

}
}
