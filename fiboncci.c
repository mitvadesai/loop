#include<stdio.h>
int main()
{
	int i,n,f=0,s=1,sum;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d \n",f);
		sum=f+s;
		f=s;
		s=sum;
	}
}
