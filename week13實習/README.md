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
