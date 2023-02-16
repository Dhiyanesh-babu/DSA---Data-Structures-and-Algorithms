
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

struct node
{
	int key;
	node *left; 
	node *right;
	node(int k)
	{
		key = k;
		left = NULL;
		right = NULL;
	}
};

int size(node *root)
{
	if(root==NULL)
		return 0;
	else 
	{
		return 1+size(root->left)+size(root->right);
	}
}




int main()
{
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->left->right->left = new node(70);
	root->left->right->right = new node(80);
	root->right->right = new node (60);
	cout<<size(root);
}