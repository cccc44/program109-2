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
