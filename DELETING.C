#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* head;
void insert(int x,int n)
{
int i;
struct node* temp1=(struct node*)malloc(sizeof(struct node));
struct node* temp2=(struct node*)malloc(sizeof(struct node));
temp1->data=x;
if(n==1)
{
temp1->next=head;
head=temp1;
return ;
}
temp2=head;
for(i=1;i<n-1;i++)
{
temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
}
void print()
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp=head;
while(temp!=NULL)
{
printf("  %d   ",temp->data);
temp=temp->next;
}
}
void delet(int j)
{
int i;
struct node* temp1=(struct node*)malloc(sizeof(struct node));
struct node* temp2=(struct node*)malloc(sizeof(struct node));
temp1=head;
if(j==1)
{
head=temp2->next;
free(temp2);
return ;
}
for(i=1;i<j-1;i++)
{
temp1=temp1->next;
}
temp2= temp1->next;

temp1->next=temp2->next;
free(temp2);
}
main ()
{
int j;
head=NULL;
printf(" the list is\n");
insert(5,1);
insert(8,2);
insert(10,3);
insert(111,4);
insert(12,5);
insert(13,6);
insert(15,7);
print();
printf("delete the node\n");
scanf("%d",&j);
delet(j);
print();
getch();
return 0;
}
