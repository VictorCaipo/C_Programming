#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[20];
    struct student *next;//struct pointer type
}


int main(void){
    struct student *head = NULL;
    /*
    C allows you to create a pointer to whatever you have define
    before even if it doesn't have a value
    head is a student struct pointer type, its identify is head.
    */
    struct student *s1 = (struct student *)malloc(sizeof(struct student));
    struct student *s2 = (struct student *)malloc(sizeof(struct student));
    struct student *s3 = (struct student *)malloc(sizeof(struct student));

    strcpy(s1->name,"Victor");
    strcpy(s2->name,"Arielle");
    strcpy(s3->name,"Valeria");

    head = s1;
    s1->next = s2;//(*s1).next
    s2->next = s3;
    s3->next = NULL;

    struct student *temp = head;
    printf("Linked list students: \n");
    while(temp != NULL){
        printf("-> %s \n",temp->name);
        temp = temp->next;
    }
    //free memory
    free(s1);
    free(s2);
    free(s3);

    return 0;
}