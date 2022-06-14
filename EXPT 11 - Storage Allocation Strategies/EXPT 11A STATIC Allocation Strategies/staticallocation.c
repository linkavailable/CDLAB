#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main(){

    top=-1;
    printf("\nEnter the size of of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\tSTACT OPERATIONS USING ARRAY");
    printf("\n\t1.push\n\t2.pop\n\t3.Display\n\t4.exit");
    do{
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("\n\tEXIT POINT");
                break;
            }
        default:
            {
                printf("\n\tPlease Enter a valid choice");
            }
        }
    }while(choice!=4);

    return 0;
}

    void push(){
        if(top>=n-1){
            printf("\n\tStack Overflow");
        }
        else{
            printf("Enter a value to be pushed:");
            scanf("%d",&x);
            top++;
            stack[top]=x;
        }
    }

    void pop(){
        if(top<=-1){
            printf("\n\tStack overflow");
        }
        else{
            printf("\n\tThe popped element id %d",stack[top]);
            top--;
        }
    }

    void display(){
        if(top>=0){
            printf("\nThe Elements in the STACK:\n");
            for(i=top;i>=0;i--){
                printf("\n%d",stack[i]);
            }
            printf("\nPress next choice");
        }
        else{
            printf("\nThe STACK is empty");
        }
    }
