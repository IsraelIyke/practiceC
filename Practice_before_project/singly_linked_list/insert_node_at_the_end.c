#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

void add_at_end(struct list *head_address, int data)
{
    struct list *ptr, *temp;
    int i;

    ptr = head_address;
    temp = (struct list *)malloc(sizeof(struct list));

    temp->num = data;
    temp->next = NULL;

    for (i = 0; ptr->next != NULL; i++)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void print_data(struct list *head_address)
{
    int i;
    struct list *ptr;

    ptr = head_address;

    if (head_address == NULL)
        printf("Linked List is empty");
    for (i = 0; head_address != NULL; i++)
    {
        printf("%d\n", ptr->num);
        ptr = ptr->next;
    }
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

    add_at_end(head_address, 67);
    add_at_end(head_address, 7);
    print_data(head_address);
    return 0;
}