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
