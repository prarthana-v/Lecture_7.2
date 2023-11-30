#include<stdio.h>

main(){
	/* Write a Program to print the below pattern using nested for loop.
	A 
	2 B
	C 3 D
	4 E 5 F
	G 6 H 7 I
	*/
	int i,j;
	int k=1;
	char l='a';
	
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			if(i%2==0){
				
				if(j%2!=0){
					printf("%c",l);
					l++;
				}
				
				else{
					printf("%d",++k);
					
				}
			}
			
			else{
				
				if(j%2!=0){
					printf("%c",l);
					l++;
				}
				
				else{
					printf("%d",++k);
				
				}
			}
		}
		printf("\n");
	}
}
