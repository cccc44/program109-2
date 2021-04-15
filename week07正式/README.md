## the seventh week
正課練習題
### one
字串排序(另一種寫法:運用qsort)
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
int compare(const void *p1,const void * p2)
{
    return strcmp( (char*)p1,(char*)p2 );
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&line[i]);
	}
    qsort (line,n,10,compare);
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}
}
```
### two
CPE一顆星UVA10420 List of Conquests
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][75];                                     //有2000行(橫)，一行有75個
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
```
