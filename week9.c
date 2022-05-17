#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct student{
    int no;
    char name[30];
    int midtermGrade;
    int finalGrade;
    struct student *next;
};
typedef struct student node;

void main(){
    int choice, studentNumber = 0;
    node *head, *p, *q;
    int midAvg = 0, finalAvg = 0, i=0;
    int num = 0;

    while (1){
       printf("----MENU----\n");
       printf("1- Add new record\n2- Listify the records\n3-Update the records\n4- Delete a record\n5- Calculate the average\n6- Show the most succesful student\n");
       scanf("%d", &choice);

        if(choice==-1)break;
       switch(choice){
           	case 1:
				if(studentNumber == 0){
				head=(node*)malloc(sizeof(node));
				p=head;
				studentNumber++;
				}

                else{
					p->next=(node*)malloc(sizeof(node));
					p=p->next;
					studentNumber++;
				}
				
				printf("Student number: ");
				scanf("%d",&p->no);
				printf("Student name: ");
				scanf("%s",p->name);
				printf("Student's midterm grade: ");
				scanf("%d",&p->midtermGrade);
				printf("Student's final grade ");
				scanf("%d",&p->finalGrade);
				printf("\n");
				
				p->next=NULL;
			
			break;

            case 2:
				p = head;

				printf("\n---STUDENTS---\n");
				while(p!=NULL){	
                    printf("%d %s : %d %d",p->no,p->name,p->midtermGrade,p->finalGrade);
                    printf("\n");
                    p=p->next;
				}
			printf("\n");
				
			break;

            case 3:
            	
                p= head;

                printf("Which student's info you want to update "); 
                scanf("%d", &num);

                while(p->no != num)
                    p = p->next;

				printf("Student number: ");
				scanf("%d",&p->no);
				printf("Student name: ");
				scanf("%s",p->name);
				printf("Student's midterm grade: ");
				scanf("%d",&p->midtermGrade);
				printf("Student's final grade ");
				scanf("%d",&p->finalGrade);
				printf("\n");
                printf("\n--------------------------------\n\n");

                break;

                case 4:
                   
                    p = head, q = head->next;

                    printf("Enter a student no that you want to delete: ");
                    scanf("%d",&num);

                    while(q->no != num){
                        q= q->next;
                        p= p->next;
                    }

                    p->next = q->next;
                    free(q);
                    printf("Record was succesfully deleted!\n");
                    break;

                case 5:
                    
                    p = head;

                    while (p != NULL){
                        midAvg += p->midtermGrade;
                        finalAvg += p->finalGrade;
                        p = p->next;
                        i++;
                    }
                    midAvg /= i;
                    finalAvg /= i;
                    printf("Midterm average is %d, final average is %d. \n", midAvg, finalAvg);

                    break;
            }
       }
    }
    

