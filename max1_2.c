#include <stdio.h>

//10 elemanlı bir dizideki en büyük birinci ve ikinci sayiyi bulan program//

void max(int []);

int main()
{
    int sayi[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("sayi[%d] =",i);
        scanf("%d",&sayi[i]);
    }
    
    max(sayi);
}

void max(int a[])
{
    int i, enb  = a[0], enb2 = a[0];

    for (i = 0; i < 10; i++)
    {
        if(a[i] > enb)
        {
            enb2 = enb;
            enb = a[i];
        }

        else if (a[i] > enb2)
        {
            enb2 = a[i];
        }
        
    }
    
    printf("En buyuk birinci sayi : %d \n En buyuk ikinci sayi : %d",enb,enb2);
}