#include <stdio.h>
int f(int a,int b,int c){
	int m=0;
	if(a<=b && a<=c) m=a;
	if(b<=a && b<=c) m=b;
	if(c<=a && c<=b) m=c;
	return m;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",f(a,b,c));
}
