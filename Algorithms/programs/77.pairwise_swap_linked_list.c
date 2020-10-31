/*******77.Program of pairwise swap of number*****/
/************Author : Abhishek Kumar *************/
/*************************************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
getnode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;

}
pairWise(struct node* START)
{
    if (START == NULL || START->next == NULL)
        return START;
    struct node* remaing = START->next->next;
    struct node* neww = START->next;
    START->next->next = START;
    START->next = pairWise(remaing);
    return neww;
}
InsBeg(struct node **list,int x)
{
    struct node *temp;
    temp=getnode();
    temp->info=x;
    temp->next=*list;
    *list =temp;

}

Traverse(struct node *list)
{
    struct node *t;
    t=list;
    while(t!=NULL)
    {
        printf("%d\t",t->info);

        t=t->next;
    }


}
void main()
{
    struct node *START;
    START=NULL;

    InsBeg(&START,900);
    InsBeg(&START,800);
    InsBeg(&START,700);
    InsBeg(&START,600);
    InsBeg(&START,500);
    InsBeg(&START,400);
    InsBeg(&START,300);
    InsBeg(&START,200);
    Traverse(START);
    printf("\n\n");

    START=pairWise(START);
    Traverse(START);
}
