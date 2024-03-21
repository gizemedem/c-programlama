#include<stdio.h>
void kutuciz(int boy,int en){
	int i,j;
	for(i=0; i<boy; i++){
		for(j=0; j<en; j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int en,boy;
	printf("boy gir:");
	scanf("%d",&boy);
	printf("en gir:");
	scanf("%d",&en);
	kutuciz(boy,en);
	
	
	
	return 0;
}