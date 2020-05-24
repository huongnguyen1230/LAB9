#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int const soluong=2;
	int const dodaichuoi=50;
	char tenconvat[soluong][dodaichuoi];
	char *ptr[soluong];
	
	int i;
	for(i=0;i<soluong;i++)
	{
		printf("Nhap vao ten con thu %d: ",i+1);
		gets(tenconvat[i]);
	
		char* temp;
		temp=(char*)malloc(dodaichuoi*sizeof(char));
		strcpy(temp,"s");
		strcat(tenconvat[i],temp);
		
		ptr[i]=tenconvat[i];
	}
		printf ("ten o dang so nhieu: \n");
	for(i=0;i<soluong;i++)
	{
	    printf("\n%s",*(ptr+i));
	}
	
	getch();
	return 0;
	}

