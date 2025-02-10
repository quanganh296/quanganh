
#include <string.h>
#include "Admin.h"  
#include "global.h" 

void addNewUser(){  
char email[100];  

 AccountInfo newUser;
    printf("Enter email: ");
    scanf("%s", newUser.email);
    if (userCount >= MAX_USERS) {
        printf("User limit reached!\n");
        return;
    }

    printf("Enter username: ");
    scanf("%s", accounts[userCount].username);

  printf("Enter email: ");
fgets(email, sizeof(email), stdin);
email[strcspn(email, "\n")] = 0;  // Remove newline


    printf("Enter password: ");
    scanf("%s", accounts[userCount].password);  

    accounts[userCount].status = true;  
    userCount++;

    printf("User '%s' added successfully!\n", accounts[userCount - 1].username);
}


void showUserInfo() {
    printf("\n=== List of Users ===\n");

    if (userCount == 0) {
        printf("No users found.\n");
        return;
    }

    printf("Total Users: %d\n", userCount);
    for (int i = 0; i < userCount; i++) {
        printf("User %d:\n", i + 1);
        printf("Username: %s\n", accounts[i].username);
        printf("Email: %s\n", accounts[i].userId); 
        printf("Status: %s\n", accounts[i].status ? "Active" : "Locked");  
        printf("----------------------\n");
    }
}


void Admin() {
    int choice1;
    do {
        printf("\nMENU\n");
        printf("========================\n");
        printf("[1] Add A New User.\n");
        printf("[2] Show All users.\n");
        printf("[3] Show detail of a user.\n");
        printf("[4] Lock/Unlock a user.\n");
        printf("[5] User Guideline.\n");
        printf("[6] About Us.\n");
        printf("[0] Exit the Program.\n");
        printf("========================\n");
        printf("Enter The Choice: ");
        scanf("%d", &choice1);

        switch (choice1) {
            case 1:
                addNewUser();  
                break;
            case 2:
                showUserInfo();
                break;
            case 0:
                printf("Exiting Admin panel...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice1 != 0);
}


