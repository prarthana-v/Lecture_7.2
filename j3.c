#include<stdio.h>

main(){
	/* Write a Program to print the below pattern using nested for loop.
	5
	4 4 
	3 3 3
	2 2 2 2
	1 1 1 1 1
	*/
	int i,j;
	
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf("%d",i);
		}
		printf("\n");
	}
}
