#include<stdio.h>
#include<stdlib.h>
void sesli_harf(char A[])
{
	int uzunluk,i,sayac=0;
	char harf;
	
	uzunluk=strlen(A);
	for (i=0 ; i<uzunluk ; i++)
	{
		harf = A[i];
		if(harf>='a' && harf<='z')
		{
			harf = harf - 32;
		}
		
		if (harf == 'A' || harf =='E' || harf== 'I'|| harf=='O' || harf == 'U')
		{
			sayac ++;
		}
	}
	printf("%s kelimesinde %d tane sesli harf var",A,sayac);
}
int main(){
char A[100];
printf("write something:");
gets(A);
sesli_harf(A);
	
	

}
