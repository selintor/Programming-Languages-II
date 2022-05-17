#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void search();
void write();
void append();
void oddAndEven();

int no;
char ad[30];
char bolum[30];

void main(){
    int secim;
    printf("Seçim yapınız \n 1- Dosya oluştur \n 2- Yeni kayıt ekeleme \n 3- İsme göre arama \n 4- Öğrenci numarası tek ise tekler, çift ise çiftler dosyasına kaydetme \n 5- Çıkış \n");
    scanf("%d", &secim);
    while (1){
        if (secim == 5){
            printf("Program sonlandı.");
            break;
        }
        switch (secim){
            case 1:
                write();
                break;
            case 2:
                append();
                break;
            case 3:
                search();
                break;
            case 4:
                oddAndEven();
                break;
        }
    }    
}

void write(){
    FILE *ptr;
    if((ptr = fopen("student.dat", "w")) == NULL)
            printf("Dosya açılamadı.");
     else{
        printf("öğrenci numaranızı, adınızı ve bölümünüzü giriniz. \n");
        printf("veri girişini bitirmek için EOF giriniz. \n");
        scanf("%d %s %s", &no, ad, bolum);

        while (!feof(stdin)){
            
            fprintf(ptr, "%d %s %s \n", no, ad, bolum);
            printf("?\n");
            scanf("%d %s %s", &no, ad, bolum);
        }
        fclose(ptr);
     }
}

void search(){
    char ad2[30];
    int result;
    FILE *ptr;
    printf("aramak istediğiniz ismi giriniz: ");
    scanf("%s", ad2);
    if((ptr = fopen("student.dat", "r")) == NULL)
            printf("Dosya açılamadı.");
     else{
        fscanf(ptr, "%d%s%s", &no, ad, bolum);
        while (!feof(ptr)){  
            if(strcmp(ad, ad2) == 0)
            {
                //printf("%d, %s, %s", no, ad2,bolum);
                printf("%s ismi dosyada bulunmuştur.\n", ad);
                break;
            }
            printf("?\n");
            fscanf(ptr, "%d%s%s", &no, ad, bolum);
        }
        fclose(ptr);
    }
}

void append(){
    FILE *ptr;
    if((ptr = fopen("student.dat", "a")) == NULL)
            printf("Dosya açılamadı.");
     else{
        printf("yeni veri girişi için öğrenci numaranızı, adınızı ve bölümünüzü giriniz. \n");
        printf("veri girişini bitirmek için EOF giriniz. \n");
        scanf("%d %s %s", &no, ad, bolum);

        while (!feof(stdin)){
            
            fprintf(ptr, "%d %s %s \n", no, ad, bolum);
            printf("?\n");
            scanf("%d %s %s", &no, ad, bolum);
        }
        fclose(ptr);
     }
}
void oddAndEven(){
    FILE *ptr;
    FILE *evenptr;
    FILE *oddptr;
    if((ptr = fopen("student.dat", "r")) == NULL)
            printf("Dosya açılamadı.");
     else{
        fscanf(ptr, "%d %s %s", &no, ad, bolum);
        while (!feof(ptr)){  
            if(no % 2 == 0){
                evenptr = fopen("even.dat", "w");
                fprintf(evenptr, "%d \n", no);
            }
            else{
                oddptr = fopen("odd.dat", "w");
                fprintf(oddptr, "%d \n", no);
            }
            fscanf(ptr, "%d%s%s", &no, ad, bolum);
        }
        fclose(ptr);
    }
}

