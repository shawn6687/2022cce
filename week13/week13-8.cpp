#include <stdio.h>
int main()
{
	int a[11],count=0;
	int i=0,x,j;
	scanf("%d",&a[0]);
	while(a[i]!=0)
	{
		i++;
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(j=0;j<i;j++)
	{
		if(a[j]==x)
		count++;

	}
	printf("%d\n",count);
}
