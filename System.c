#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "bst.h"


  void insert(BNode** Btree, char empName[]){
    BNode *temp = NULL;

    if(!(*Btree)){   //if empty create a the root
      temp = (BNode *)malloc(sizeof(BNode));
      temp -> left = temp -> right =NULL; //since root is set is childs become null
      strcpy(temp -> name, empName); //put the name of employee on the node
      *Btree = temp; //point to the newly created root
      return;
    }

    if(nameValue(empName) < (nameValue((*Btree) -> name)))
      insert(&(*Btree) -> left, empName);

    if(nameValue(empName) > (nameValue((*Btree) -> name)))
      insert(&(*Btree) -> right, empName);

  }

void removeN(BNode **Btree, char empName[]){
  //BNode *temp = NULL;
  if((*Btree)){
    //temp = (BNode *)malloc(sizeof(BNode));
    if((*Btree) -> name == empName){//if we are at the node that we want to delete
      printf("test\n");//debug tool
      free(*Btree);//delete this node 
      (*Btree) = NULL;//and make this pointer equal to null
    }
    
    if(nameValue(empName) < (nameValue((*Btree) -> name))){//compare values to determine where to go down
      printf("testleft\n");//debug tool
      removeN(&(*Btree) -> left, empName);//move to the left of the tree and check again
    }
    if(nameValue(empName) > (nameValue((*Btree) -> name))){
      printf("testright\n");
      removeN(&(*Btree) -> right, empName);//move to right of the tree and check again
    }
  }
}
     

void printEmployeeList(BNode *Btree){
  if(Btree){
    printEmployeeList(Btree -> left);//print inOrder since we wnat the list on alpahabetical order
    printf("%s\n",Btree -> name);
    printEmployeeList(Btree -> right);
  }
}

int nameValue(char name []){
    int val = 0, i,length;
    length = strlen(name); //get length of the char array(string)
    for(i=0; i<length; i++){ //go through the array
      val = val+(name[i]-'0'); /* we would add the value of each letter to see the total weight of                                the name, when deciding to either insert right or left */ 
    }
    return val;
  }
