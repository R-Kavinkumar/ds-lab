#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
    {
        struct node *head;

        int arr[] = {40, 10, 60, 1, 5, 15, 50};
        for (int i = 0; i<6; i++)
        {
            struct node *ptr;
            ptr = (struct node *)malloc(sizeof(struct node *));
            ptr->data = arr[i];
            ptr->next = head;
            head = ptr;
        }
        int display()
        {
            struct node *ptr;
            ptr = head;
            if (ptr == NULL)
            {
                printf("Nothing to print");
            }
            else
            {
                printf("\nprinting values . . . . .\n");
                while (ptr != NULL)
                {
                    printf("\n%d", ptr->data);
                    ptr = ptr->next;
                }
            }
            return 0;
        }

        int randominsert(){
            int i, loc, item;
            struct node *ptr, *temp;
            ptr = (struct node *)malloc(sizeof(struct node));
            if (ptr == NULL)
            {
                printf("\nOVERFLOW");
            }
            else
            {
                printf("\nEnter element value");
                scanf("%d", &item);
                ptr->data = item;
                printf("\nEnter the location after which you want to insert ");
                scanf("\n%d", &loc);
                temp = head;
                for (i = 0; i < loc; i++)
                {
                    temp = temp->next;
                    if (temp == NULL)
                    {
                        printf("\ncan't insert\n");
                        return;
                    }
                }
                ptr->next = temp->next;
                temp->next = ptr;
                printf("\nNode inserted");
            }
            return 0;
        }
        int random_delete()
        {
            struct node *ptr, *ptr1;
            int loc, i;
            printf("\n Enter the location of the node after which you want to perform deletion \n");
            scanf("%d", &loc);
            ptr = head;
            for (i = 0; i < loc; i++)
            {
                ptr1 = ptr;
                ptr = ptr->next;

                if (ptr == NULL)
                {
                    printf("\nCan't delete");
                    return;
                }
            }
            ptr1->next = ptr->next;
            free(ptr);
            printf("\nDeleted node %d ", loc + 1);
            return 0;
        }
        display();
        randominsert();
        random_delete();
        display();
    }
