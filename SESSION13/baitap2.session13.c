#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char tenconvat[2][50];
	char *ptr[2];
	
	int i;
	for(i=0;i<2;i++)
	{
		printf("Nhap vao ten con thu %d: ",i+1);
		gets(tenconvat[i]);
	
		char* temp;
		temp=(char*)malloc(50*sizeof(char));
		strcpy(temp,"s");
		strcat(tenconvat[i],temp);
		
		ptr[i]=tenconvat[i];
	}
		printf ("ten o dang so nhieu: \n");
	for(i=0;i<2;i++)
	{
	    printf("\n%s",*(ptr+i));
	}
	
	getch();
	return 0;
	}

