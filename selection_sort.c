#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int Small,Swap;
	
	int Arry[8] = {4,3,5,2,1,9,8,7};
	
	for(int i = 0; i < 7; i++){
		Small = i;
		for(int j = i; j < 8; j++){
			if(Arry[j] < Arry[Small]){
				Small = j;
				}
			}
			
		Swap = Arry[Small];
		Arry[Small] = Arry[i];
		Arry[i] = Swap;
		
		}
	
	printf("Arry: ");
	for(int i = 0; i < 8; i++){
		printf("%d,",Arry[i]);
		}
	
	
	
	return 0;
	}
