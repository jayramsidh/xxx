#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data ;
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
struct node* temp=head;
while(temp!=0)
{
printf("  %d   ",temp->data);
temp=temp->next;
}
}
main ()
{
head=NULL;
insert(2,1);
insert(5,2);
insert(9,3);
insert(8,1);
insert(1,3);
print();
getch();
return 0;
}
