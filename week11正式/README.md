## the eleventh week
正課練習題
### one
練習qsort() 及 compare()
```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare( const void *p1, const void *p2)
{
    int d1 = *(int*)p1;
    int d2 = *(int*)p2;
    if( d1 > d2) return 1;
    if( d1 == d2) return 0;
    if( d1 < d2) return -1;
}
int main()
{
    qsort(a, 10, sizeof(int), compare );
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
```
### two
CPE一顆星UVA10420 List of Conquests( compare()的另一種寫法 )
```C
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
```
### three
複習struct結構
```C
#include <stdio.h>
struct data{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```
### four
續上題，將struct改用typedef讓type name短一點
```C
#include <stdio.h>
typedef struct data{
    int ans;
    char c;
}DATA;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```
### five
CPE一顆星UVA10062 Tell me the frequencies!( 僅含step01 讀資料，step02 印資料 )
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){
		if(t>0) printf("\n");
		printf("blahlblahblah\n");
		printf("blahlblahblah\n");
		printf("blahlblahblah\n");
	}
}
```
### six
CPE一顆星UVA10062 Tell me the frequencies!( step03 用ans[]來存答案，step04 字串的迴圈來統計，step05 印出來 )
```C
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
	for(int t=0;gets(line);t++){
		for(int i=0;i<256;i++){
			ans[i]=0;
		}
		for(int i=0;line[i]!=0;i++){
			char c = line[i];
			ans[c]++;
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}
```
