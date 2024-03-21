#include<stdio.h>
int maximum(int x,int y, int z){
	if(x>y){
		if(x>z){
			printf("max:%d",x);
		}
		else 
			printf("max:%d",z);
			
	}	
	else if (y>x)
	printf("max:%d",y);
	
	else
	printf("max:%d",z);
	
	return maximum;
	}



	int main (){
	int a,b,c;
	printf("3 tane sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	maximum(a,b,c);
		
		
	return 0;	
	}
	
	
	
	
	
	
