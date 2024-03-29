#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

int main(void)
{
     list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}

size_t print_list(const list_t *h)
{
    size_t count = 0;

    
    // if (h->str == NULL)
    // {
    //       printf("[0] (nil)\n");
          
    // }
      

    while(h)
    {
        if (h->str == NULL)
    
          printf("[0] (nil)\n");
   
        else 
            printf("[%u] %s\n",h->len, h->str);
        
        h = h->next; 
        count++;
         
    }
    return count;
}
list_t *add_node(list_t **head, const char *str)
{       
        list_t *ptr;

        ptr = malloc(sizeof(list_t));

        if (ptr == NULL)
                return (NULL);
        ptr->str = strdup(str);
        ptr->next = *head;
        ptr->len = strlen(str);

        *head = ptr;
        return ptr;
} 
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *ptr, *temp;

        ptr = malloc(sizeof(list_t));

        if (ptr == NULL)
                return (NULL);
        ptr->str = strdup(str);
        ptr->next = NULL;
        ptr->len = strlen(str);

      if (*head == NULL)
      return (*head = ptr);

        temp = *head;


        
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;

        
        return (ptr);
}