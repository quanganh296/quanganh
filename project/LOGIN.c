#include <stdio.h>
#include <string.h>
#include "global.h" 


void addNewUser_Login() {
    char email[100];  
    char password[100];

    printf("Enter Email: ");
    scanf("%s", email); 

    printf("Enter Password: ");
    scanf("%99s", password);

    
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void Login() {
    int end = 0;
    char enteredEmail[50];
    char enteredPassword[50];

    char correctEmail[] = "qn50606@gmail.com";
    char correctPassword[] = "02092006";       
    do {
    	
        printf("\nLOGIN\n");
        printf("========================\n");

        printf("Email: ");
        fgets(enteredEmail, sizeof(enteredEmail), stdin);
        enteredEmail[strcspn(enteredEmail, "\n")] = 0;  

        printf("Password: ");
        fgets(enteredPassword, sizeof(enteredPassword), stdin);
        enteredPassword[strcspn(enteredPassword, "\n")] = 0; 
        printf("========================\n");

        if (strcmp(enteredEmail, correctEmail) == 0 && strcmp(enteredPassword, correctPassword) == 0) {
            printf("Login successful!\n");
            end = 1;
        } else {
            printf("Incorrect email or password. Please try again!\n");
        }
         clearInputBuffer();
    } while (end != 1);
}

