#include<stdio.h>
int main(){
	int sayi,sonuc=1;
	int i=1;
	printf("fak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		sonuc=i*sonuc;
		
	}
	
	printf("fact:%d",sonuc);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}