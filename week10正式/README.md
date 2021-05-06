## the tenth week
正課練習題
### one
CPE一顆星UVA10226 Hardwood species(先把資料讀進來)
```C
#include <stdio.h>
#include <string.h>
char line[1000];                                                     //line陣列內是樹的名稱(不會進行排序)，亦代表輸入幾行
int main()
{
	int T;
	scanf("%d\n\n",&T);                                 
	for(int t=0;t<T;t++){
		int N=0;                                             //N為樹的個數
		while( gets(line)!=NULL ){                           //gets()可讀入一整行(橫)。讀失敗會變NULL，離開迴圈。
			if( strcmp(line,"")==0) break;               //遇到空行，也會離開迴圈

			printf("%s\n",line);
		}
        printf("======分隔線======\n");
	}
}
```
### two
CPE一顆星UVA10226 Hardwood species(利用正確位置的 N++  數出正確的樹數目)
```C
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while( gets(line)!=NULL ){
			if( strcmp(line,"")==0) break;

			N++;                                     //統計樹的數目
		}
		printf("有幾棵樹? %d\n",N);
        printf("======分隔線======\n");
	}
}
```
### three
CPE一顆星UVA10226 Hardwood species(陣列 tree 裡面放樹的名字, 最後印出來, 確認沒有錯)
```C
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];                                       //tree陣列裡是樹的名稱(會進行排序)
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while( gets(line)!=NULL ){
			if( strcmp(line,"")==0) break;
			strcpy( tree[N], line );              //把line裡面樹的名字放到tree內
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		for(int i=0;i<N;i++){

				printf("%s\n",tree[i]);
		}
		printf("======分隔線======\n");
	}
}

```
### four
CPE一顆星UVA10226 Hardwood species(qsort() 配合你的 compare() 來把樹名排序)
```C
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
		qsort(tree,N,32,compare);                            //替tree陣列排序，由A至Z
		for(int i=0;i<N;i++){
				printf("%s\n",tree[i]);
		}
		printf("======分隔線======\n");

	}
}

```
### five
CPE一顆星UVA10226 Hardwood species(印出答案, 分成for迴圈前面開頭, for迴圈中間 {收尾+開頭} for迴圈後面收尾)
```C
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

```
### six
CPE一顆星UVA10226 Hardwood species(最終版)
```C
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
		if(t>0) printf("\n");
		int ans=1;
		for(int i=0;i<N;i++){
			if( strcmp(tree[i],tree[i+1])!=0 ){
				printf("%s %.4f\n",tree[i],100*ans/(float)N);
				ans=1;
			}
			else{
				ans++;
			}
		}
		
	}
}
```
