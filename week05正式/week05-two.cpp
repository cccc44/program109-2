#include <stdio.h>
int main()
{
    char line1[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line1);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);

    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line4);
}
