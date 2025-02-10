#include <stdio.h> 
#include "global.h"
#include "Admin.h"
#include "LOGIN.h"

AccountInfo accounts[MAX_USERS];  
int userCount = 0; 

int main() {
    int choice;
    do {
        printf("\nCHOOSE YOUR ROLE\n");
        printf("========================\n");
        printf("[1] Admin.\n");
        printf("[2] User.\n");
        printf("[0] Exit the Program.\n");
        printf("========================\n");
        printf("Enter The Choice: ");
scanf("%d", &choice);
getchar();  

        switch (choice) {
            case 1:
                Login();
                Admin();
                break;
            case 2:
                Login();
                break;
            case 0:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

