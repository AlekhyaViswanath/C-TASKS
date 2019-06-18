#include<stdio.h>
int main()
{
	int a[50],rsp,rbp;
	rsp=0;
	printf("1.Pusp\n");
	printf("2.Pop\n");
	scanf("%d",ch);
	if(ch==1)
		scanf("%d",&x);
		push(x);
	else if(ch==2)
		pop();

}

void push(int x)
{
	a[esp]=x;
	esp++;

}

int pop()
{
	esp--;
	return a[esp];
}