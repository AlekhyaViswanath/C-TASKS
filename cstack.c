#include<stdio.h>

int esp=0;

int main()
{
	int a[50],ch,x;
	printf("1.Pusp\n");
	printf("2.Pop\n");
	scanf("%d",&ch);
	if(ch==1)
	{
	    scanf("%d",&x);
		push(x,a);
	}
		else if(ch==2)
		pop(a);
		
		else
		 printf("Invalid choice\n");
}

int push(int x,int a[])
{
	a[esp]=x;
	esp++;
	return esp;

}

int pop(int a[])
{
	 esp--;
	return a[esp];
}

