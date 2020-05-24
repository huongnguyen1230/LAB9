#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a, str [81], *ptr;
	printf ("enter a sentence: ");
	gets(str);
	printf ("enter character to search for: ");
	a=getchar();
	ptr=strchr(str,a);
	
	printf ("string starts at address: %u\n", str);
	printf ("first occurence of the character is at address: %u\n\n", ptr);
	printf ("position of first occurrence ( starting from 0 ) is: %d\n\n", ptr-str);
	
	
}
