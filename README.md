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
