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
		printf("有幾棵樹? %d\n",N);
		qsort(tree,N,32,compare);
		for(int i=0;i<N;i++){

				printf("%s\n",tree[i]);
		}
		printf("======分隔線======\n");

	}
}
