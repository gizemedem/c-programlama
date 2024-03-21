#include<stdio.h>
int kareal(int a){
	return a*a;
}
int main(){
    int b;
	printf("karesini ogrenmek istediginiz sayiyi giriniz:");
	scanf("%d",&b);
	printf("sayiniz:%d",kareal(b));
	
	
	return 0;
}