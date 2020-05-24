#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *ptr;
	int i;
	
	ptr =(int*)calloc(5, sizeof (int*));
	if (ptr!=NULL)
	{
		*ptr = 1;
		*(ptr + 1)= 2;
	ptr [2] = 4;
	ptr [3] = 8;
	ptr [4]	= 16;
	ptr = (int*)realloc(ptr,7*sizeof(int));
	if (ptr!=NULL)
	{
		printf ("now allocating more memory...\n");
		ptr[5] = 32;
		ptr[6] = 64;
		
		for (i=0; i<7; i++)
		{
			printf ("ptr[%d] hold %d\n", i, ptr[i]);
		}
		realloc (ptr,0);
		return 0;
	}
	else
	{
		printf ("not enough memory - realloc failed\n");
		return 1;
	}
	}
	else
	{
		printf ("not enough memory - calloc failed\n");
		return 1;
	}
	
	
}
