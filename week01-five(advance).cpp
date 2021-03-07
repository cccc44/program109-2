#include <stdio.h>
int main()
{
	int a,b;
	int c,d;
	scanf("%d%d",&a,&b);
		for(int i=1;i<=b;i++){
			if(a%i==0 && b%i==0){
				c=a/i;
				d=b/i;
			}

		}

	printf("%d %d\n",c,d);
}
