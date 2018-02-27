#pragma once
struct TreeNode
{
	TreeNode(int n):value(n), left(nullptr), right(nullptr){
	}
	int value;
	TreeNode *left, *right;
};

class BinarySearch
{
public:
	BinarySearch();
	~BinarySearch();
	void showTree(TreeNode* root);

	void insert(TreeNode*& root, int value);
	void deleteNode(TreeNode* root, int value);
	void deleteNode(TreeNode* node);
private:
	int m_value;
};

