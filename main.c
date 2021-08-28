#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int id,d,m,y,b_id,d1,m1,y1;
    char name[20],b_name[20];
    struct node*next;
}*start=NULL;
void create()
{
    char ch;
    do{
        struct node *new_node,*current;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\n\t\tEnter Your Id: ");
        scanf("%d",&new_node->id);
        printf("\n\t\tEnter Your Name: ");
        scanf("%s",&new_node->name);
        printf("\n\t\tEnter Day:");
        scanf("%d",&new_node->d);
        printf("\n\t\tEnter Month:");
        scanf("%d",&new_node->m);
        printf("\n\t\tEnter Year:");
        scanf("%d",&new_node->y);
        printf("\n\t\tBook Name PLS:");
        scanf("%s",&new_node->b_name);
        printf("\n\t\tBook ID PLS:");
        scanf("%d",&new_node->b_id);
        if(new_node->d+7>31){
           new_node->d1=(new_node->d+7)-31;
            if(new_node->m+1>12){
                new_node->m1=(new_node->m+1)-12;
                new_node->y1=new_node->y+1;
            }
            else{
                new_node->m1=new_node->m+1;
                new_node->y1=new_node->y;
            }
        }
        else{
                new_node->d1=new_node->d+7;
                new_node->m1=new_node->m;
                new_node->y1=new_node->y;
        }

        new_node->next=NULL;
        if(start==NULL){
            start=new_node;
            current=new_node;
        }
        else{
            current->next=new_node;
            current=new_node;
        }
        printf("\n\t\tIf finish press 'f' or add 's':");
        ch=getch();
    }while(ch!='f');


}
void display(){
    struct node *new_node;
    printf("\n\t\t\tYOUR INFORMATION:\n");
    new_node=start;
    while(new_node!=NULL){
        printf("\n\n\n\t\t\tYour Name          \t:%s",new_node->name);
        printf("\n\t\t\tYour id            \t:%d",new_node->id);
        printf("\n\t\t\tYour Book Name     \t:%s",new_node->b_name);
        printf("\n\t\t\tDate of Book Taken \t:%d:%d:%d",new_node->d,new_node->m,new_node->y);
        printf("\n\t\t\tDate Of book Return\t:%d:%d:%d",new_node->d1,new_node->m1,new_node->y1);
        new_node=new_node->next;
    }
    printf("\n\t\t\t\tThank You For Using");
}
void f_insert()
{
    struct node *new_node, *current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\n\t\tEnter Your Id: ");
        scanf("%d",&new_node->id);
        printf("\n\t\tEnter Your Name: ");
        scanf("%s",&new_node->name);
        printf("\n\t\tEnter Day:");
        scanf("%d",&new_node->d);
        printf("\n\t\tEnter Month:");
        scanf("%d",&new_node->m);
        printf("\n\t\tEnter Year:");
        scanf("%d",&new_node->y);
        printf("\n\t\tBook Name PLS:");
        scanf("%s",&new_node->b_name);
        printf("\n\t\tBook ID PLS:");
        scanf("%d",&new_node->b_id);
        if(new_node->d+7>31){
           new_node->d1=(new_node->d+7)-31;
            if(new_node->m+1>12){
                new_node->m1=(new_node->m+1)-12;
                new_node->y1=new_node->y+1;
            }
            else{
                new_node->m1=new_node->m+1;
                new_node->y1=new_node->y;
            }
        }
        else{
                new_node->d1=new_node->d+7;
                new_node->m1=new_node->m;
                new_node->y1=new_node->y;
        }
    new_node->next=NULL;
    current=start;
    start=new_node;
    new_node->next=current;
}
void l_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\n\t\tEnter Your Id: ");
        scanf("%d",&new_node->id);
        printf("\n\t\tEnter Your Name: ");
        scanf("%s",&new_node->name);
        printf("\n\t\tEnter Day:");
        scanf("%d",&new_node->d);
        printf("\n\t\tEnter Month:");
        scanf("%d",&new_node->m);
        printf("\n\t\tEnter Year:");
        scanf("%d",&new_node->y);
        printf("\n\t\tBook Name PLS:");
        scanf("%s",&new_node->b_name);
        printf("\n\t\tBook ID PLS:");
        scanf("%d",&new_node->b_id);
        if(new_node->d+7>31){
           new_node->d1=(new_node->d+7)-31;
            if(new_node->m+1>12){
                new_node->m1=(new_node->m+1)-12;
                new_node->y1=new_node->y+1;
            }
            else{
                new_node->m1=new_node->m+1;
                new_node->y1=new_node->y;
            }
        }
        else{
                new_node->d1=new_node->d+7;
                new_node->m1=new_node->m;
                new_node->y1=new_node->y;
        }
    new_node->next=NULL;
    current=start;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=new_node;
}
int search(int key)
{
    int count=0;
    struct node *current;
    current=start;

    while(current!=NULL)
    {
        count++;
        if(key==current->id)
        {
            break;
        }
        current=current->next;
    }

    return count;
}
void m_insert()
{
    struct node *new_node,*current,*temp,*temp1;
    int key,pos,i;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\n\t\tEnter Your Id: ");
        scanf("%d",&new_node->id);
        printf("\n\t\tEnter Your Name: ");
        scanf("%s",&new_node->name);
        printf("\n\t\tEnter Day:");
        scanf("%d",&new_node->d);
        printf("\n\t\tEnter Month:");
        scanf("%d",&new_node->m);
        printf("\n\t\tEnter Year:");
        scanf("%d",&new_node->y);
        printf("\n\t\tBook Name PLS:");
        scanf("%s",&new_node->b_name);
        printf("\n\t\tBook ID PLS:");
        scanf("%d",&new_node->b_id);
        if(new_node->d+7>31){
           new_node->d1=(new_node->d+7)-31;
            if(new_node->m+1>12){
                new_node->m1=(new_node->m+1)-12;
                new_node->y1=new_node->y+1;
            }
            else{
                new_node->m1=new_node->m+1;
                new_node->y1=new_node->y;
            }
        }
        else{
                new_node->d1=new_node->d+7;
                new_node->m1=new_node->m;
                new_node->y1=new_node->y;
        }
    new_node->next=NULL;
    current=start;
    printf("\n\t\t\tEnter the information before the id  insert:");
    scanf("%d",&key);
    pos=search(key);
    for(i=1;i<=(pos-2);i++)
    {
        current=current->next;
    }
    temp1=current;
    temp=current->next;
    temp1->next=new_node;
    new_node->next=temp;
}
void l_delete()
{
    char c;
    if(start==NULL)
    {
        printf("There is no datato delete \n");
        exit(0);
    }
    struct node *current,*temp,*temp1;
    int i,key,pos;
    do{
    printf("\nEnter your data to delete\n");
    scanf("%d",&key);
    pos=search(key);
    current=start;
    for(i=1;i<=(pos-1);i++){
        current=current->next;
    }
    if(start==current)
    {
        start=current->next;
    }
    else if(current->next==NULL)
    {
        current=start;
        for(i=1;i<=(pos-2);i++)
        {
            current=current->next;
        }
        current->next=NULL;
    }
    else{
            temp=current;
            current=start;
        for(i=1;i<=(pos-2);i++)
        {
            current=current->next;
        }
    current->next=temp->next;
    }
    printf("\t\t\t\t\n Delete Successful\n");
    printf("\t\t\tMore delete'n'\n ");
    c=getch();
    }
    while(c!='o');
}
int main()
{
    printf("\t\t\t\t\t\bWellcome To The Library Manegment System\n\n\n");
    printf("\t\t\t________________________________________________________\n");
    printf("\t\t\t**|\t\tHere You can Find This Books\t\t**\n\t\t\t**|\t\t\t\t\t\t\t**");
    printf("\n\t\t\t**|\t\t(1)Science\t\t\t\t**\n\t\t\t**|\t\t(2)Travel\t\t\t\t**\n\t\t\t**|\t\t(3)IT Base\t\t\t\t**\n");
    printf("\t\t\t**|\t\t(4)Novel\t\t\t\t**\n");
    printf("\t\t\t**|\t\t(5)History\t\t\t\t**\n");
    printf("\t\t\t**|\t\tAND MORE.....\t\t\t\t**\n");
    printf("\t\t\t**|\t\t__________\t\t\t\t**\n");
    printf("\t\t\t**|\t\tOPARATIONS\t\t\t\t**\n");
    printf("\t\t\t**|\t\tINSERT INFORMATION\t\t\t**\n");
    printf("\t\t\t**|\t\tDELETE INFORMATION\t\t\t**\n");
    printf("\t\t\t**|\t\tFIRST INSERT INFORMATION\t\t**\n");
    printf("\t\t\t**|\t\tLAST INSERT INFORMATION\t\t\t**\n");
    printf("\t\t\t**|\t\tMIDDEL INSERT INFORMATION\t\t**\n");
    printf("\t\t\t**|\t\tRETURN INFORMATION\t\t\t**\n");
    printf("\t\t\t**|\t\tMORE.......\t\t\t\t**\n");
    printf("\t\t\t**|_____________________________________________________**\n");
    create();
    display();
    f_insert();
    display();
    l_insert();
    display();
    m_insert();
    display();
    l_delete();
    display();
    return 0;
}
