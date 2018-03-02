#pragma once
#include "stdafx.h"
class TreeVisit
{
public:
	TreeVisit();
	~TreeVisit();
	void preVisit(TreeNode *root);
	void pre(TreeNode *root);

	void midVisit(TreeNode *root);
	void mid(TreeNode *root);

	void lastVisit(TreeNode *root);
	void last(TreeNode *root);
};

