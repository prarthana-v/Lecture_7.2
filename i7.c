#include<stdio.h>

main(){
	/* Write a Program to print the below pattern using nested for loop.
	A
	B A
	C B A
	D C B A
	E D C B A
	*/
	char i,j;
	
	for(i='a';i<='e';i++){
		for(j=i;j>='a';j--){
			printf("%c",j);
		}
		printf("\n");
	}
}
