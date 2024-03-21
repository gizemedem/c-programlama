#include<stdio.h>
int main(){
	char s[40], temp;
	int i,n;
	printf("herhangi bir sey yaz:");
	scanf("%s",s);
	
	for(n=0; s[n]!='\0'; n++);
	
	for(i=0; i<n/2 ; i++){
		temp = s[n-i-1];
		s[n-i-1]= s[i];
		s[i] = temp;		
		
	}
	
	printf("ters hali: %s\n",s);
	
	
	return 0;
}