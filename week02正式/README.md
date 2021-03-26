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
