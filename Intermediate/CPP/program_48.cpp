#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct s
{
    int num;
    struct s *next;
} node;
void create(node *s)
{
    char ans = 'y';
    while (ans == 'y')
    {
        printf("Enter a num");
        scanf("%d", &s->num);
        printf("Want more");
        scanf("%c", &ans);
        if (ans == 'y')
        {
            s->next = (node *)malloc(sizeof(node));
            s = s->next;
        }
        else
            s->next = NULL;
    }
}
void print(node *s)
{
    while (s != NULL)
    {
        printf("%d", s->num);
        s = s->next;
    }
}
int count(node *s)
{
    int c = 0;
    while (s != NULL)
    {
        s = s->next;
        c++;
    }
    return c;
}
node *start;
void main()
{
    int ch, x, p;
    clrscr();
    start = (node *)malloc(sizeof(node));
    while (1)
    {
        printf("\n 1-create");
        printf("\n 2-print");
        printf("\n 3-count");
        printf("\n Enter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create(start);
            break;
        case 2:
            print(start);
            break;
        case 3:
            x = count(start);
            printf("\n Total Node = %d", x);
            break;
        case 4:
            exit(0);
        }
    }
}
