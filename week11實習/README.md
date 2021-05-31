實習課練習題
### one(advance)
字串中的數字個數  
輸入 一個至多80個字的字串  
輸出 字串中有多少個數字
```C
#include <stdio.h>
int main()
{
	char c[85];
	scanf("%s",&c);
	int ans=0;
	for(int i=0;c[i]!='\0';i++){
		if( c[i]=='0' || c[i]=='1' || c[i]=='2' || c[i]=='3' || c[i]=='4' || c[i]=='5' || c[i]=='6' || c[i]=='7' || c[i]=='8' || c[i]=='9')
		ans++;
	}
	printf("%d",ans);
}
```
### two(advance)
求出最大值與最小值兩者之差 利用自定義函式判斷最大值與最小值  
輸入 四個正整數  
輸出 最大值減最小值之差
```C
#include <iostream>
using namespace std;
int max( int a,int b,int c,int d ){
	int s[4]={a,b,c,d};
	int M=a;
	for(int i=0;i<4;i++){
		if( s[i]>M ) M=s[i];
	}
	return M;
}
int min( int a,int b,int c,int d ){
	int s[4]={a,b,c,d};
	int m=a;
	for(int i=0;i<4;i++){
		if( s[i]<m ) m=s[i];
	}
	return m;
}


int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
```
### three(advance)
奇數之和  
輸入 一個整數n  
輸出 由1至n中間的奇數和
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++){
		if( (i%2)!=0 )
		ans+=i;
	}
	printf("%d",ans);
}
```
### four(advance)
兩數間可被7整除的數  
輸入 兩個整數  
輸出 兩數之間所有可能被7整除的整數
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if( (i%7) == 0 ) printf("%d ",i);
	}
}
```
### five(base)
整數二元四則運算  
輸入 兩個整數a與b及其中間的四則運算子c  
輸出 其運算結果
```C
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if( c=='/' ) printf("%d",a/b);
	if( c=='*' ) printf("%d",a*b);
	if( c=='-' ) printf("%d",a-b);
	if( c=='+' ) printf("%d",a+b);
}
```
### six(base)
幾日為星期幾 假設某月的1號為星期日  
輸入 日數  
輸出 並找出對應的星期數(週日以0表示，週一以1表示，以此類推，至週六以6表示)
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	printf("%d",(n%7)-1);

}
```
### seven(base)
零錢總額 假設有50元、5元和1元等3種硬幣  
輸入 三種硬幣的數量(分別讀入50元、5元、1元硬幣的數量)  
輸出 這些硬幣的總額
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a*50+5*b+1*c);
}
```
### eight(base)
兩數平方差  
輸入 兩變數a與b  
輸出 a* a-b* b之值
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",(a*a)-(b*b));
}
```
