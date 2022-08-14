#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list *next;
};

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
    
    printf("%d",head_address->next->num );

    return 0;
}