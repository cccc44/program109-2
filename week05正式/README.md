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
