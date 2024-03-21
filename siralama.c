#include <stdio.h>
// Fonksiyona gönderilen string içerisindeki karakterleri alfabetik sıraya sokan programı yazınız.
//  dceg --> ecdg

void siralama(char a[])
{
    int k = 0, i, j;
    int temp;

    while (a[k] != '\0')
    {
        k++;
    }

    for (i = 0; i < k - 1; i++)     //fatih -- temp = f   
    {
        for (j = i + 1; j < k; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Dizinin alfabetik siralanisi :");
    for (i = 0; i < k; i++)
    {
        printf("%c",a[i]);
    }
    
}

int main()
{
    char dizi[100];

    printf("Cumle veya kelime giriniz:");
    gets(dizi);

    siralama(dizi);
}


