#include <stdio.h>
#define MIN(x,y) (((x)<(y))?(x):(y))
#define SEC_YEAR (60*60*24*360)
long int factorial(long int n)
{
if(n==0 || n==1)
return 1;
return  n*factorial(n-1);
}
int main()
{

	printf("\t1-e zadanie\n");
int u=200;
while (1)
{
if (u%17==0)
{
printf("%d\n",u);
break;
}
u++;
}

	printf("\t2-e zadanie\n");
printf("vvedite factorial\n");
long int f;
scanf("%ld",&f);
long int arrf[20];
for (int i=0; i<19; i++)
{
arrf[i] = factorial(i);
if (arrf[i]==f)
{
printf("%d\n",i);
break;
}
}

	printf("\t3-e zadanie\n");
printf("vvedite chislo\n");
int chislo;
scanf("%d",&chislo);
for(int i=0; i<chislo; i++)
{
 for(int j=1; j<chislo-i; j++)
{
printf(" ");
}
for (int j=chislo-2*i; j<=chislo; j++)
{
printf("^");
}
printf("\n");
}
	printf("\t4-e and 5-e zadanie\n");
printf("vvedite dva chisla\n\n");
int a,b;
scanf("%d",&a);
scanf("%d",&b);
printf("min chislo = %d\n",MIN(a,b));
printf("secund v godu %d\n",SEC_YEAR);

return 0;
}
