# program-C
109學年度第2學期 程式練習

## the first week
實習課練習題
### one(base)
找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%50)%5);
}
```
### two(base)
一個數有幾個因數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;                      //ans為因數個數，需先將ans初始化為0，否則會輸出亂碼
	for(int i=1;i<=n;i++){
		if(n%i==0) ans+=1;      //如果在for迴圈的某一輪中，n被i整除，則表示此輪中的i為n的因數
	}
	printf("%d\n",ans);
}
```
### three(base)
在一陣列中找3的倍數
```C
#include <stdio.h>
int main()
{
	int a[10];                     
	for(int i=0;i<10;i++){
		scanf("%d",& a[i]);
	}
	int ans=0;                      //ans為倍數個數，需先將ans初始化為0，否則會輸出亂碼
	for(int j=0;j<10;j++){
		if(a[j]%3==0) ans+=1;   //如果在for迴圈的某一輪中，a[j]被3整除，則表示此輪中的a[j]為3的倍數
	}
	printf("%d\n",ans);
}
```
### four(base)
整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	else if(n<90 && n>=80) printf("B\n");
	else if(n<80 && n>=60) printf("C\n");
	else printf("F\n");
}
```
### five(advance)
分式化簡
```C
#include <stdio.h>
int main()
{
	int a,b;
	int c,d;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0){   //分式中的分母和分子一定要被共同因數整除，才可化簡
			c=a/i;
			d=b/i;
		}
		
	}
	printf("%d %d\n",c,d);
}
```

## the second week
正課練習題
### one
指標練習
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p= &n1;                                 //指標p指向變數n1
    *p=700;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);      //輸出結果 n1的值由10變為700
}
```
### two
指標練習
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p= &n1;
    *p=700;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2= &n2;                               //指標p2指向變數n2
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);     //輸出結果 n1的值由10變為700，n2的值由20變為300
}
```
### three
陣列、指標練習
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p= &n[0];
    *p=700;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p2= &n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    p2=p;                                                   
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);     //輸出結果 n[0]的值先由10變為700，再由700變成400，n[2]的值由30變為300
}
```

## the third week
正課練習題
### one
練習指標p+2
```C
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;

    p=p+2;                         //指標p加上n，變為指向a[2+n]
    *p=666;

    for(int i=0;i<5;i++){
        printf("a[%d]:%d ",i,a[i]);         //輸出結果 a[2]的值由20變為222，a[4]的值由40變為666
    }
}
```
### two
練習指標p--
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfall()
{
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    printfall();
    int *p=&a[2];
    *p=222;
    printfall();

    p=p+2;
    *p=666;
    printfall();

    p--;                            //指標p減n，變為指向a[2-n]
    *p=555;
    printfall();                    //輸出結果 a[2]的值由20變為222，a[4]的值由40變為666，a[3]的值由30變為555
}
```
### three
練習指標、印出p的值
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfall()
{
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    printfall();
    int *p=&a[2];
    *p=222;
    printfall();
    printf("p心裡小紙條記的值是:%d\n",p);

    p=p+2;
    *p=666;
    printfall();
    printf("p心裡小紙條記的值是:%d\n",p);

    p--;
    *p=555;
    printfall();
    printf("p心裡小紙條記的值是:%d\n",p);
}
```
### four
練習malloc函數
```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);


    return 0;
}
```

## the fourth week
正課練習題
### one
練習結構的宣告、定義
```C
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a;
}
```
### two
練習結構的輸出
```C
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    return 0;
}
```
### three
練習結構(接續上題)
```C
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    return 0;
}
```
### four
練習結構
```C
#include <stdio.h>
struct DATA{
    int x,y;
}a[3];
struct DATA b={100,200};
int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);
    struct DATA c;
    printf("c: %d %d 像亂碼\n",c.x,c.y);

    c=b;
    printf("c: %d %d\n",c.x,c.y);
}
```
### five
練習結構、陣列、指標
```C
#include <stdio.h>
struct POINT{
    float x,y,z;
};
struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};;
int main()
{
    struct POINT *p=&point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    return 0;
}
```

## the fifth week
正課練習題
### one
練習字串
```C
#include <stdio.h>
int main()
{
    char line1[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};       //字串後面會放'\0' 這個特殊符號, 表字串結尾

    printf("%s\n",line1);
    printf("%s\n",line2);
}
```
### two
練習另一種字串宣告的方法, 沒有寫它有多少格
```C
#include <stdio.h>
int main()
{
    char line1[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line1);
    printf("%s\n",line2);

    char line3[]="majority";                           //因為是「雙引號」的字串, 所以會準備正確的格子數目, 並附上字串結尾(輸出時不會出現錯誤)
    printf("%s\n",line3);

    char line4[]={'m','a','j','o','r','i','t','y'};    //未輸入'\0'，會導致輸出時出錯
    printf("%s\n",line4);
}
```
### three
練習很多字串的情形，使用二維陣列
```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};     //使用二維陣列

    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}
```
### four
練習'\0'的值為0
```C
#include <stdio.h>
int main()
{
        printf("請看看這的值:%d",'\0');
}

```
### five
練習字串比大小，使用strcmp()
```C
#include <stdio.h>
#include <string.h>
int main()
{
    char line1[10]="majority";
    char line2[10]="ask";
    if(strcmp( line1,line2 )>0){               //如果line1>line2，則輸出 左邊大
        printf("左邊大\n");
    }else{
        printf("右邊大\n");
    }
}
```
### six
字串排序
```C
#include <stdio.h>
#include <string.h>                       //<string.h>內含strcmp()及strcpy()
char line[100][10];                       //宣告二維陣列
int main()
{
	int  N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(strcmp(line[i],line[j])>0){
				strcpy(temp,line[i]);               //交換line[i]、line[j]的值
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```

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

## the twelfth week
正課練習題
### one
CPE一顆星UVA10062 Tell me the frequencies!(簡化版)
```C
#include <stdio.h>
char line[2000];
int main()
{
	for( int t=0; gets( line ); t++ ){
		int ans[256]={};

		for( int i=0; line[i]!='\0'; i++){
			char c=line[i];
			ans[c]++;
		}

		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}
```
### two
CPE一顆星UVA10062 Tell me the frequencies!
```C
#include <stdio.h>
char line[2000];
int main()
{
	for( int t=0; gets( line ); t++ ){
		int ans[256]={};
		char c[256]={};
		for(int i=0;i<256;i++) c[i]=i;

		for( int i=0; line[i]!='\0'; i++){
			char c=line[i];
			ans[c]++;
		}

		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
            }
        }
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
### three
CPE一顆星UVA10062 Tell me the frequencies!
```C
#include <stdio.h>
char line[2000];
int main()
{
	for( int t=0; gets( line ); t++ ){
		int ans[256]={};
		char c[256]={};
		for(int i=0;i<256;i++) c[i]=i;

		for( int i=0; line[i]!='\0'; i++){
			char c=line[i];
			ans[c]++;
		}

		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
				if( ans[i]==ans[j] && c[i]<c[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
### four
CPE一顆星UVA299：Train Swapping(未完)
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
### five
CPE一顆星UVA299：Train Swapping(完整版)
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		for(int k=0;k<N-1;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
### six
UVA11321：Sort! Sort!! and Sort!!! (step01 input  step02 output)
```C
#include <stdio.h>
int a[10000];
int main()
{
    int M,N;
    while( scanf("%d %d",&N,&M) ==2 ){
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }

        printf("%d %d\n",N,M);
        for(int i=0;i<N;i++){
            printf("%d\n",a[i]);
        }
    }
}
```
### seven
CPE49UVA11321：Sort! Sort!! and Sort!!!(完整版) 
```C
#include <stdio.h>
int a[10000];
void swap( int i, int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main()
{
    int M,N;
    while( scanf("%d %d",&N,&M) ==2 ){
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if( (a[i]%M) > (a[j]%M) ) swap(i,j);
                if( (a[i]%M) ==(a[j]%M) ){
                    if( a[i]%2==0 && a[j]%2!=0 ) swap(i,j);
                    if( a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) swap(i,j);
                    if( a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]) swap(i,j);
                }
            }
        }
        printf("%d %d\n",N,M);
        for(int i=0;i<N;i++){
            printf("%d\n",a[i]);
        }
    }
}
```

## the thirteenth week
正課練習題
### one
Processing時間倒數器練習--step01 使用size()還有background()開出有背景色的窗
```C
size(1024,400);
background(128,158,182);
```
### two
Processing時間倒數器練習--step02 互做mousePressed的互動,先有void setup()及 void draw(),再用if(mousePressed) 及else來切換
```C
void setup(){
  size(1024,400);
}
void draw(){
 if(mousePressed) background(128,158,182);
 else background(170,217,211);
}
```
### three
Processing時間倒數器練習--step03 用textSize()調字大小,text()畫出字,void mousePressed()做按下去的動作
```C
void setup(){
  size(1024,400);
}
void draw(){
 if(mousePressed) background(128,158,182);
 else background(170,217,211);
 textSize(50);
 text(a,100,100);
}
int a=0;
void mousePressed(){
 a++; 
}
```
### four
Processing時間倒數器練習--step04 利用hour()小時,minute()分鐘,second()秒,再用特別的字串加法,顯示垷在的時間
```C
void setup(){
  size(1024,400);
}
void draw(){
 background(170,217,211);
 textSize(50);
 int h=hour();
 int m=minute();
 int s=second();
 text("Now:"+h+":"+m+":"+s,100,100);
}
```
### five
Processing時間倒數器練習--step05 利用 textFont()改成字型createFont()的標楷體, 甪乘上60 60 來算出總秒數
```C
void setup(){
  size(1024,400);
  textFont( createFont("標楷體",50));
}
void draw(){
 background(170,217,211);
 textSize(50);
 int h=hour();
 int m=minute();
 int s=second();
 text( "Now:"+h+":"+m+":"+s,100,100);
 int total=h*60*60+m*60+s;
 text( "總秒數:"+total,100,200);
}
```
### six
Processing時間倒數器練習--step06 把總秒數 像找零錢方法 利用 取餘數 算出時、分、秒
```C
void setup(){
  size(1024,400);
  textFont( createFont("標楷體",50));
}
void draw(){
 background(170,217,211);
 textSize(50);
 int h=hour();
 int m=minute();
 int s=second();
 text( "Now:"+h+":"+m+":"+s,100,100);
 int total=h*60*60+m*60+s;
 int total2=12*60*60+0*60+0;
 text( "總秒數:"+total,100,200);
 int ans=total2=total;
 int hh=ans/60/60%60,mm=ans/60%60,ss=ans%60;
 text("還剩下:"+hh+":"+mm+":"+ss,100,300);
}
```
實習課練習題
### one(advance)
求11 +22+33+…+nn  
輸入 整數n  
輸出 計算出11+22+33+…+nn的值
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans+=((i*10)+i);
	}
	printf("%d",ans);
}
```
### two(advance)
求兩數之最大公因數 請自定義一個能找出兩數之最大公因數的函式  
輸入 a,b兩數  
輸出 求兩數之最大公因數
```C
#include<iostream>
using namespace std;
int GCD(int a, int b){
	int ans=0;
	for(int i=1;i<=b;i++){
  		if( a%i==0 && b%i==0 ){
  			ans=i;
  		}
  	}
  	return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
### three(advance)
區間測速-超速之王 區間長度1.2公里  
輸入 10個整數(是10輛車通過的秒數)  
輸出 第幾輛車是最快的，並把它的時速印出來(只印整數部分，小數部分無條件捨去)
```C
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0],ans=0;
	for(int i=0;i<10;i++){
		if(a[i]<=min){
		min=a[i];
		ans=i+1;
		}
	}
	int ans2=60*60*1.2/min;
	printf("%d %d",ans,ans2);
}
```
### four(advance)
10數排序，從大到小排好  
輸入 10個數字  
輸出 把它們從大到小排好
```C
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
```
### five(base)
正整數平方總和  
輸入 正整數n  
輸出 1* 1+2* 2+...+n* n之總和
```C
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+(i*i);
	}
	printf("%d",sum);
}
```
### six(advance)
兩數之間3的倍數之總和  
輸入 兩個由小到大的正整數(起始數字與終止數字)  
輸出 可計算出起始數字到中止數字間所有3的倍數之總和  
例如 3 9 => 3+6+9=18
```C
#include <stdio.h>
int main()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if( (i%3)==0 ) sum+=i;
	}
	printf("%d",sum);
}
```
### seven(base)
判斷座標的象限  
輸入 兩數(x座標與y座標)  
輸出 判斷所輸入座標的所在象限(僅考慮在四個象限的情況，不考慮在軸線及原點的情況)
```C
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if( x>0 && y>0 ) printf("1\n");
	if( x<0 && y>0 ) printf("2\n");
	if( x<0 && y<0 ) printf("3\n");
	if( x>0 && y<0 ) printf("4\n");
}
```
### eight(base)
求n之所有因數和  
輸入 一正整數n  
輸出 n之所有因數和
```C
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if( n%i==0 ) sum+=i;
	}
	printf("%d",sum);
}
```

## the fourteenth week
正課練習題
### one
Processing抽籤--step01 在setup()設定裡, 用亂數random(60)取出小於60的數,用text()印出來,textSize()字大小設大一些
```C
void setup(){
 size(300,200);
 float ans=random(60);
 textSize(30);
 text(ans,30,30);
}
```
### two
Processing抽籤--step02 修改後,利用(int)random(60)將float轉成int,利用mosuePressed()來改亂數,記得background()清背景
```C
void setup(){
 size(300,200);
 textSize(30);
}
int ans=0;
void draw(){
 background(128,158,182);
 text(ans,30,30);
}
void mousePressed(){
 ans=(int)random(60); 
}
```
### three
Processing亂數洗牌--step03 先宣告Java的陣列 int [] a = {...}, 再用for迴圈,印出陣列的值, mousePressed()時,利用random()挑2個數i1,i2,將a[i1],a[i2]交換
```C
int []a={1,2,3,4,5,6,7,8,9,10};
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(128,158,182);
  for(int i=0;i<10;i++){
   text(a[i],i*40,100);
  }
}
void mousePressed(){
 int i1=(int)random(10);
 int i2=(int)random(10); 
 int temp=a[i1];a[i1]=a[i2];a[i2]=temp; 
}
```
### four
Processing大樂透--step04 使用作弊的方法,事先亂數洗牌10000次,再拿前面6個數字,當成中獎號碼。小心,Java陣列的宣告有點特別, 要記得裡面用for迴圈放值
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
}
void draw(){
  background(128,158,182);
  for(int i=0;i<6;i++){
   text(a[i],i*50,100);
  }
}
void mousePressed(){
 for(int i=0;i<10000;i++){
   int i1=(int)random(49);
   int i2=(int)random(49); 
   int temp=a[i1];a[i1]=a[i2];a[i2]=temp; 
 }
}
```
### five
Processing大樂透--step05 大樂透的球,會慢慢掉出來,有個bug是會N++超過6顆球
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
  for(int i=0;i<10000;i++){
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(128,158,182);
  for(int i=0;i<N;i++){
   fill(255);ellipse(50+i*50,100,40,40);
   textAlign(CENTER,CENTER);
   fill(0); text(a[i],50+i*50,100);
  }
}
void mousePressed(){
 N++;
}
```
實習課練習題
### one(advance)
奇數反流  
輸入 一整數n，後接n個整數  
輸出 請將這N個數中的奇數，依照出現順序反向印出
```C
#include <stdio.h>
int main()
{
	int n,a[200];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		if( (a[i]%2)!=0 ) printf("%d ",a[i]);
	}
}
```
### two(base)
大位王  
輸入 一個整數  
輸出 該整數的最大位的數字  
例如 -357的最大位數字為3、1578的最大位數字為1，而0的最大位數字為0
```C
#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	if(c[0]=='-') printf("%c\n",c[1]);
	else printf("%c\n",c[0]);
}
```
### three(base)
判斷該年是否為閏年  
輸入 西元n年  
輸出 n is a leap year. 或 n is not a leap year.  
提示 西元年份除以4可整除，且除以100不可整除，為閏年。西元年份除以100可整除，且除以400不可整除，為平年
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if( (n%4)==0 && (n%100)!=0 ){
		printf("%d is a leap year.\n",n);
	}
	else printf("%d is not a leap year.\n",n);
}
```
### four(base)
把數字倒著印出來  
輸入 10個整數  
輸出 把這10個數字倒著印出來
```C
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
```
### five(base)
區間測速 區間長度為1.2公里  
輸入 1個整數(車輛通過該區間所行駛的秒數)  
輸出 將它的時速印出來(只印整數部分，小數部分無條件捨去)
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=60*60*1.2/n;
	printf("%d",ans);
}
```
