#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare( const void *p1,const void *p2)
{
	return strcmp( (char*)p1,(char*)p2 );
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while( gets(line)!=NULL ){
			if( strcmp(line,"")==0) break;
			strcpy( tree[N], line );
			N++;
		}
		qsort(tree,N,32,compare);
		int ans=1;
		for(int i=0;i<N;i++){
			if( strcmp(tree[i],tree[i+1])!=0 ){
				printf("%s %d\n",tree[i],ans);
				ans=1;
			}
			else{
				ans++;
			}
		}

	}
}
