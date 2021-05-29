#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	if(c[0]=='-') printf("%c\n",c[1]);
	else printf("%c\n",c[0]);
}
