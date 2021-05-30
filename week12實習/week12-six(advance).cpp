#include <stdio.h>
int main()
{
	int n,m,ans=0,j;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		for(j=2;j<i;j++){
			if((i%j)==0) break;
		}
		if(j==i) ans++;
	}
	printf("%d",ans);
}
