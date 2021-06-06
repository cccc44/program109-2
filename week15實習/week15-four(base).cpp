#include <stdio.h>
int main()
{
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int ans=(x2-x1)*(y2-y1);
	if(ans>=0) printf("%d",ans);
	if(ans<0) printf("%d",ans-(ans*2));
}
