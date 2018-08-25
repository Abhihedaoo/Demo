#include<stdio.h>
#include<stdlib.h>

struct BSTNode {
	int data;
	struct BSTNode* left;
	struct BSTNode* right;
};



struct BSTNode* Insert( struct BSTNode* root, int value ) {
	struct BSTNode* newNode = (struct BSTNode*)malloc(sizeof(struct BSTNode));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	if(root == NULL) {
		root = newNode;
		return root;
	} else if ( value <= root->data ) {
		root->left = Insert(root->left, value);
	} else {
		root->right = Insert(root->right, value);
	}
	return root;
}

int Search(struct BSTNode* root, int value) {
	if( root == NULL ) {
		return 0;
	}else if ( root->data == value) { return 1; }
	else if (value <= root->data) { Search(root->left, value); }
	else { Search ( root->right, value ); }
	
}

int main() {
	int n, i, value;
	struct BSTNode* root = NULL;
	
	root = Insert(root, 12);
	root = Insert(root, 9);
	root = Insert(root, 15);
	root = Insert(root, 45);
	root = Insert(root, 54);
	root = Insert(root, 1);
	root = Insert(root, 2);	
	
	if (Search(root, 100) == 1) {
		printf("Found");
	}else {
		printf("Not Found");
	}
}
