#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sayisal_loto()
{
	int i,j;
	srand(time(NULL));
	for(i=1;i<6;i++){
		printf("%d. satir  ");
		for(j=1;j<6;j++){
			
			printf("%d\t",1+rand()%6);
		}
		printf("\n");
	}
}



int main(){
	
	sayisal_loto();
	
	return 0;
}