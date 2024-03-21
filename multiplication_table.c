#include<stdio.h>
int main (){
	int sayi,i=0;
	int a;
	printf("lütfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while(i<=10){
		a=sayi*i;
		printf("%d\n",a);
		i++;
		
		
	}
	
	
	return 0;
}