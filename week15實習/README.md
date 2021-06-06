實習課練習題
### one(advance)
億萬富翁 有一個富翁的財產超過一萬億  
輸入 一整數n(富翁的財產總額)  
輸出 在財產總額上，從後方每三位加一個逗號
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char c[100];
	scanf("%s",&c);
	for(int i=0;i<strlen(c);i++){
		if( (strlen(c)-i)%3 ==0 && i!=0) printf(",");
		printf("%c",c[i]);
	}
}
```
### two(advance)
秒數換算  
輸入 總秒數  
輸出 將其轉換成時:分:秒的格式
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%02d:%02d:%02d",n/60/60,n/60%60,n%60%60);
}
```
### three(base)
水杯接水 有一桶水要分裝到杯子中  
輸入 水桶中的水N毫升，杯子的容量M毫升  
輸出 至少需要幾個杯子才能承接水桶裡的水
```C
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if( n%m == 0) printf("%d",n/m);
	else printf("%d",(n/m)+1);
}
```
### four(base)
平面兩座標的面積  
輸入 平面兩點座標的四個整數值(x1,y1,x2,y2)  
輸出 所圍之面積  
例如 輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積
```C
#include <stdio.h>
int main()
{
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int ans=(x2-x1)*(y2-y1);
	if(ans>=0) printf("%d",ans);
	if(ans<0) printf("%d",ans-(ans*2));
}
```
### five(base)
整數向量相加  
輸入 一整數n，再依序讀入兩筆各有N個整數的向量  
輸出 此兩筆向量和
```C
#include <stdio.h>
int main()
{
	int n,a[20],b[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]+b[i]);
	}
}
```
