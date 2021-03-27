#include <stdio.h>
#include <string.h>
int main()
{
    char line1[10]="majority";
    char line2[10]="ask";
    if(strcmp( line1,line2 )>0){
        printf("左邊大\n");
    }else{
        printf("右邊大\n");
    }
}
