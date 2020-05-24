#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char *ptr[5];
	int i;
	int j;
	char cpyptr1 [5][10], cpyptr2[5][10];
	char *temp;
	for (i=0;i<5;i++)
	{
		printf ("enter a string:");
		scanf ("%s", cpyptr1[i]);
		ptr[i] = cpyptr1[i];
	}
	for (i=0; i<5;i++)
		strcpy(cpyptr2[i], cpyptr1[i]);
	for (i=0; i<4; i++)
	{
		for (j=i+1; j<5; j++)
		{
			if (strcmp(ptr[i], ptr[j])>0)
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j]= temp;
			}
		}
		printf ("the original list is: \n");
		for (i=0; i<5; i++)
		printf ("%s\n", cpyptr2[i]);
		
		printf ("the sorted list is\n");
		for (i=0; i<5; i++)
		printf ("%s\n", ptr[i]);
	}

}
