#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct customer{ 
    int account;
    char surname[25];
    char name[20];
    double balance;
};
typedef struct customer customer;

int choice();
void createFile(FILE *);
void listFile(FILE *);
int listIndebtedAccounts(FILE *);
customer findMaxbalance(FILE *);
void transferRecords(FILE *);
void updateRecords(FILE *);

void main(){
    int i, scanChoice;
    FILE *ptr;
        while ((scanChoice = choice()) != 0){
            switch (scanChoice){
            case 1:
                createFile(ptr); break;
            case 2:
                listFile(ptr); break;
            case 3:
                listIndebtedAccounts(ptr); break;
            case 4:
                findMaxbalance(ptr); break;
            case 5:
                transferRecords(ptr); break;
            case 6:
                updateRecords(ptr); break;  
            }
        } 
}
int choice(){
    int menuChoice;
    printf("---------------MENU---------------\n");
    printf("1- Create file\n");
    printf("2- List file\n");
    printf("3- List customers whose balances are less than 0\n");
    printf("4- Show maximum balance\n");
    printf("5- Create a sequential access file as 'list.txt' for accounts which greater than '300' in balance\n");
    printf("6- Update balances for customer's who have balance greater than '300'\n");
    printf("--0 for Exit Program--\n");
    printf("\nYour Choice: ");     scanf("%d", &menuChoice);
    printf("\n");
    return(menuChoice);
}

void createFile(FILE *ptr){
    int i;
    customer empty = {0, "", "", 0.0};

    if((ptr = fopen("customer.dat", "w")) == NULL){
        printf("Couldn't create the file!");
    }
    else{
        for(i=0; i<SIZE; i++){
            fwrite(&empty, sizeof(customer), 1, ptr);
        }
        printf("-Enter Account Informations-\n"); 
        for(i=0; i<SIZE; i++){
            printf("account number: "); scanf("%d", &empty.account);
            printf("customer name: "); scanf("%s", empty.name);
            printf("customer surname: "); scanf("%s", empty.surname);
            printf("balance: "); scanf("%lf", &empty.balance);
            fwrite(&empty, sizeof(customer), 1, ptr);
            printf("\n");
        }
        printf("File Updated!\n");
        fclose(ptr);
    }
    printf("\n----------------------------------\n");
}

void listFile(FILE *ptr){
    customer empty = {0, "", "", 0.0};
    if((ptr = fopen("customer.dat", "r")) == NULL){
        printf("Couldn't open the file!");
    }
    else{
        while (!feof(ptr)){
            fread(&empty, sizeof(customer), 1, ptr);
            printf("%d %s %s %lf", empty.account, empty.name, empty.surname, empty.balance);
        }
        fclose(ptr);
    }
    printf("\n----------------------------------\n");
}


int listIndebtedAccounts(FILE *ptr){
    int i = 0;
    customer empty = {0, "", "", 0.0};
    if((ptr = fopen("customer.dat", "r")) == NULL){
        printf("Couldn't open the file!");
    }
    else{
        while (!feof(ptr)){
            fread(&empty, sizeof(customer), 1, ptr);
            if(empty.balance < 0){
                i++;
            }
        }
        printf("number of customers whose balances are less than '0': %d", i);
        fclose(ptr);
    }
    printf("\n----------------------------------\n");
    return i;
}

customer findMaxbalance(FILE *ptr){
    customer empty = {0, "", "", 0.0}, max = {0, "", "", 0.0};
    if((ptr = fopen("customer.dat","r")) == NULL)
        printf("Couldn't open the file!");
    else{
        while(!feof(ptr)){
            fread(&empty, sizeof(customer), 1, ptr);
            if(empty.balance > max.balance)
                max = empty;
        }
        printf("Maximum Balanced Account: ");
        printf("%d %s %s %lf\n", max.account, max.name, max.surname, max.balance);
        fclose(ptr);
    }
    printf("\n----------------------------------\n\n");
    return max;
}


void transferRecords(FILE *ptr){
    FILE *ptr2;
    customer empty = {0, "", "", 0.0};
    if((ptr = fopen("customer.dat","r")) == NULL)
        printf("Couldn't open the file!");
    else if((ptr2 = fopen("customer2.txt", "w")) == NULL){
        printf("Couldn't create the file!");
    }
    else{
        while(!feof(ptr)){
            fread(&empty, sizeof(customer), 1, ptr);
            if(empty.balance > 300){
                fprintf(ptr2, "%d %s %s %lf\n", empty.account, empty.name, empty.surname, empty.balance);
            }
        }
        printf("File has been created!\n");
        fclose(ptr);
        fclose(ptr2);
    }
    printf("\n----------------------------------\n\n");
}

void updateRecords(FILE *ptr){
    int i=0;
    customer empty = {0, "", "", 0.0};
    if((ptr = fopen("customer.dat","r+")) == NULL)
        printf("Couldn't open the file!");
    else{
        fread(&empty, sizeof(customer), 1, ptr);
        while(!feof(ptr)){
            if(empty.balance >= 300){
                empty.balance += (empty.balance * 50) / 100;
                fseek(ptr, i*sizeof(customer), SEEK_SET);
                fwrite(&empty, sizeof(customer), 1, ptr);
                fseek(ptr, (i+1)*sizeof(customer), SEEK_SET);
            }
            i++;
            fread(&empty, sizeof(customer), 1, ptr);
        }
        printf("Process is successful!\n");
        fclose(ptr);
    }
    printf("\n----------------------------------\n\n");
}