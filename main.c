
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node
{
    int s;
    int id;
    int amount;
    char name[150];
    char author[150];
    char dept[20];
    struct Node *next;
};

typedef struct Node node;
node *head,*mid,*tail;

void view_all()
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("\n\nSelf No.         : %d",temp->s);
        printf("\nBook ID          : %d",temp->id);
        printf("\nIn Stock         : %d",temp->amount);
        printf("\nBook Name        : %s",temp->name);
        printf("\nAuthor Name      : %s",temp->author);
        printf("\nDepartment Name  : %s",temp->dept);

        temp=temp->next;
    }
}

void insert()
{

    printf("\nHow many books you want to add: ");
    int n,i;
    node *current=head;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        node *temp=(node*)malloc(sizeof(node));
        printf("\nEnter Self No.        : ");
        scanf("%d",&(temp->s));
        printf("\nEnter Book ID         : ");
        scanf("%d",&(temp->id));
        printf("\nIn Stock              : ");
        scanf("%d",&(temp->amount));
        fflush(stdin);
        printf("\nEnter Book Name       : ");
        gets(temp->name);
        printf("\nEnter Author Name     : ");
        gets(temp->author);
        printf("\nEnter Your Department : ");
        gets(temp->dept);
        printf("\nBook has been inserted successfully\n");
        temp->next=NULL;

        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=temp;
    }
}

void search()
{
    int count=0;
    char BookName[100];
    char author[100];
    node *current;
    current=head;
    fflush(stdin);
    printf("\nEnter the name of the book   : ");
    gets(BookName);
    printf("\nEnter the name of the author : ");
    gets(author);
    while(current!=NULL)
    {
        if(((strcmp(BookName,(current->name)))==0)&&(strcmp (author, (current->author)))==0)
        {
            count=1;
            printf("\n\nSelf No.        : %d",current->s);
            printf("\nBook ID         : %d",current->id);
            printf("\nIn stock        : %d",current->amount);
            printf("\nBook Name       : %s",current->name);
            printf("\nAuthor Name     : %s",current->author);
            printf("\nDepartment name : %s",current->dept);
            break;

        }
        else
        {
            current=current->next;
        }
    }
    if(count==0)
    {
        printf("\nNot in Library");
    }
}

void delet()
{
    int a,count=0;
    node *current,*prev=NULL;
    printf("\nEnter Book ID: ");
    scanf("%d",&a);
    current=head;
    while(current!=NULL)
    {
        if((current->id)==a)
        {
            count=1;
            break;
        }
        else
        {
            prev=current;
            current=current->next;
        }
    }
    if(count==0)
    {
        printf("\nWrong Input\n");
    }
    else
    {
        prev->next=current->next;
        free(current);
        printf("\nBook has been deleted successfully\n");
    }
}

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

    head->s=01;
    head->id=1001;
    head->amount=2;
    strcpy(head->name,"Head First C");
    strcpy(head->author,"David Griffiths");
    strcpy(head->dept,"CSE");
    head->next=head2;


    head2->s=01;
    head2->id=1002;
    head2->amount=2;
    strcpy(head2->name,"C++ Primer");
    strcpy(head2->author,"Stanley");
    strcpy(head2->dept,"CSE");
    head2->next=head3;

    head3->s=01;
    head3->id=1003;
    head3->amount=1;
    strcpy(head3->name,"Head First Java");
    strcpy(head3->author,"Kathy Sierra");
    strcpy(head3->dept,"CSE");
    head3->next=head4;

    head4->s=01;
    head4->id=1004;
    head4->amount=1;
    strcpy(head4->name,"Learning Python");
    strcpy(head4->author,"David Ascher");
    strcpy(head4->dept,"CSE");
    head4->next=head5;

    head5->s=01;
    head5->id=1005;
    head5->amount=2;
    strcpy(head5->name,"Head First Python");
    strcpy(head5->author,"Paul Barry");
    strcpy(head5->dept,"CSE");
    head5->next=head6;

    head6->s=02;
    head6->id=1006;
    head->amount=4;
    strcpy(head6->name,"Learning SQL");
    strcpy(head6->author,"Alan Beaulieu");
    strcpy(head6->dept,"CSE");
    head6->next=head7;

    head7->s=02;
    head7->id=1007;
    head7->amount=3;
    strcpy(head7->name,"CSS mastery");
    strcpy(head7->author,"Andy Budd");
    strcpy(head7->dept,"CSE");
    head7->next=head8;

    head8->s=02;
    head8->id=1008;
    head8->amount=1;
    strcpy(head8->name,"IOS");
    strcpy(head8->author,"Craig");
    strcpy(head8->dept,"CSE");
    head8->next=head9;

    head9->s=02;
    head9->id=1009;
    head9->amount=2;
    strcpy(head9->name,"Eloquent JavaScript");
    strcpy(head9->author,"Marijn Haverbeke");
    strcpy(head9->dept,"CSE");
    head9->next=head10;

    head10->s=02;
    head10->id=1010;
    head10->amount=2;
    strcpy(head10->name,"Learning Perl");
    strcpy(head10->author,"Randal L. Schwartz");
    strcpy(head10->dept,"CSE");
    head10->next=mid;


    mid->s=2;
    mid->id=1011;
    mid->amount=1;
    strcpy(mid->name,"Data Structure");
    strcpy(mid->author,"ALAIC");
    strcpy(mid->dept,"CSE");
    mid->next=tail;

    tail->s=3;
    tail->id=1012;
    tail->amount=5;
    strcpy(tail->name,"Circuit");
    strcpy(tail->author,"Pondol");
    strcpy(tail->dept,"EEE");
    tail->next=NULL;

    printf("\n  *****    WELCOME TO OUR SMART LIBRARY    ***** \n");
    printf("\n  *****          Developed by...           ***** \n");
    printf("\n            Name                        ID        ");
    printf("\n  Sohana Afroz             182-15-2089");
    printf("\n  Tarikuzzaman             182-15-2107");
    printf("\n  Rahiul Hasan             182-15-2125 \n");
    printf("\n******* All rights reserved by DIU_Thunderbolt *******\n");

    while(1)
    {
        int a,b;
        char c[4];
        printf("\nPlease write down your choice and press ENTER\n");
        printf("\n  1. View all books");
        printf("\n  2. Search");
        printf("\n  3. Insert new books");
        printf("\n  4. Exit\n");
        printf("\nYour choice: ");
        scanf("%d",&a);
        if(a==1)
        {
            view_all();
            printf("\n");
            printf("\nPlease write down choice and press ENTER\n");
            printf("\n  1. Continue...");
            printf("\n  2. Delete from library\n");
            printf("\nYour choice: ");
            scanf("%d",&b);
            if(b==1)
            {
                continue;
            }
            else if(b==2)
            {
                delet();
                fflush(stdin);
                printf("\n");
                printf("\nDo you want to continue(yes/no): ");
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
            else
            {
                printf("\nYour choice doesn't match, please input valid choice.\n");
            }

        }
        else if(a==2)
        {
            search();
            printf("\n");
            printf("\nDo you want to continue(yes/no): ");
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
            printf("\n");
            printf("\nDo you want to continue(yes/no): ");
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
            printf("\nYour choice doesn't match, please input valid choice.\n");
        }
    }
    return 0;
}

