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
