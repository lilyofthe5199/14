#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int n[5];
	
	printf("input 5 integers :");
	scanf("%d %d %d %d %d", n, n+1, n+2, n+3, n+4);
	
	insertDataToTail(n[0]);
	insertDataToTail(n[1]);
	insertDataToTail(n[2]);
	insertDataToTail(n[3]);
	insertDataToTail(n[4]);
	
	print_list();
	print_node(2);
	
	return;
}
