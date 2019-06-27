#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char a[10];
int shift, i;
int var=13;

printf("Enter shifting variable \n:");
scanf("%d",&var);
shift=var;
printf("Enter the plain text :");
scanf("%s",a);
//printf("%s",a);
int l =  strlen(a);
printf("%d", l);
for (i = 0;i < strlen(a);i++)
{
	a[i] = a[i] + shift;
	printf("%c",a[i]);
if(isupper(a[i]))
{ 
	printf("%c",a[i]);
 a[i] = a[i] + shift;
}
else
{
a[i] = a[i] + shift;
//y = x;
//printf("%c", y);
}
//puts(a);
}
printf("\n");
}


