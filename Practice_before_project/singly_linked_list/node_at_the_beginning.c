#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

struct list* add(struct list *head_address, int d)
{
    struct list *ptr = malloc(sizeof(struct list));
    ptr->num = d;
    ptr->next = head_address;
    head_address = ptr;

    return head_address;
}

int main()
{
    struct list *head_address = NULL;
    struct list *ptr = NULL;
    int data;

    head_address = malloc(sizeof(struct list));
    head_address->num = 45;
    head_address->next = NULL;

    ptr = malloc(sizeof(struct list));
    ptr->num = 98;
    ptr->next = NULL;

    head_address->next = ptr;

    data = 3;

    head_address = add(head_address, data);
    ptr = head_address;

    for (;ptr != NULL;)
    {
        printf("%d\n", ptr->num);
        ptr = ptr->next;
    }

    return 0;
}