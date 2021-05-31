實習課練習題
### one(advance)
數字個數  
輸入 0表示結束，至多不超過10個正整數  
輸出 顯示所輸入正整數的個數
```C
#include <stdio.h>
int main()
{
	int a,ans=0;
	while( scanf("%d",&a)!=EOF ){
		if(a==0) break;
		ans++;
	}
	printf("%d",ans);
}
```
### two(base)
剩餘啤酒有幾手又幾瓶  
輸入 購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）  
輸出 共剩幾手啤酒又幾瓶
```C
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	int ans = p-(d*6);
	printf("%d %d",ans/6,ans%6);

}
```
### three(base)
三數最小  
輸入 三正整數  
輸出 回傳其最小值
```C
#include <stdio.h>
int f(int a,int b,int c){
	int m=0;
	if(a<=b && a<=c) m=a;
	if(b<=a && b<=c) m=b;
	if(c<=a && c<=b) m=c;
	return m;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",f(a,b,c));
}
```
### four(base)
計算立方值  
輸入 六個整數  
輸出 六個數的立方值
```C
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("%d\n",a*a*a);
	printf("%d\n",b*b*b);
	printf("%d\n",c*c*c);
	printf("%d\n",d*d*d);
	printf("%d\n",e*e*e);
	printf("%d\n",f*f*f);
}
```
### five(advance)
判斷平方數  
輸入 讀入一個1~1000000的數字  
輸出 判斷該數字是否為某數字的平方數，如果是，則印出該數字為哪個數字的平方數，如果不是，則印出0。
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n==(i*i)) ans=i;
	}
	printf("%d",ans);

}
```
### six(advance)
計算質數個數  
輸入 2個 2~10000的數字  
輸出 兩數字間(含兩數字，假設第2個數字較大)，有幾數字是質數
```C
#include <stdio.h>
int main()
{
	int n,m,ans=0,j;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		for(j=2;j<i;j++){
			if((i%j)==0) break;
		}
		if(j==i) ans++;
	}
	printf("%d",ans);
}
```
### seven(advance)
三數組合  
輸入 三個 0~9 的數字  
輸出 將其組合成最大的數字，並計算將該數字加1的結果
```C
#include <stdio.h>
int main()
{
	int a[3],temp;
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(int k=0;k<2;k++){
		for(int i=0;i<2;i++){
			if( a[i]<a[i+1] ){
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	int ans=0;

	ans=(a[0]*100)+(a[2]+1)+(a[1]*10);
	printf("%d",ans);


}
```
### eight(base)
找千位數  
輸入 1000~100000 的數字  
輸出 其千位數的數字
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);
}
```
