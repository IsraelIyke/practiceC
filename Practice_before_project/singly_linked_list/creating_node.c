#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    char *name;
    struct node *link;
} node ;

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(node));

    head->data = 45;
    head->name = "Jack";
    head->link = NULL;

    printf("His name is %s and he is %d years old\n", head->name, head->data);
    return 0;
}