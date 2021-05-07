#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
char others[80];
int compare( const void * p1,const void * p2 )
{
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;

	int r=strcmp( s1, s2);
	if(r>0) return 1;
	if(r==0) return 0;
	if(r<0) return -1;
}
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%s",&name[i]);
		gets( others );
	}
	qsort( name, n, 80, compare );

	int ans=1;
	for(int i=0;i<n;i++){
		if( strcmp(name[i],name[i+1])!=0 ){
			printf("%s %d\n",name[i],ans);
			ans=1;
		}
		else{
			ans++;
		}
	}
}
