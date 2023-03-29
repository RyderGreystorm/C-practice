#include <stdio.h>
#include <stdlib.h>

/**Declarre struct for the node*/
struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head);
void print_data(struct node * head);
void add_at_end(struct node *head, int data);

int main(void)
{
  struct node *head, *current;

  /**CReate first node*/
  head = malloc(sizeof(struct node));
  head->data = 45;
  head->link = NULL;

  /**creating second node*/
  current = malloc(sizeof(struct node));
  current->data = 98;
  current->link = NULL;

  /**Link the two nodes*/
  head->link = current;

  /**Create third node*/
  current = malloc(sizeof(sizeof(struct node)));
  current->data = 3;
  current->link = NULL;

  /**connect this third node to second node*/
  head->link->link = current;



  
    add_at_end(head, 100);
   count_of_nodes(head);
   print_data(head);
    return 0;
}
void count_of_nodes(struct node *head)
{
    int count = 0;
    struct node *ptr= NULL;


    if (head == NULL)
        printf("The linked List is Empty");
    
    ptr = head;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
}

void print_data(struct node *head)
{
    if (head == NULL)
        printf("THe linked list is empty");

    struct node *ptr = head;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;

    temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    ptr = head;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

