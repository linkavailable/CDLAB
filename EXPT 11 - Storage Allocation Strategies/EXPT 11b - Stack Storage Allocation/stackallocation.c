#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int label;
    struct node *next;
};
void main()
{
    int ch = 0;
    int k;
    struct node *h, *temp, *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    while (1)
    {
        printf("\n Stack using Linked List \n");
        printf("1->Push ");
        printf("2->Pop ");
        printf("3->View");
        printf("4->Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            temp = (struct node *)(malloc(sizeof(struct node)));
            printf("Enter label for new node : ");
            scanf("%d", &temp->label);
            h = head;
            temp->next = h->next;
            h->next = temp;
            break;
        case 2:
            h = head;
            int tempdata = head->label;
            head = head->next;
            free(h);
            printf("Node deletion successful");
            break;

        case 3:
            printf("\n HEAD -> ");
            h = head;
            while (h->next != NULL)
            {
                h = h->next;
                printf("%d -> ", h->label);
            }
            printf("NULL \n");
            break;
            getch();
        case 4:
            exit(0);
        }
    }
}
