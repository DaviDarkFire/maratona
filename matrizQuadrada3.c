#include <iostream>
#include <stdio.h>
#include <math.h>
 
using namespace std;

int conta_digitos(int n){
	int count = 0;
	while(n != 0){
		n = n/10;
		count++;
	}
	return count;
}
 
int main() {
    int n;
	scanf("%d",&n);	
	while(n != 0){								
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				
				if(j == 0){
	  				printf("%*d", conta_digitos((int)pow(2,2*n-2)),(int)pow(2,i+j));      
				}else{
	 				printf(" %*d", conta_digitos((int)pow(2,2*n-2)),(int)pow(2,i+j));	
	 			}	
			}
			printf("\n");			
		}
		printf("\n");									 				
		scanf("%d",&n);
	}
	return 0;
}
