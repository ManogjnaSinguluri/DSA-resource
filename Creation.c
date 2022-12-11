#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
}*head;

void createLL(int n)
{
    struct Node *node,*temp;
    int num,i;
    head = (struct Node*) malloc(sizeof(struct Node));
    if (head==NULL)
    {
        printf("Memory connot be allocated");
    }
    else
    {
        printf("Data in node 1:");
        scanf("%d",&num);
        head->data = num;
        head->next=NULL;
        temp=head;
        for(i=2;i<=n;i++){
            node=(struct Node*) malloc(sizeof(struct Node));
            if (node==NULL){
                printf("mem cannot be allocated");
                break;
            }
            else{
                printf("Data in node %d:",i);
                scanf("%d",&num);
                node->data=num;
                node->next=NULL;
                temp->next=node;
                temp=temp->next;
            }
        }
    }
}

void printLL(struct Node*node )//Print the elements of a linked list with "node" as head
{
    struct Node* temp=node;
    while(temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

int main(){
    int n,m;
    printf("no of elements in linked list:");
    scanf("%d",&n);
    createLL(n);
    printf("The created linked list:\n");
    printLL(head);
}
