# program-C
109學年度第2學期 程式練習

## the first week

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
	int a[9];                       //因陣列是從0開始，在此題我們只需10個值，故在中括號內只需填入9即可
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
