#include<stdio.h>
#include<stdlib.h>
int p,value;
struct Node*top=NULL;
struct Node{
    int data;
    struct Node*next;
};

void push(){
    
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("stack overflow");
    }else{
printf("enter the value to be inserted : \n");
scanf("%d",&value);
        n->data=value;
        n->next=top;
        
        top=n;
    }
}
void pop(){
    if(top==NULL){
        printf("underflow");
        }else{
        struct Node*ptr=top;
        value=top->data;
        top=top->next;
        free(ptr);
        printf("elment %d got deleted",value);
    }
}
void peak(){
    if(top==NULL){
        printf("underflow");

    }else{
        printf("elments are\n");
        for(int i=0;i<p;i++){
            printf("\n%d ",top->data);
            top=top->next;
        }
    }
}
int main(){
    int choice;
 printf("enter the size of the stack : ");
    scanf("%d",&p);
    do{
        printf("___MENU___");
        printf("\n1.Push\n2.pop\n3.peak\n4.Exit");
        printf("\n enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2: pop();
            break;
            case 3: peak();
            break;
            case 4:break;
            default : printf("invalid choice");


        }
    }while(choice!=4);
}