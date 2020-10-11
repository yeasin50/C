#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void view_all();
void search();
void insert();



struct Node
{
    int s;
    int id;
    char name[150];
    char Aname[140];
    char dep[20];
    struct Node *next;
};

typedef struct Node node;
node *head,*mid,*tail;

int main()
{
    head=(node*)malloc(sizeof(node));
    node  *head2=(node*)malloc(sizeof(node));
    node *head3=(node*)malloc(sizeof(node));
    node *head4=(node*)malloc(sizeof(node));
    node *head5=(node*)malloc(sizeof(node));
    node *head6=(node*)malloc(sizeof(node));
    node *head7=(node*)malloc(sizeof(node));
    node *head8=(node*)malloc(sizeof(node));
    node *head9=(node*)malloc(sizeof(node));
    node *head10=(node*)malloc(sizeof(node));
    mid=(node*)malloc(sizeof(node));
    tail=(node*)malloc(sizeof(node));

     head->s=01;head->id=1001;
     strcpy(head->name,"Head First C");
     strcpy(head->Aname,"David Griffiths");
     strcpy(head->dep,"CSE");
     head->next=head2;


     head2->s=01;
     head2->id=1002;
     strcpy(head2->name,"C++ Primer");
     strcpy(head2->Aname,"Stanley");
     strcpy(head2->dep,"CSE");
     head2->next=head3;

     head3->s=01;head3->id=1003;
     strcpy(head3->name,"Head First Java");
     strcpy(head3->Aname,"Kathy Sierra");
     strcpy(head3->dep,"CSE");
     head3->next=head4;

     head4->s=01;
     head4->id=1004;
     strcpy(head4->name,"Learning Python");
     strcpy(head4->Aname,"David Ascher");
     strcpy(head4->dep,"CSE");
     head4->next=head5;

     head5->s=01;
     head5->id=1005;
     strcpy(head5->name,"Head First Python");
     strcpy(head5->Aname,"Paul Barry");
     strcpy(head5->dep,"CSE");
     head5->next=head6;

     head6->s=02;
     head6->id=1006;
     strcpy(head6->name,"Learning SQL");
     strcpy(head6->Aname,"Alan Beaulieu");
     strcpy(head6->dep,"CSE");
     head6->next=head7;

     head7->s=02;
     head7->id=1007;
     strcpy(head7->name,"CSS mastery");
     strcpy(head7->Aname,"Andy Budd");
     strcpy(head7->dep,"CSE");
     head7->next=head8;

     head8->s=02;
     head8->id=1008;
     strcpy(head8->name,"IOS");
     strcpy(head8->Aname,"Craig");
     strcpy(head8->dep,"CSE");
     head8->next=head9;

     head9->s=02;
     head9->id=1009;
     strcpy(head9->name,"Eloquent JavaScript");
     strcpy(head9->Aname,"Marijn Haverbeke");
     strcpy(head9->dep,"CSE");
     head9->next=head10;

     head10->s=02;
     head10->id=1010;
     strcpy(head10->name,"Learning Perl");
     strcpy(head10->Aname," Randal L. Schwartz");
     strcpy(head10->dep,"CSE");
     head10->next=mid;


    mid->s=2;
    mid->id=1002;
    strcpy(mid->name,"Data stucture");
    strcpy(mid->Aname,"ALAIC");
    strcpy(mid->dep,"cse");
    mid->next=tail;

    tail->s=3;
    tail->id=1003;
    strcpy(tail->name,"Circuit");
    strcpy(tail->Aname,"Pondol");
    strcpy(tail->dep,"EEE");
    tail->next=NULL;

    printf("\n/tWELCOME\n");
    while(1)
    {
    int a;
    char c[4];
    printf("Enter your choice\n");
    printf("1 View all\n");
    printf("2 Search\n");
    printf("3 Insert a new book\n");
    printf("4 Eixt\n");
    scanf("%d",&a);
    if(a==1)
    {
        view_all();
        fflush(stdin);
        printf("\n");
        printf("\nDo you want to continue :");
        gets(c);
        if(strcmp(c,"yes")==0)
        {
            printf("\nWELCOME BACK\n");
            continue;
        }
        else
        {
            break;
        }

    }
    else if(a==2)
    {
        search();
        fflush(stdin);
        printf("\n");
        printf("\nDo you want to continue :");
        gets(c);
        if(strcmp(c,"yes")==0)
        {
            printf("\nWELCOME BACK\n");
            continue;
        }
        else
        {
            break;
        }
    }
    else if(a==3)
    {
        insert();
        fflush(stdin);
        printf("\n");
        printf("\nDo you want to continue");
        gets(c);
        if(strcmp(c,"yes")==0)
        {
            printf("\nWELCOME BACK\n");
            continue;
        }
        else
        {
            break;
        }
    }
    else if(a==4)
    {
       break;
    }
    else
    {
        printf("Wrong Input\n");
        printf("Enter again\n");
    }
    }
    return 0;
}
void view_all()
{
    node *temp=head;
    while(temp!=NULL){
        printf("\n\nself n: %d",temp->s);
        printf("\nId  no: %d",temp->id);
        printf("\nBook name: %s",temp->name);
        printf("\nAuthor name: %s",temp->Aname);
        printf("\nDEpartment name: %s",temp->dep);

     temp=temp->next;
    }


}

void insert()
{

    printf("\nHow many Books you like to add:");
    int ns,i;
    node *current=head;
    scanf("%d",&ns);
    for(i=0;i<ns;i++){
        node *temp=(node*)malloc(sizeof(node));
        fflush(stdin);
        printf("\nEnter self no:");
        scanf("%d",&(temp->s));
        printf("\nEnter Book ID:");
        scanf("%d",&(temp->id));
        printf("\nEnter Book Name:");
        fflush(stdin);
        gets(temp->name);
        printf("\nEnter Auther name: ");
        gets(temp->Aname);
        printf("\nEnter Your Department:");
        gets(temp->dep);
        temp->next=NULL;

        while(current->next!=NULL){
            current=current->next;
        }
        current->next=temp;
        }

}

void search()
{
    int count=0;
    char n[100];
    char t[100];
    node *current;
    current=head;
    fflush(stdin);
    printf("\nEnter the name of the book :");
    gets(n);
    printf("\nEnter the name of the auther :");
    gets(t);
    while(current!=NULL)
    {
        if(((strcmp(n,(current->name)))==0)&&(strcmp (t, (current->Aname)))==0)
        {
            count=1;
            printf("\n\nself n: %d",current->s);
            printf("\nId  no: %d",current->id);
            printf("\nBook name: %s",current->name);
            printf("\nAuther name: %s",current->Aname);
            printf("\nDEpartment name: %s",current->dep);
            break;

        }
        else
        {
            current=current->next;
        }
    }
    if(count==0)
    {
        printf("\nWRONG INPUT");
    }
}
/// it was modified after
