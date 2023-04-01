#include <stdio.h>
#include <stdlib.h>

struct node * add_at_end(struct node *ptr, int data);
void counts_of_list(struct node *head);

struct node 
{
    int data;
    struct node *link;
};

int main(void)
{
    struct node *head, *ptr;

    head = malloc(sizeof(struct node));
    head->data = 65;
    head->link = NULL;

    ptr = head;

    ptr = add_at_end(ptr, 95);
    ptr = add_at_end(ptr, 100);
    ptr = add_at_end(ptr, 100);
    ptr = add_at_end(ptr, 200);
    ptr = add_at_end(ptr, 230);
    ptr = add_at_end(ptr, 120);
    ptr = add_at_end(ptr, 2);


    ptr = head;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
    counts_of_list(head);


    return 0;
}

struct node * add_at_end(struct node *ptr, int data)
{
    /**get  a pointer to create the node*/
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

void counts_of_list(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("List is empty");

    struct node *ptr = head;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;

    }
    printf("%d \n", count);
}