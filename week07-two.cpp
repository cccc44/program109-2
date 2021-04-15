#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][75];
char others[75];
int compare( const void *p1,const void *p2)
{
	return strcmp( (char*)p1,(char*)p2 );
}
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%s",&name[i]);
		gets(others);
	}

	qsort(name,n,75,compare);
	int ans=1;
	for(int i=0;i<n;i++){
		if(strcmp(name[i],name[i+1])!=0){
			printf("%s %d\n",name[i],ans);
			ans=1;
		}
		else{
			ans++;
		}

	}
}
