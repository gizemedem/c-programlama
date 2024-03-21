#include<stdio.h>
#include<math.h>
int main(){
	int matris[5][5] ={{1,67,76,55},{2,34,79,76},{3,56,68,57},{4,66,89,65}};
	int i,j;
	int sum=0;


	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d",matris[i][j]);
		}
	
		printf("\n");
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			sum+=matris[i][j];
	        
		}
		sum=sum/3;
		printf("%d\t",sum);
		sum=0;
	}
	

	
	
	
	return 0;
}
