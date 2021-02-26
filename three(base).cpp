#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",& a[i]);
		}
	int ans=0;
	for(int j=0;j<10;j++){
		if(a[j]%3==0) ans+=1;
		}

	printf("%d\n",ans);
}
