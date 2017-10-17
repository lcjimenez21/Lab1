#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "System.c"

//typedef struct BNode node;
int main(){

  char employeeName[53];
  BNode *root = NULL;
  char option;
  
 select: printf("\nChoose option:\n");
    printf("1) Add Employee\n");
    printf("2) Remove Employee\n");
    printf("3) List Employees\n");
    printf("4) Exit\n");
    scanf(" %c",&option);
    switch(option){
    case '1':
      printf("Enter the name of employee you want to add:\n");
      scanf(" %s", employeeName);
      insert(&root, employeeName);
      goto select;
      break;

    case '2':
      printf("Enter the name of employee you wish to delete:\n");
      scanf(" %s", employeeName);
      removeN(&root, employeeName);
      goto select;
      break;

    case '3':
      printEmployeeList(root);
      goto select;
      break;
      
    case '4':
      printf("Leaving database\n");
      break;

    }

  return 0;

}
