#include<stdio.h>
int main (){
	int sayi,i;
	int toplam=0;
	printf("lutfen sayi giriniz:");
	scanf("%d",&sayi);
	i=0;
	while (i<=sayi)
	{
		toplam=toplam+i;
		i++;
    }
		printf("toplam:%d",toplam);
	return 0;
	
	

	
	
}