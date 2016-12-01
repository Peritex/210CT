// Week6_Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>

class BinTreeNode {
public:
	BinTreeNode(int value) {
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
	int value;
	BinTreeNode* left;
	BinTreeNode* right;

};

BinTreeNode* tree_insert(BinTreeNode* tree, int item) {
	if (tree == NULL)
		tree = new BinTreeNode(item);
	else
		if (item < tree->value)
			if (tree->left == NULL)
				tree->left = new BinTreeNode(item);
			else
				tree_insert(tree->left, item);
		else
			if (tree->right == NULL)
				tree->right = new BinTreeNode(item);
			else
				tree_insert(tree->right, item);
	return tree;
	
}

void postorder(BinTreeNode* tree) {
	if (tree->left != NULL)
		postorder(tree->left);
	if (tree->right != NULL)
		postorder(tree->right);
	std::cout << tree->value << std::endl;

}
/*
void in_order(BinTreeNode* tree) {
	if (tree->left != NULL)
		in_order(tree->left);
	std::cout << tree->value << std::endl;
	if (tree->right != NULL)
		in_order(tree->right);
}*/

void in_order(BinTreeNode* tree){
	std::stack<BinTreeNode*> s;
	BinTreeNode *current = tree; /*the current pointer is initialized to the root*/
	while (!s.empty() || current) {
		if (current) {
			s.push(current);
			current = current->left;  /*traversing to its left child while pushing visited nodes onto/onto(i don't know whitch one is righ?) the stack*/
		}
		else {
			current = s.top();  /*reached a NULL node(Leaf) so pop from stack && reasign current*/
			s.pop();
			std::cout << current->value << std::endl;  /*print current’s value*/
			current = current->right; /*set current to right child and go again :)*/
		}
	}
}

int main(int argc, char *argv[])
{
	BinTreeNode* t = tree_insert(0, 6);
	tree_insert(t, 10);
	tree_insert(t, 5);
	tree_insert(t, 2);
	tree_insert(t, 3);
	tree_insert(t, 4);
	tree_insert(t, 11);
	in_order(t);
	return 0;
}