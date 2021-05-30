#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	int ans = p-(d*6);
	printf("%d %d",ans/6,ans%6);

}
