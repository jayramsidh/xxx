#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data ;
struct node* next;
};
struct node* head;
void insert(int x)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head =temp;
}
void print()
{
struct node* temp=head;
printf("list is  ");
while(temp!=NULL)
{
printf("%d  ",temp->data);
temp=temp->next;
}
printf("\n");
}
main ()
{
int i,x,n;
head=NULL;
printf("how many numbers\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&x);
insert(x);
print();
}
getch();
return 0;
}
