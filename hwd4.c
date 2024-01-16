#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;    
};

struct sNode
{
    struct node* t;
    struct sNode* next;
};

struct node *newNode(int item);
void push(struct sNode** top, struct node *t);
struct node *pop(struct sNode** top);
int isEmpty(struct sNode* top);
struct node* insert(struct node* node, int data);
void printPreorder(struct node* node);
void printInorder(struct node* node);
struct node* search(struct node* root, int key); 

 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = NULL;
    temp->right = NULL; 
    return temp; 
}

void push(struct sNode** top, struct node* t)
{
    struct sNode* new = (struct sNode*)malloc(sizeof(struct sNode));
    if(new == NULL)
    {
      perror("malloc failed");
    }
    else
    {
      new->t = t;
      new->next = *top;
      *top = new;
    }       
}

struct node *pop(struct sNode** top)
{
    if (isEmpty(*top))
      return NULL;
    struct node *r;
    struct sNode *temp;
    temp = *top;
    r = temp->t;
    *top = temp->next;
    free(temp);
    return r;
}

int isEmpty(struct sNode *top)
{
    if (top == NULL)
    return 1;
    else
    return 0;
}


struct node* insert(struct node* node, int data) 
{ 
    if (node == NULL) 
      return newNode(data);   
    if (data < node->data) 
        node->left  = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data);      
    return node; 
}

void printPreorder(struct node* root) 
{
    struct node *current = root;
    struct sNode *s = NULL;
    push(&s, current);
    do
    {
      current = pop(&s);
      printf("%d\n", current->data);

      if (current != NULL)
      {
        if (current->left != NULL)
          {
            push(&s,current->left);
          } 
      }
      if (current != NULL)
      {
        if (current->right != NULL)
        {
          push(&s, current->right);
        }
      }  
    }while(!isEmpty(s));
}
void printInorder(struct node* root) 
{
    struct node *current = root;
    struct sNode *s = NULL;
    push(&s, current);
    do
    {
      if (current != NULL)
      {
        while (current->left != NULL)
          {
            push(&s,current->left);
            current = current->left;
          } 
      }
      current = pop(&s);
      printf("%d\n", current->data);
      if (current->right != NULL)
      {
          push(&s, current->right);
          current = current->right;
      }
      else
      {
        current = NULL;
      }
      
    }while(!isEmpty(s));

     
}

struct node* search(struct node* root, int data) 
{ 
    if (root == NULL || root->data == data) 
       return root;  
    if (root->data < data) 
       return search(root->right, data); 
    return search(root->left, data); 
}


int main()
{
    struct node* my;
    char opt;
    char value;
    char key;
    char garbage;
    while (opt != 'q' && opt!= 'Q') {
    printf("Enter a choice (lower case is also acceptable) --- (I)nsert, (F)ind, (Q)uit: ");
    scanf("%c", &opt);
    printf("%x", opt);
    while (scanf("%c", &garbage) != 0 && garbage != '\n');
    if (opt == 'i' || opt == 'I')
    {
      printf("Enter new node's key value:\n");
      scanf("%c", &value);
      printf("Enter string of up to 10 characters for ''%d''s data:\n", value);
      my = insert(my, value);
      printf("The pre-order traversal is ");
      printPreorder(my);
      printf("The Inorder traversal is ");
      printInorder(my);
    }
    if (opt == 'f' || opt == 'F')
    {
      printf("\nEnter the search key:");
      scanf("%c", &key);
      printf("Found the string ''%c''", search(my, key)->data);
    }
 }
    return 0;
}
