#include "stdafx.h"
#include "TreeVisit.h"
#include <iostream>
#include <stack>

TreeVisit::TreeVisit()
{
}


TreeVisit::~TreeVisit()
{
}

void TreeVisit::preVisit(TreeNode *root) {
	if (!root) return;
	std::stack<TreeNode *> stack;

	TreeNode *ptr = root;
	while (!stack.empty() || ptr) {
		if (ptr) {
			std::cout << ptr->value << '\t';
			stack.push(ptr);
			ptr = ptr->left;
		}
		else{
			TreeNode *pre = stack.top();
			stack.pop();
			ptr = pre->right;
		}
	}
	std::cout << std::endl;
}

void TreeVisit::pre(TreeNode *root) {
	if (!root) return;
	std::cout << root->value << '\t';
	pre(root->left);
	pre(root->right);
}

void TreeVisit::midVisit(TreeNode *root) {
	if (!root) return;
	std::stack<TreeNode *> stack;

	TreeNode *ptr = root;
	while (!stack.empty() || ptr) {
		if (ptr) {
			stack.push(ptr);
			ptr = ptr->left;
		}
		else {
			TreeNode *pre = stack.top();
			std::cout << pre->value << '\t';
			stack.pop();
			ptr = pre->right;
		}
	}
	std::cout << std::endl;
}

void TreeVisit::mid(TreeNode *root) {
	if (!root) return;
	mid(root->left);
	std::cout << root->value << '\t';
	mid(root->right);
}

void TreeVisit::lastVisit(TreeNode *root) {
	if (!root) return;
	std::stack<TreeNode *> stack;
	TreeNode *ptr = root;
	TreeNode *lastVisit = nullptr;
	while (!stack.empty() || ptr) {
		if (ptr) {
			stack.push(ptr);
			ptr = ptr->left;
		}
		else
		{
			TreeNode *node = stack.top();
			if (node->right && node->right != lastVisit) {
				ptr = node->right;
			}
			else {
				std::cout << node->value << '\t';
				lastVisit = node;
				stack.pop();
			}
		}
	}
}

void TreeVisit::last(TreeNode *root) {
	if (!root) return;
	last(root->left);
	last(root->right);
	std::cout << root->value << '\t';
}
