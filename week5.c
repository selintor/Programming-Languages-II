#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 10

// int main(void){
//     int *dizi, eleman_sayisi, i;
//     printf("eleman sayısını giriniz: ");
// //     scanf("%d", &eleman_sayisi);
// //     dizi = (int*)(malloc (eleman_sayisi * sizeof(int)));
// //     for (i = 0; i<eleman_sayisi; i++){
// //         printf("adres: %d\t, değer: %d\n", &dizi[i], dizi[i]);
// //     }
// //     free(dizi);
// //     return 0;
// // }

// // int main() {
// //   int *ptr, i , n1, n2;
// //   printf("Enter size: ");
// //   scanf("%d", &n1);

// //   ptr = (int*) malloc(n1 * sizeof(int));

// //   printf("Addresses of previously allocated memory:\n");
// //   for(i = 0; i < n1; ++i)
// //     printf("%pc\n",ptr + i);

// //   printf("\nEnter the new size: ");
// //   scanf("%d", &n2);

// //   // rellocating the memory
// //   ptr = realloc(ptr, n2 * sizeof(int));

// //   printf("Addresses of newly allocated memory:\n");
// //   for(i = 0; i < n2; ++i)
// //     printf("%pc\n", ptr + i);
  
// //   free(ptr);

// //   return 0;
// // }

// // void main(){
// //     int eleman_sayisi, *ptrEleman, i, max;
// //     printf("eleman sayısını giriniz: ");
// //     scanf("%d", &eleman_sayisi);
// //     ptrEleman = (int*)calloc(eleman_sayisi,sizeof(int));
// //     for(i=0; i<eleman_sayisi; i++){
// //         printf("değerleri giriniz: ");
// //         scanf("%d", ptrEleman + i);
// //     }
// //     max = *ptrEleman;
// //     for(i=1; i<eleman_sayisi; i++){
// //         if(max < *(ptrEleman + i))
// //             max = *(ptrEleman + i);
// //     }
// //     printf("en büyük eleman: %d\n", max);
// //     free(ptrEleman);
// // }

// int main()
// {
//     char name[] = "selin";
//     char studentNumber[] = "2010206046";
//     int nameSize = strlen(name);
//     printf("namesize: %d",nameSize);
//     int studentNumberSize = strlen(studentNumber);
//     printf("stdnumber: %d",studentNumberSize);
//     int studentNumberDigitsSum = 0;
//     //find the sum of the Gigits of my student number
//     for (int i = 0; i < studentNumberSize; i++)
//         studentNumberDigitsSum += studentNumber[i] -48;
//     // Creating Memory for my name at the Heap
//     char* nameHeap = (char*)calloc(nameSize+1, sizeof(char));
//     // Copy my name to the heap
//     for (int i = 0; i < nameSize; i++)
//         nameHeap[i] = name[i];
//     //resize my sapce at the heap
//     nameHeap = (char*)realloc(nameHeap, studentNumberDigitsSum+1);
//     // to find how many times i will repeat my name according to my sum of digits of my student nymber and my name size
//     int repeated = studentNumberDigitsSum / nameSize;
//     int counter = 0;
//     // repeat the inside loop accoding to repated variable
//     for (int i = 0; i < repeated; i++) {  
//         // Copy my name to the heap space after reallocated
//         for (int j = 0; j < nameSize; j++) {
//             nameHeap[counter] = name[j];
//             counter++;
//         }
//     }
//     // it was put to stod the printing Null Operator
//     nameHeap[counter] = '\0';
//     printf("%s", nameHeap);
//     free(nameHeap);
//     return 0;
// }
// int main(){
//     char *mem_allocation;
//     /* memory is allocated dynamically */ 
//     mem_allocation = (char*)malloc( 7 * sizeof(char) ); 
//     if( mem_allocation == NULL ){
//     printf("Couldn't able to allocate requested memory\n"); }
//     else{
//     strcpy( mem_allocation,"Caner");
//     }
//     printf("Dynamically allocated memory content : " \
//     "%s\n", mem_allocation );
//     mem_allocation=(char*)realloc(mem_allocation,20*sizeof(char)); 
//     if( mem_allocation == NULL ){
//     printf("Couldn't able to allocate requested memory\n"); }
//     else{
//     strcpy( mem_allocation,"Caner Ozcan");
//     }
//     printf("Resized memory : %s\n", mem_allocation ); free(mem_allocation);
// }
int f(int x, int *py, int *ppz);
void main(){
    int c, *b, *a;
    c = 4;
    b = &c;
    a = b;
    printf("%d", f(c,b,a));
}
int f(int x, int *py, int *ppz){
    *ppz +=1;
    x = *py**ppz;
    *py *= 2;
    x *=*py + 3;
    return(x+*py+*ppz);
}

// void organizeWord(char* str, int startIndex,int endIndex) {
// 	int repeat = ( (endIndex - startIndex)/2 ) + 1;
// 	for (int i = startIndex,j=0; j < repeat; i++,j++) {
// 		char temp = str[i];
// 		str[i] = str[endIndex-j];
// 		str[endIndex - j] = temp;
// 	}
// }
// void reverseSentenceWords(char str[]) {
// 	int strSize = strlen(str);
// 	//Revese The Array Character
// 	for (int i = 0; i < strSize/2; i++) {
// 		char temp = str[i];
// 		str[i] = str[strSize - i - 1];
// 		str[strSize - i - 1] = temp;
// 	}
// 	int startIndex = 0;
// 	int endIndex = 0;
// 	for (int i = 0; i < strSize; i++) {
// 		// Reverse every Word that is Before the space
// 		if (str[i] == ' ') {
// 			endIndex = i - 1;
// 			organizeWord(str, startIndex, endIndex);
// 			startIndex = i + 1;
// 		}
// 		// Reverse the Last Word Because at the end of the string there is no sapce
// 		// so the above if will not work and the last word will not be organized
// 		// That's why i made a check that when the program comes to the end of the array it will edit the last word
// 		if ( i == (strSize - 1) ) {
// 			organizeWord(str, startIndex, strSize-1);
// 		}
// 	}
// }
// int main() {
// 	char str[] = "Hello, I Love Programming Courses";
// 	reverseSentenceWords(str);
// 	printf("%s", str);
// 	return 0;
// }