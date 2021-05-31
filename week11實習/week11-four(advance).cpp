#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if( (i%7) == 0 ) printf("%d ",i);
	}
}
