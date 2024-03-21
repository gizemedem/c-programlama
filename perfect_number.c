#include<stdio.h>
int main(){
	int sayi,i=1,a;
	int toplam=0;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(i<sayi){
		a=sayi%i;
		if(a==0){
			toplam=toplam+i;	
		}
		i++;
	}
	
	printf("toplam:%d\n",toplam);
	if(toplam==sayi){
		printf("tebrikler sayiniz mukemmel sayi!");
	}
	
	else if (toplam!=sayi){
		printf("sayiniz mukemmel sayi degil :(");
	}
	
	
	
	return 0;
}