#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// int buyukSayiBul(int[], int, int);
// int main(){
//     int arr[] = {3,5,7,9,11};
//     int enb = arr[0];
//     enb = buyukSayiBul(arr,6,enb);
//     printf("En büyük: %d\n", enb);
//     return 0;
// }
// int buyukSayiBul(int x[], int y, int z){
//     if (y<0)
//         return z;
//     if (x[y]>z)
//         z = x[y];
//     return buyukSayiBul(x,y-1,z);
// }

// long faktoryel(long n){
//     if (n <= 1)
//         return 1;
//     else
//         return (n*faktoryel(n - 1));
// }
// int main(void){
//     int i;
//     for (i = 0; i <= 10; i++) {
//         printf("%d! = %d\n", i, faktoryel(i));
//     }
//     return 0;
// }

// int sum(int);
// void main(){
//     int i, n=10;
//     printf("toplam: %d\n", sum(n));
// }
// int sum(int a){
//     if(a!=0)
//         return(a+sum(a-1));
//     else
//         return a;
// }

// int biggestNumber(int a[], int b){
//     if(b == 1){
//         return a[0];
//     }
//     if(a[b-1]>biggestNumber(a,b-1)){
//         return a[b-1];
//     }
//     else
//         return biggestNumber(a,b-1);
// }
// void main(){
//     int arr[] = {3,9,11,2,18,4};
//     int c = biggestNumber(arr,6);
//     printf("değer: %d\n", c);   
// }

int basToplam(int a);
void main(){
    int n = 123;
    printf("basamakları toplamı: %d\n", basToplam(n));
}
int basToplam(int a){
    int bas=0;
    if (a == 0){
        return 0;
    }
    else{
        bas = a % 10;
        a = a / 10;
        return basToplam(a)+bas;
    }
}

// int ebob(int c, int d, int b);
// int main(){
//     int a = 10, b = 12;
//     printf("ebob: %d\n", ebob(a,b,2));
// }
// int ebob(int c, int d, int b){
//     int limit, result;

//     if ( c > d ) limit = d;
//     else limit = c;

//     if ( b == limit ) return c % b == 0 && d % b == 0;

//     result = ebob(c, d, b + 1);
// }