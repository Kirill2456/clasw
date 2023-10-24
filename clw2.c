#include <stdio.h>

int main()
{
printf("\t1-e zadanie\n");
int a=35,b=87;
for (int i=a;i<b;i++)
{
if(i%7==1 || i%7==2 || i%7==5)
{
printf("%d\n",i);
} 
}

printf("\t2-e zadanie\n");
a=100;
b=200;
int temp=0;
for (int i=a; i<b; i++)
{
if (i%17==0)
{
temp+=i;
}
}
printf("%d\n",temp);

printf("\t3-e zadanie\n");
a=1;
b=99;
temp=0;
int i=a;
while(1)
{
if(i%2!=0)
{
temp+=i;
}
i++;
if(i>99)
{
printf("%d\n",temp);
break;
}
}

printf("\t4-e zadanie\n");
a=10;
b=99;
temp=1;
for (int i=a; i<b; i++)
{
if (i%2!=0 && i%13==0)
{
temp*=i;
}
}
printf("%d\n",temp);
return 0;
}
