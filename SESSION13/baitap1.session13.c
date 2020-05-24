#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *ptr; // khai bao con tro//
	ptr= (char*)malloc(100*sizeof(char));
	int i,j,n, k=0; //khai bao bien//
	printf ("nhap vao mot chuoi: \n");
	scanf ("%s", ptr);
	n=strlen(ptr);
	
	
	for (i=0,j=n-1; i<=n, j>n; i++, j--)
	{
		if (*(ptr+i)==*(ptr+j))
		{
			k++;
		}
	}
		if (k == (n))
		{
			printf ("chuoi doc xuoi nguoc deu giong nhau\n");
		}
		else
		{
			printf ("chuoi binh thuong\n");
		}
	
	getch();
	return 0;
}
