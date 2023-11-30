#include<stdio.h>

main(){
	/* Write a Program to print the below pattern using nested for loop.
	1 0 1 0 1
	1 0 1 0
	1 0 1
	1 0 
	1
	*/
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("%d",j%2);
		}
		printf("\n");
	}
}
