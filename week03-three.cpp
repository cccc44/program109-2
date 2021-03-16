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

