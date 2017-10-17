#include <stdio.h>
#include "bst.h"

//typedef struct BNode node;
int main(){

  char employeeName[53];
  BNode *root = NULL;
  int option;
  while(option !=4){

    printf("\nChoose option:\n");
    printf("1) Add Employee\n");
    printf("2) Remove Employee\n");
    printf("3) List Employees\n");
    printf("4) Exit\n");
    scanf("%d",option);
    switch(option){
    case 1: printf("Enter the name of employee you want to add:\n");
      scanf(" %s", employeeName);
      insertN(&root, employeeName);
      break;

    case 2: printf("Enter the name of employee you wish to delete:\n");
      scanf("%s", employeeName);
      //
      break;

    case 3: printEmployeeList(root);
      break;
      
    case 4: printf("Leaving database");
      break;

    }
  }

  return 0;

}
  
  
  
  

  
