#include <stdio.h>
#include <stdlib.h>


struct Node {
	int top;
	struct Node* left;
	struct Node* right;
};


struct Node* newNodeCreate(int data)
{
	struct Node* n1
		= (struct Node*)(malloc(sizeof(struct Node)));
	n1->top = data;
	n1->left = NULL;
	n1->right = NULL;
	return n1;
}


struct Node* insert(struct Node* root, int data)
{
	if (root == NULL)
		return newNodeCreate(data);
	else {
		if (data < root->top)
			root->left = insert(root->left, data);
		if (data > root->top)
			root->right = insert(root->right, data);
		return root;
	}
}


void inorderofBST(struct Node* root)
{
	if (root == NULL)
		return;
	else {
		inorderofBST(root->left);
		printf("%d ", root->top);
		inorderofBST(root->right);
	}
}

int main()
{
	 int n;
	printf("Enter The size of the initial array \n");
	scanf("%d",&n);
	int arr[n],i=0;
	
	printf("Enter the elements in the initial array with duplicate elements if possible\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}


	struct Node* root = NULL;
	

	for ( i = 0; i < n; i++) 
	{

		
		root = insert(root, arr[i]);
	}
	printf("The array after removal of duplicate elements: \n");

	
	inorderofBST(root);
	return 0;
}

