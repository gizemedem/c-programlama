#include <stdio.h>
#include <stdlib.h>

int strLength(char []);
void strReverse(char [],int strLength(A));


int main(){
	
	char str[100];
	
	printf("Bir string giriniz:");
	gets(str);
	
	printf("Katarin uzunlugu = %d\n",strLength(str));
	
	strReverse(str,strLength);
	
}

int strLength(char A[]){
	
	int k;
	
	while(A[k] != '\0')
		k++;
		
	return k;
}

void strReverse(char A[],int strLength(A)){
	
	int i,temp;
	
	for(i = 0; i < strLength(A)/2; i++){ // fatih
		temp = A[i];
		A[i] = A[strLength(A)-i-1];
		A[strLength(A)-i-1] = temp;	
	}
	
	puts(A);
}