#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0],ans=0;
	for(int i=0;i<10;i++){
		if(a[i]<=min){
		min=a[i];
		ans=i+1;
		}
	}
	int ans2=60*60*1.2/min;
	printf("%d %d",ans,ans2);
}
