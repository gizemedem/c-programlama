#include<stdio.h>
int frequency(int sayi,int array[]){
	int sayac=0,i;
	for(i=0;i<10;i++){
		if(array[i]==sayi){
			sayac++;
		}
	}
	
	return sayac;
	
}
int main(){
	int sayi;
	int N[10];
	int i;
	printf("enter numbers:");
	for(i=0;i<10;i++){
		scanf("%d",&N[i]);
	}
	
	printf("enter a number");
	scanf("%d",&sayi);
	
	
	printf("%d kadar kez tekrar etti",frequency(sayi,N));
	
	
	
	
	
	
	
	
	
	
return 0;	
	
}
