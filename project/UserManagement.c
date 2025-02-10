#include "UserManagement.h"
#include <stdio.h>
#include "global.h"

void addNewUser() {
    if (userCount >= MAX_USERS) {
        printf("User limit reached!\n");
        return;
    }

    printf("Enter username: ");
    scanf("%s", accounts[userCount].username);

    printf("Enter email: ");
    scanf("%s", accounts[userCount].userId);  

    printf("Enter password: ");
    scanf("%s", accounts[userCount].password);

    accounts[userCount].status = true;  
    userCount++;

    printf("User '%s' added successfully!\n", accounts[userCount - 1].username);
}

