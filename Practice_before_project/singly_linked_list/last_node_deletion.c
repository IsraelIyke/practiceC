#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

void del_last(struct list *head_address)
{
    struct list *temp;
    struct list *temp2;

    if(head_address == NULL)
    {
        printf("Linked list is empty");
    }
    else if(head_address->next == NULL)
    {
        free(head_address);
        head_address = NULL;
    }
    else{
        temp = head_address;
        temp2 = head_address;

        for(;temp->next != NULL;)
        {
            temp2 = temp;
            temp = temp->next;
        }

        temp2->next = NULL;
        free(temp);
        temp = NULL;
    }
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

    head_address = (struct list *)malloc(sizeof(struct list));

    head_address->num = 45;
    head_address->next = NULL;

    add_at_end(head_address, 98);
    add_at_end(head_address, 3);

    del_last(head_address);

    print_data(head_address);
    return 0;
}