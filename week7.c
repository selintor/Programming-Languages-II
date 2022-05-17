#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define size 10 

// enum day {sunday = 1, tuesday, wed, thur, fri, sat};
// void main(){
//     enum day d = thur;
//     printf("d: %d\n", d);
// }

// enum State {working = 0, failed, freezed};
// enum State currState = 2;
// enum State FindState(){
//     return currState;
// }
// int main(){
//     (FindState() == working)? printf("working"): printf("not working");
//     return 0;
// }

// void main (){
//     enum result {pass, fail};
//     enum result s1,s2;
//     s1 = pass;
//     s2 = fail;
//     printf("%d", s1);
// }

// enum example {a = 1, b, c};
// enum example example1 = 2;
// enum example answer(){
//     return example1;
// }
// void main(){
//     (answer() == a)? printf("yes"): printf("no");
// }

// enum sanfoundry{
//     a,b,c
// };
// enum sanfoundry g;
// void main(){
//     g++;
//     printf("%d", g);
// }

// enum day{
//     a,b,c=5,d,e
// };
// main(){
//     printf("a değerini gir: ");
//     scanf("%d", a);
//     printf("%d", a);
// }

struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook( struct books book );

void main(){
    struct books book1;
    struct books book2;

    strcpy(book1.title, "c programming");
    strcpy(book1.author, "yazar");
    strcpy(book1.subject, "bla blaaa");
    book1.book_id = 2937482;

    strcpy(book2.title, "c programming22");
    strcpy(book2.author, "yazar22");
    strcpy(book2.subject, "bla blaaa22");
    book2.book_id = 2937482;

    printBook (book1);
    printBook (book2);

}
void printBook( struct books book ){
    printf("title: %s\n", book.title);
    printf("author: %s\n", book.author);
    printf("subject: %s\n", book.subject);
    printf("id: %d\n", book.book_id);
}