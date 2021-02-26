# program109-2
109學年度第2學期 程式練習

## the first week

### one(base)
找錢
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
	int ans=0;
	for(int i=1;i<=n;i++){
		if(n%i==0) ans+=1; 
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
	int ans=0;
	for(int j=0;j<10;j++){
		if(a[j]%3==0) ans+=1; 
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

```
