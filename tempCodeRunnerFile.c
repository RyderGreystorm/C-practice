
  /**Create third node*/
  current = malloc(sizeof(sizeof(struct node)));
  current->data = 3;
  current->link = NULL;

  /**connect this third node to second node*/
  head->link->link = current;

   count_of_nodes(head);
   print_dat