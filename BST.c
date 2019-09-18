//	BST Inorder, Post-order, Pre-order

/*

Algorithm: Binary search tree

If root == NULL 
    return NULL;
If number == root->data 
    return root->data;
If number < root->data 
    return search(root->left)
If number > root->data 
    return search(root->right)
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createNode(int value)
{
	struct node* newNode = malloc(sizeof(struct node));

	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

/*

Algorithm: Insert value in Binary Search Tree(BST)

If node == NULL 
    return createNode(data)
if (data < node->data)
    node->left  = insert(node->left, data);
else if (data > node->data)
    node->right = insert(node->right, data);  
return node;

*/

struct node* insert(struct node* root, int data)
{
    if (root == NULL) return createNode(data);
    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);   
 
    return root;
}

void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

//Inorder:	Left, Root, Right

/*
	 Algorithm of in order Traversal
	|-------------------------------|

	1. Traverse left sub tree in in-order.
	2. Visit root node.
	3. Traverse right sub tree in in-order.
*/

void preorder(struct node* node)
{
	if (node == NULL) return;
	printf("%d ", node->data);
	preorder(node->left);
	preorder(node->right);
}

//Preorder:	Root, Left, Right

/*
	 Algorithm of in order Traversal
	|-------------------------------|

	1. Visit root node.
	2. Traverse left sub tree in pre-order.
	3. Traverse right sub tree in pre-order.
*/

void postorder(struct node* node){
	if (node == NULL) return;
		postorder(node->left);
		postorder(node->right);
		printf("%d ", node->data);
}

//Postorder: Left, Right, Root

/*
	 Algorithm of in order Traversal
	|-------------------------------|

	1. Traverse left sub tree in post-order.
	2. Traverse right sub tree in post-order.
	3. Visit root node.
*/

void main(){
    struct node *root = NULL;
    root = insert(root, 6);
    insert(root, 5);
    insert(root, 4);
    insert(root, 3);
    insert(root, 2);
    insert(root, 1);
    printf("In-order in down below:\n\t");
    inorder(root);
    printf("\nPre-order in down below:\n\t");
    preorder(root);
    printf("\nPost-order in down below:\n\t");
    postorder(root);
}
