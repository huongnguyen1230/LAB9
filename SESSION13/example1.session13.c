#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int var =500, *ptr_var;
	
	ptr_var = &var;
	
	printf (" the value %d is stored at address of var: %u\n", var, &var);
	/* printfs value stored int ptr variable (ptr_var) and address where ptr_var is stored*/

	printf (" the value %u is stored at address: %u\n", ptr_var, &ptr_var);
	/* prints value of var and address where var is stored, using pointer to vaiable*/
	
	printf (" the value %d is stored at address: %u", *ptr_var, ptr_var);
	
	

}
