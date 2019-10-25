/*
Program : 12
Breadth First Search (BFS) in a binary tree.
*/
#include<stdio.h>
#include<stdlib.h>

int queue[100];
int front=0;
int rear=-1;


struct node{
    int data;
    struct node *left;
    struct node *right;
};

/**Insert data in the tree**/
struct node *insert(struct node *root, int value){
    if(root == NULL){
        root = (struct node*) malloc(sizeof(struct node));
        root->left = root->right = NULL;
        root->data = value;
        return root;
    }else{
        if(value < root->data){
            root->left = insert(root->left, value);
        }else{
            if(value > root->data){
                root->right = insert(root->right, value);
            }
        }
        return root;
    }
};

void printNode(struct node *root){
    if(root != NULL) {
        printf("%d ", root->data);
    }
}

/******** Queue ********/
void enqueue(struct node *root){
    if(root != NULL){
        rear++;
        queue[rear] = root;
    }
}
void dequeue(){
    if(rear>=front){
        struct node *root = queue[front];
        printNode(root);
        front++;
        enqueue(root->left);
        enqueue(root->right);
    }
}

/** BFS function **/
void bfs(struct node *root){
    if(root != NULL){
        enqueue(root);
        do{
            dequeue(root);
        }while(front <= rear);
    }
}


int main(){

    struct node *root = NULL;
    int choose;
    int n=0, i=0, insertNode, limit;

    printf("Enter Your choice : \n 1 For insert a node \n 2 For BFS \n 0 for exit the program");
    printf("\n---------------------------------");
    while(1){
        printf("\nEnter your option : ");
        scanf("%d", &choose);
        switch(choose){
        case 1:

            printf("How many nodes of the tree :");
            scanf("%d", &n);
            for(i = 0; i < n; i++ ){
                printf("Enter root : ");
                scanf("%d", &insertNode);
                root = insert(root, insertNode);
            }
            break;

        case 2:
            printf("BFS traversal of that tree is : ");
            bfs(root);
            break;

        case 0:
            exit(0);
            break;
        }
    }
    /** My input

    node Number  : 7
    20 15 25 10 18 22 28

    /** My input **/

    return 0;
};
