#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 10

int main(void){
    int n, *nptr, i=0, j;
    nptr = (int*)(malloc(sizeof(int)));
    while (1)
    {
        printf("sayı giriniz: ");
        scanf("%d", &n);
        if ( n==0 )
            break;
        else{
            *(nptr + i) = n;
            i++;
            nptr = realloc(nptr,sizeof(int)*i);
        }
    }
    for(j=0; j<i; j++){
        printf("sayılar: %d ", *(nptr + j));
    }
    printf("\n");
}

int main(){
    int harfSayisi = 0;
    char *ptr1, *ptr2, n, *tmp;
    int i = 0, j = 0;
    ptr1 = (char*)malloc(sizeof(char));
    scanf("%c", &n);
        while (n != '\n'){
        *(ptr1 + i) = n;
        i++;
        tmp = (char*)realloc(ptr1, sizeof(char) * (i + 1));
    }
    *(ptr1 + i) = '\0';
    ptr2 = (char*)malloc(sizeof(char));

    while (n != '\n')
    {
        *(ptr2 + j) = n;
        j++;
        tmp = (char*)realloc(ptr2, sizeof(char) * (j + 1));
    }

    *(ptr2 + j) = '\0';
    printf("%s %s\n%lu", ptr1, ptr2, strlen(ptr1));
    
    return 0;
}

void stdNo(int no, int *odd, char *even);
void main (){
    char *ptr2;
    int no = 2010206046, *ptr1;
    ptr1 = (int*)(malloc(sizeof(int)));
    ptr2 = (char*)(malloc(sizeof(char)));
    stdNo(no,ptr1,ptr2);
}
void stdNo(int no, int *odd, char *even){
    int bas = 0, i=0, j=0;
    while( no != 0 ){
        bas = no % 10;
        no = no / 10;
        if ( bas % 2 == 0){
            *(even + i) = (char)(bas + 48);
            printf("çift sayılar: %c", *(even + i));
            i++;
            realloc(even, sizeof(char) * (i));
            printf("\n");
        }
        else{
            *(odd + j) = bas;
            printf("tek sayılar: %d", *(odd + j));
            j++;
            realloc(odd, sizeof(int) * (j)); 
            printf("\n");
        }
    }
}

int main()
{
	char a[1000];
	char *ptr, *ptr2;
	int n, i, j, k = 0;
	int kelime = 1;

	printf("cümle giriniz: ");
 	gets(a);
	
	for(n = 0; a[n] != '\0'; n++);
	printf("n: %d\n", n);
	ptr = (char*)malloc(n * sizeof(char));
	ptr2 = (char*)malloc(n * sizeof(char));

	ptr = a;
	
	for(i = n - 1; i >= 0; i--)
	{
		if(*(ptr + i) == ' ' || i == 0){
			if(k != 0)
			{
				*(ptr2 + k) = ' ';
				k++;
			}
			for(j = i; j < n; j++)
			{
				if(*(ptr + j) == ' ' && i != j || *(ptr + j) == '\0')
				{
					break;
				}
				if(*(ptr + j) == ' ')
				{
					j += 1; 
				}
				
				*(ptr2 + k) = *(ptr + j);
				k += 1;
			}
		}	
	}
	printf("kelimelerinin ters sıralanmış hali: %s\n", ptr2);
	return 0;
}


