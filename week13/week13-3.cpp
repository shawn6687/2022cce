#include <stdio.h>
#include <string.h>
int main()
{
	char a[81];
	int len,i;
	scanf("%s",&a);len=strlen(a);
	for(i=0;i<(len/2);i++)
	{
		if(a[i]!=a[len-1-i])
		break;
	}
	if(i==(len/2))printf("YES\n");
	else printf("NO\n");
}
