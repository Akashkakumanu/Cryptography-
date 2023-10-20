#include<stdio.h>
#include<string.h>
int main()
{
    char alpha[]="abcdefghijklmnopqrstuvwxyz";
	char key[]="bcdefghijklmnopqrstuvwxyza";
	char a[100];
	printf("Enter plain text");
	gets(a);
	for ( int i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]+1);
		
	}
}
