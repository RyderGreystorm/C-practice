#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *link;
    int data;

} node;
 node *add_at_end(node **head, int data);
void print_list(node *head);
void add_at_pos(node *head, int data, int pos);
void add_at_beginning(node **head, int data);
node *del_first(node *head);
node *del_last(node *head);

int main(void)
{
    node *head = NULL;
    add_at_beginning(&head, 99);
    add_at_end(&head, 20);
    add_at_end(&head, 12);
    add_at_end(&head, 65);
    add_at_end(&head, 78);
    add_at_end(&head, 14);
    add_at_end(&head, 13);
    add_at_pos(head, 2500, 3);
    add_at_pos(head, 9865,5);
    add_at_beginning(&head, 8888);
    head = del_last(head);
    head = del_first(head);
    print_list(head);


    
    return 0;
}
 node *add_at_end(node **head, int data)
 {
    node *ptr, *new;

    new = malloc(sizeof(node));
    new->data = data;
    new->link = NULL;

    if (*head == NULL)
        return (*head = new);

    ptr = *head;

    while (ptr->link != NULL)
        ptr = ptr->link;
    ptr->link = new;

    return (new);
 }
void print_list(node *head)
{
    if (head == NULL)
        printf("List is empty");

    node *ptr = head;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");

}
 
void add_at_pos(node *head, int data, int pos)
{
    node *new, *tmp;

    new = malloc(sizeof(node));
    new->data = data;
    new->link = NULL;

    tmp = head;

    pos--;
    while(pos != 1)
    {
        tmp = tmp->link;
        pos--;
    }
    new->link = tmp->link;
    tmp->link = new;
}
void add_at_beginning(node **head, int data)
{
    node *new;

    new = malloc(sizeof(node));
    new->data = data;
    new->link = NULL;

    new->link = *head;
    *head = new;
}
node *del_first(node *head)
{
    node *tmp;

    if (head == NULL)
        printf("THe list is empty");
    else
        {
            tmp = head;
            head = head->link; /**Causing head to point to the next node on the right*/
            free(tmp);
            tmp = NULL; /**Catching a dangling pointer*/
        }
        return (head);
}
node *del_last(node *head)
{
    node *tmp;

   if (head == NULL)
   {
        printf("List is empty");
   }
   else if (head->link == NULL)
   {
        free(head);
        head = NULL;
    }
   else
   {
        node *tmp1, *tmp2;
        tmp1 = head;
        tmp2 = head;

        while(tmp1->link != NULL)
        {
            tmp2 = tmp1;
            tmp1 = tmp1->link;
        }
        tmp2->link = NULL;
        free(tmp1);
        tmp1 = NULL;
    
        return (head);
   }

    return (head);
}