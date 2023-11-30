/*
Write a Program to print the below pattern using nested for loop.
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
main(){
	int i,j;
	char k='a';
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%c",k);
			k++;
		}
		printf("\n");
	}

}
