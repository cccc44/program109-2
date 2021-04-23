## the eighth week
正課練習題
## one
CPE一顆星UVA10226 Hardwood species
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void * p1,const void * p2)
{
	return strcmp( (char*) p1,(char*) p2 );
}
int main()
{
	int n;
	scanf("%d\n\n",&n);
	int m=0;
	for(int i=0; ;i++){
		char* now=gets( tree[i] );
		if( now == NULL ){
            m=i;
            break;
		}
		if( strcmp( tree[i],"")==0){
            m=i;
            break;
		}
	}
	qsort( tree, m, 32, compare );
	float ans=1;
	for(int i=0;i<m;i++){
		if(strcmp(tree[i],tree[i+1])!=0){
			printf("%s %.4f\n",tree[i],100*ans/(float)m);
			ans=1;
		}
		else{
			ans++;
		}
	}
}
```
