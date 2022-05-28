#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 8 SORUNUN TAMAMINI YAPTIKÇA GÜNCELLEYECEĞİM.

struct node {
    int number;
    struct node * next; 
};
typedef struct node node;

void oddAndEven();
void lastToFirst();
void deleteMid();
void swapFirstAndLast();
void cutHeadAddLast();

void main(){
	int choice;
	while(1){
		printf("----MENU---\n");
		printf("1- Add odd numbers at the beginning, even numbers at the end of the list.\n"
				"2- Add last object of the list at the begining.\n"
				"3- Delete the middle element.\n"
				"4- Swap first and last element.\n"
				"5- Cut first element and add it to end of the list.\n"
				"-0 for exit-\n"
				"Your choice?\n");
		scanf("%d", &choice);
		if(choice == 0) break;
		switch (choice){
			case 1:
				oddAndEven();
				break;
			case 2:
				lastToFirst();
				break;
			case 3:
				deleteMid();
				break;
			case 4:
				swapFirstAndLast();
			case 5:
				cutHeadAddLast();
				break;
		}
	}
}

// 1- Klavyeden -1 girilene kadar verilen tek sayıları tek bağlı doğrusal bir listenin 
// başına verilen çift sayıları ise listenin sonuna ekleyen programı yazınız.
void oddAndEven(){
	
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
	printf("\n\n---------------------------------------\n\n");
}

// // 2- Bir bağlı doğrusal listelerde listenin sonundaki düğümü keserek listenin başına ekleyen ve oluşan listenin
// // son halini geri döndüren prototipi aşağıda verilmiş fonksiyonu yazınız.

void lastToFirst(){
	int stdNumber = 0, i;
	node *p, *q, *head;

	for(i=0; i<4; i++){
		if(i == 0){
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
		printf("sayı giriniz: ");
		scanf("%d", &p->number);
	}

	p->next=NULL;
	p = head;
	q = head->next;
	while(q->next != NULL){
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	q->next = head;
	head = q;
	
	while(q != NULL){
		printf("%d  ", q->number);
		q = q->next;
	}	
	printf("\n\n---------------------------------------\n\n");
}

// // 3- Bir bağlı listede listenin ortasındaki elemanı silen fonksiyonu yazınız.
void deleteMid(){
	int i, listSize, midElement;;
	node *p, *q, *head;

	printf("Size of the list: ");
	scanf("%d", &listSize);
	midElement = (listSize/2) + 1;

	for(i=0; i<listSize; i++){
		if(i == 0){
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
	
		printf("sayı giriniz: ");
		scanf("%d", &p->number);
	}
		p->next = NULL;
		p = head;
		q = p->next;

		for(i=0; i<midElement-2; i++){
			p = p->next;
			q = q->next;
		}
	p->next = q->next;

	p = head;

	while (p != NULL){
		printf("%d  ", p->number);
		p = p->next;
	}
	printf("\n\n---------------------------------------\n\n");
}

// // 4- Listenin ilk ve son elemanlarının yerini değiştiren fonksiyon.
void swapFirstAndLast(){
	int i, listSize;
	node *p, *q, *head;

	printf("Size of the list: ");
	scanf("%d", &listSize);

	for(i=0; i<listSize; i++){
		if(i == 0){
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
	
		printf("sayı giriniz: ");
		scanf("%d", &p->number);
	}

	p->next=NULL;
	p = head;
	q = head->next;
	while(q->next != NULL){
		p = p->next;
		q = q->next;
	}

	q->next = head->next; 
	head->next = NULL;
	p->next = head;
	head = q; 

	p = head;
	while (p != NULL){
		printf("%d  ", p->number);
		p = p->next;
	}
	printf("\n\n---------------------------------------\n\n");
}

// // 5- Listenin başındaki düğümü kesip sona ekleyen fonksiyon.
void cutHeadAddLast(){
	int i, listSize;
	node *p, *q, *head;

	printf("Size of the list: ");
	scanf("%d", &listSize);

	for(i=0; i<listSize; i++){
		if(i == 0){
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
	
		printf("sayı giriniz: ");
		scanf("%d", &p->number);
	}

	// p->next=NULL;
	// p = head;
	// q = head->next;
	// while(q->next != NULL){
	// 	p = p->next;
	// 	q = q->next;
	// }
	//p->next=NULL;
	head->next = NULL;
	p->next = head->next;

	p = head;
	while (p != NULL){
		printf("%d  ", p->number);
		p = p->next;
	}
	printf("\n\n---------------------------------------\n\n");
}
