#include <stdio.h>
int main()
{
int a,b,i;
scanf("%d",&a);
b=1;
for( i = 1; i <= a; i++)
{
    b = b * i;
}
printf("Le factoriel de %d est : %d\n",a,b);
    return 0;
}
