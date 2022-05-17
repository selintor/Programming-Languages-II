#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 10

// int main(void)
// {
//   int *ip, id; // int bir işaretçi ve değişken bildirimi
//   id = 21;
//   ip = &id;    // id değişken adresini ip işaretçisine atar.

//   Değişken adını kullanarak id değişken değerini ekrana yazar.
//   printf("id değişken değeri: %d\n", id);
 
//   İşaretçi kullanarak id değişken değerini ekrana yazar.
//   printf("id değişken değeri: %d\n", *ip);

//   Değişken referansını kullanarak id değişken adresini ekrana yazar.
//   printf("id değişken bellek adresi: %p\n", &id);

//   İşaretçi adını kullanarak id değişken adresini ekrana yazar.
//   printf( "id değişken bellek adresi: %p", ip);

//   return 0;
// }

// int main()
// {
//   int var = 5;
//   printf("var: %d\n", var);

//   // Notice the use of & before var
//   printf("address of var: %p", &var);  
//   return 0;
// }
// void main(){
//     int n1, n2, *n1p, *n2p, sum=0;
//     printf("birinci sayıyı giriniz: ");
//     scanf("%d", &n1);
//     printf("ikinci sayıyı giriniz: ");
//     scanf("%d", &n2);
//     n1p = &n1;
//     n2p = &n2;
//     sum = *n1p + *n2p;
//     printf("toplam: %d\n", sum);
// }

// void main(){
//     int a[size], i=0, *apt;
//     apt = &a;
//     for(i=0; i<size; i++){
//         printf("dizinin elemanlarını giriniz: ");
//         scanf("%d", &apt[i]);
//     }
//     for(i=0; i<size; i++){
//         printf("dizinin elemanları: %d\n", *(apt + i));
//     }
// }

// void main(){
//     int i=0;
//     char str[size], *strp;
//     strp = str;
//     printf("string: ");
//     scanf("%s", strp);
//     while (*strp != '\0')
//     {
//         i++;
//         strp++;
//     }
//     printf("stringin uzunluğu: %d\n", i);
// }

// void main(){
//     int sum=0, a[size], i=0, *apt;
//     apt = a;
//     for(i=0; i<size; i++){
//         printf("dizinin elemanlarını giriniz: ");
//         scanf("%d", &apt[i]);
//         sum += apt[i];
//     }
//     printf("elemanlar toplamı: %d\n", sum);
// }

// void main(){
//     int i=0;
//     char str[size], *strp;
//     strp = str;
//     printf("string: ");
//     scanf("%s", strp);
//     for (i=strlen(str)-1; i>=0; i--){
//         printf("%c", *(strp+i));
//     }
//     printf("\n");
// }