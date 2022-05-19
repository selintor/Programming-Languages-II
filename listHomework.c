#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 1- Klavyeden -1 girilene kadar verilen tek sayıları tek bağlı doğrusal bir listenin 
// başına verilen çift sayıları ise listenin sonuna ekleyen programı yazınız.

struct node {
    int number;
    struct node * next; 
};
typedef struct node node;

int main(){
	
	int num, odd = 0, even = 0; 
	node *oddhead, *p, *evenhead, *q;
	
	while(1){
		
		printf("Enter a number: ");
        scanf("%d", &num);
        printf("(-1 for exit)\n");
		
		if(num == -1) break;
		
		if(num % 2 == 0){
			if(even == 0){
				evenhead = (node*)malloc(sizeof(node));
				q = evenhead;
			}
            else{
				q->next = (node*)malloc(sizeof(node));
				q = q->next;			
			}
            q->number = num;
			even++;
			q->next = NULL;	
		}
        else{
			if(odd == 0){
				oddhead = (node*)malloc(sizeof(node));
				p = oddhead;
			}
            else{
				p->next = (node*)malloc(sizeof(node));
				p = p->next;			
			}
			p->number = num;
			odd++;
			p->next = NULL;		
		}
	}
	
	p->next = evenhead;
	p = oddhead;
	
	while(p != NULL){
		printf("%d  ", p->number);
		p = p->next;
	}	
    printf("\n");
    return 0;
}

2- Bir bağlı doğrusal listelerde listenin sonundaki düğümü keserek listenin başına ekleyen ve oluşan listenin
son halini geri döndüren prototipi aşağıda verilmiş fonksiyonu yazınız.

node *cutlastaddhead(node *head);