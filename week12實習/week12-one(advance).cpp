#include <stdio.h>
int main()
{
	int a,ans=0;
	while( scanf("%d",&a)!=EOF ){
		if(a==0) break;
		ans++;
	}
	printf("%d",ans);
}
