#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// int fun(int a[], int n){
//     int x;
//     if (n == 1)
//         return a[0]; //base case – temel durum
//     else
//         x = fun(a, n - 1);
//     if (x > a[n - 1])
//         return x;
//     else
//         return a[n - 1];
//     }
// int main(){
//     int arr[] = { 12, 10, 300, 50, 100 };
//     printf("%d", fun(arr, 5));
//     getchar();
//     return 0;
// }

///ÖDEV OLAN ÜS ALMA FONKSİYONU
// int pow2(int c, int d);
// void main(){
//     int a = 5, b = 3;
//     printf("üssü: %d\n", pow2(a,b));
// }
// int pow2(int c, int d){
//     int result = 1;
//     if (d != 0){
//         result *= c;
//         return result * pow2(c, d-1);
//     }
//     else{
//         return 1;
//     }
// }
int oddNumber(int a[], int b);
void main(){
    int arr [5] = {12, 25, 34, 481, 22};
    printf("tek sayı sayısı: %d\n", oddNumber(arr,4));
}
int oddNumber(int a[], int b){
    if (b < 0)
    {
        return 0;
    }  
    if (a[b] % 2 != 0){
        return oddNumber(a, b-1) + 1;
    }
    else{
        return oddNumber(a, b-1);
    }
}
