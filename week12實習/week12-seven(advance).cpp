#include <stdio.h>
int main()
{
	int a[3],temp;
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(int k=0;k<2;k++){
		for(int i=0;i<2;i++){
			if( a[i]<a[i+1] ){
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	int ans=0;

	ans=(a[0]*100)+(a[2]+1)+(a[1]*10);
	printf("%d",ans);


}
