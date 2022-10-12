/*
    Create a linked list
    To take item form user
    and then placing at the beginning
    of the linked list,
    practice dynamic memorry allocation
*/

// Solved by HijazP

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};
typedef struct node *NODEPTR;

NODEPTR list = NULL;

// Function Prototyping
NODEPTR getnode(void);
void freenode(NODEPTR);
void insbeg(int);
void insafter(int, int);
void insend(int);
int delbeg();
int delafter(int);
int delend();
void traverse();
int countAll();
void insertAs4(int);
void print_even();
void delbefore2end();

// Main Function
void main()
{
    NODEPTR p;
    int x, c, y;
    char ch;

begin:
    printf("1. Insert the beginning\n");
    printf("2. Insert after a node\n");
    printf("3. Insert in the end\n");
    printf("4. Delete from the beginning\n");
    printf("5. Delete after a node\n");
    printf("6. Delete from the end\n");
    printf("7. Traverse\n");
    printf("8. Count the node\n");
    printf("9. Insert in the 4th node\n");
    printf("10. Traverse for even elements\n");
    printf("11. Delete element before  end element\n");
    printf("0. Exit\n");
    printf("==================================\n");
    printf("Enter your choice:\t");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("Enter the element to be inserted\n");
        scanf("%d", &x);
        insbeg(x);
        break;

    case 2:
        printf("Enter the element to be inserted after which node\n");
        scanf("%d", &y);
        printf("\nEnter the element to be inserted\n");
        scanf("%d", &x);
        insafter(y, x);
        break;

    case 3:
        printf("Enter the element to be inserted\n");
        scanf("%d", &x);
        insend(x);
        break;

    case 4:
        printf("The deleted item is : => %d\n", delbeg());
        break;

    case 5:
        printf("Enter the element to be inserted after which node\n");
        scanf("%d", &y);
        printf("The deleted item is: => %d\n", delafter(y));
        break;

    case 6:
        printf("The deleted item is: => %d\n", delend());
        break;

    case 7:
        traverse();
        printf("\n");
        break;

    case 8:
        printf("There are %d node in Linked List\n", countAll());
        break;

    case 9:
        printf("Enter the element to be inserted in 4th nodes\n");
        scanf("%d", &x);
        insertAs4(x);
        break;

    case 10:
        print_even();
        printf("\n");
        break;

    case 11:
        delbefore2end();
        traverse();
        printf("\n");
        break;

    case 0:
        exit(1);

    default:
        printf("Wrong choice\n");
        break;
    }

    printf("Do you wish to continue? (y/n)\n");
    fflush(stdin);
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y')
    {
        goto begin;
    }
}

//=======//
NODEPTR getnode(void)
{
    NODEPTR p;
    p = (NODEPTR)malloc(sizeof(struct node));
    return p;
}

//=======//
void freenode(NODEPTR p)
{
    free(p);
}

//=======//
void traverse()
{
    NODEPTR p = list;
    printf("\nThe Linked List is:\n");
    while (p != NULL)
    {
        printf("\t%d", p->info);
        p = p->next;
    }
}

//=======//
void insafter(int y, int x)
{
    NODEPTR p, q;
    q = getnode();
    q->info = x;
    for (p = list; p->info != y && p != NULL; p = p->next)
        ;
    q->next = p->next;
    p->next = q;
}

//=======//
void insbeg(int x)
{
    NODEPTR p;
    p = getnode();
    p->info = x;
    p->next = list;
    list = p;
}

//=======//
void insend(int x)
{
    NODEPTR p = list, q;
    q = getnode();
    q->info = x;
    q->next = NULL;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}

//=======//
int delbeg()
{
    NODEPTR p;
    int x;
    p = list;
    list = p->next;
    x = p->info;
    freenode(p);
    return x;
}

//=======//
int delafter(int y)
{
    NODEPTR p = list, q;
    int x;
    for (p = list; p->info != y && p != NULL; p = p->next)
        ;
    q = p->next;
    p->next = q->next;
    x = q->info;
    freenode(q);
    return x;
}

//=======//
int delend()
{
    NODEPTR p = list, q = NULL;
    int x;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = NULL;
    x = p->info;
    freenode(p);
    q->next = NULL;
    return x;
}

//=======//
int countAll()
{
    NODEPTR p = list;
    int x = 0;
    while (p != NULL)
    {
        x++;
        p = p->next;
    }
    return x;
}

//=======//
void insertAs4(int x)
{
    NODEPTR p = list, q;
    int y = 0;
    int z = 0;
    while (p != NULL)
    {
        y++;
        p = p->next;
        if (y == 2)
        {
            z = p->info;
        }
    }

    if (y < 2)
    {
        printf("Failed to insert element\n");
    }
    else
    {
        q = getnode();
        q->info = x;
        for (p = list; p->info != z && p != NULL; p = p->next)
            ;
        q->next = p->next;
        p->next = q;
    }
}

//=======//
void print_even()
{
    NODEPTR p = list;
    printf("\nThe even elements is:\n");
    while (p != NULL)
    {
        if (p->info % 2 == 0)
        {
            printf("\t%d", p->info);
        }
        p = p->next;
    }
}

//=======//
void delbefore2end()
{
    int count = countAll();
    if (count < 2)
    {
        printf("Failed to delete element\n");
    }
    else
    {
        NODEPTR p = list, q;
        int i;
        for (i = 0; i < count - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        freenode(q);
    }
}