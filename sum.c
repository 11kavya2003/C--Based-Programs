#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*new,*head=NULL,*temp=NULL;
void create()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0){
        printf("%d ",temp->data);}
        temp=temp->next;
    }
}
int main()
{
    create();
    display();
}
