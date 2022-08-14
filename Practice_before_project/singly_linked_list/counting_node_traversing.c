#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

void count_of_nodes(struct list *head_address)
{
    int count = 0;
    struct list *ptr = NULL;

    if (head_address == NULL)
    {
        printf("Linked List is empty");
    }

    ptr = head_address;
    
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("%d", count);
}

int main()
{
    struct list *head_address = NULL;
    struct list *current = NULL;

    head_address = (struct list *)malloc(sizeof(struct list));

    head_address->num = 45;
    head_address->next = NULL;

   
    current = malloc(sizeof(struct list));
    current->num = 98;
    head_address->next = current;
    current->next = NULL;

    current = malloc(sizeof(struct list));
    current->num = 3;
    current->next = NULL;
    head_address->next->next = current;

    count_of_nodes(head_address);

    return 0;
}