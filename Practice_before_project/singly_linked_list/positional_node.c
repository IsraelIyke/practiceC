#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

void add_at_pos(struct list *head_address, int data, int position)
{
    struct list *ptr = head_address;
    struct list *ptr2 = malloc(sizeof(struct list));
    ptr2->num = data;
    ptr2->next = NULL;

    
    for (;position != 2; position--)
    {
        ptr = ptr->next;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
}

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
    int data = 67, position = 3;

    head_address = (struct list *)malloc(sizeof(struct list));

    head_address->num = 45;
    head_address->next = NULL;

    add_at_end(head_address, 98);
    add_at_end(head_address, 3);

    add_at_pos(head_address, data, position);
    print_data(head_address);
    return 0;
}