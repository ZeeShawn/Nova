#include "stdafx.h"
#include "BinarySearch.h"
#include <iostream>
#include <queue>

BinarySearch::BinarySearch():
	m_value(0)
{
}


BinarySearch::~BinarySearch()
{
}

void BinarySearch::showTree(TreeNode* root) {
	if (!root) return;
	std::queue<TreeNode*> list;
	list.push(root);
	while (list.size() > 0) {
		int len = list.size();
		for (int i = 0; i < len; i++)
		{
			TreeNode *node = list.front();
			if (node) {
				std::cout << node->value << '\t';
				list.push(node->left);
				list.push(node->right);
			}
			else {
				std::cout << "null\t";
			}
			list.pop();
		}
		std::cout << std::endl;
	}
}

void BinarySearch::insert(TreeNode*& root, int value) {
	if (!root) {
		TreeNode *node = new TreeNode(value);
		root = node;
	}
	if (value > root->value) {
		insert(root->right, value);
	}
	if (value < root->value) {
		insert(root->left, value);
	}
}

void BinarySearch::deleteNode(TreeNode* root, int value) {
	if (!root) return;
	if (root->value == value) deleteNode(root);
	if (value > root->value) deleteNode(root->right, value);
	if (value < root->value) deleteNode(root->left, value);
}

void BinarySearch::deleteNode(TreeNode* node) {
	if (!node->left && !node->right) {
		delete node;
	}
	else if (!node->left)
	{
		TreeNode *rightNode = node->right;
		node->value = rightNode->value;
		node->right = rightNode->right;
		node->left = rightNode->left;
		delete rightNode;
	}
	else if (!node->right)
	{
		TreeNode *leftNode = node->left;
		node->value = leftNode->value;
		node->left = leftNode->left;
		node->right = leftNode->right;
		delete leftNode;
	}
	{
		TreeNode *temp = node->left;
		while (temp->right)
		{
			temp = temp->right;
		}
		node->value = temp->value;
		deleteNode(temp);
	}
}
