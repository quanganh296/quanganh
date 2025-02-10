#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
    char userId[20];
    float balance;
    bool status;
    char username[15];
     char email[100]; 
    char password[10];
} AccountInfo;

#define MAX_USERS 100
extern AccountInfo accounts[MAX_USERS];  
extern int userCount;  

#endif

