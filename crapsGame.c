#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main()
{
    int i, zar, sum=0, sum2=0, score=0, zar2;
    srand(time(NULL));
    for(i=0; i<2; i++){
        zar = rand() % 6 + 1;
        sum += zar;
    }
    switch (sum){
    case 7:
    case 11:
        printf("oyunu kazandınız!\n");
        break;
    case 2:
    case 3:
    case 12:
        printf("oyunu kaybettiniz :(\n");
        break;
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
        score += sum;
        for(i=0; i<2; i++){
            zar2 = rand() % 6 + 1;
            sum2 += zar2;
        }
        if(score == sum2){
            printf("oyunu kazandınız!\n");
        }
        else{
            printf("oyunu kaybettiniz :(\n");
        }
        break;
    }
}