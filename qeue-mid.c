#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data[40];
    struct node *next;
};
void main()
{
    char item[40];
    struct node *head;
    void enqueue()
    {
        struct node *ptr, *temp;
        ptr = (struct node *)malloc(sizeof(struct node));
        if (ptr == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            printf("\nEnter file name\n");
            scanf("%s", &item);
            strcpy(ptr->data, item);
            if (head == NULL)
            {
                ptr->next = NULL;
                head = ptr;
            }
            else
            {
                temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = ptr;
                ptr->next = NULL;
            }
        }
    }
    void display()
    {
        struct node *ptr;
        ptr = head;
        if (ptr == NULL)
        {
            printf("\nNothing to print \n");
        }
        else
        {
            printf("\n printing values\n");
            while (ptr != NULL)
            {
                char c[1000];
                char f[300];
                FILE *fptr;
                if ((fptr = fopen(ptr->data, "r")) == NULL)
                {
                    printf("Error! File cannot be opened.");
                }
                fscanf(fptr, "%[^\n]", c);
                printf("Data from the file:\n%s", c);
                ptr = ptr->next;
                fclose(fptr);
            }
        }
    }
    enqueue();
    enqueue();
    enqueue();
    display();
}
