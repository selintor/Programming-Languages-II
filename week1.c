#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// İLK HAFTA ÖDEV OLAN CRAPS GAME OYUNU
// void main()
// {
//     int i, zar, sum=0, sum2=0, score=0, zar2;
//     srand(time(NULL));
//     for(i=0; i<2; i++){
//         zar = rand() % 6 + 1;
//         sum += zar;
//     }
//     switch (sum){
//     case 7:
//     case 11:
//         printf("oyunu kazandınız!\n");
//         break;
//     case 2:
//     case 3:
//     case 12:
//         printf("oyunu kaybettiniz :(\n");
//         break;
//     case 4:
//     case 5:
//     case 6:
//     case 8:
//     case 9:
//     case 10:
//         score += sum;
//         for(i=0; i<2; i++){
//             zar2 = rand() % 6 + 1;
//             sum2 += zar2;
//         }
//         if(score == sum2){
//             printf("oyunu kazandınız!\n");
//         }
//         else{
//             printf("oyunu kaybettiniz :(\n");
//         }
//         break;
//     }
//}

int x = 5;
int main(){
    int x = 10, y=20;
    {
        printf("x = %d, y = %d\n", x, y);
        {
            int y= 40;
            x++;
            y++;
            printf("x = %d, y = %d\n", x, y);
        }
        printf("x = %d, y = %d\n", x, y);
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

// int main(void){
//     clock_t start_t, end_t;
//     int id1, id2;
//     start_t = clock();
//     for(id1=0; id1<50000000; id1++){
//         for(id2=0; id2<100; id2++){}
//     }
//     end_t = clock();
//     printf("start_t değeri: %lu\n", start_t);
//     printf("end_t değeri: %lu\n", end_t);
//     printf("döngü çalışma süresi: %.3f", (double)(end_t - start_t) / CLOCKS_PER_SEC);
//     return 0;
// }
// const float pi = 3.14;
// float square(const int r);
// void main(){
//     int r;
//     printf("yarıçapı giriniz: ");
//     scanf("%d", &r);
//     printf("dairenin alanı: %.2f\n", square(r));
// }
// float square(const int r){
//     return pi*r*r;
// }