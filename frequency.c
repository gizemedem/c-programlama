#include<stdio.h>
int frequency(int number,int array[]){
	int counter=0,i;
	for(i=0;i<10;i++){
		if(array[i]==number){
			counter++;
		}
	}
	
	return counter;
	
}
int main(){
	int number;
	int N[10];
	int i;
	printf("enter numbers:");
	for(i=0;i<10;i++){
		scanf("%d",&N[i]);
	}
	
	printf("enter a number");
	scanf("%d",&number);
	
	
	printf(" repeated %d number of times",frequency(number,N));
	
	
	
return 0;	
	
}
