#include<stdio.h>

main(){
	/* Write a Program to print the below pattern using nested for loop.
	
	*/
	int i,j;
	int k=1;
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
