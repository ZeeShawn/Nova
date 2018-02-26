// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void printV(vector<int>& nums) {
	for (int n : nums) {
		std::cout << n << '\t';
	}
	std::cout << std::endl;
}

void maxHeap(vector<int>& nums, int idx, int end) {
	int len = nums.size();
	if (idx > end) return;
	int left = idx * 2 + 1;
	int right = (idx + 1) * 2;

	int max = nums[idx];
	int maxIdx = idx;
	if (left <= end && nums[left] > max) {
		maxIdx = left;
		max = nums[left];
	}
	if (right <= end && nums[right] > max) {
		maxIdx = right;
		max = nums[right];
	}
	if (maxIdx != idx) {
		swap(nums[maxIdx], nums[idx]);
		maxHeap(nums, maxIdx, end);
	}
	return;
}

void heapSort(vector<int>& nums) {
	int len = nums.size();
	for (int i = (len - 1) / 2; i >= 0; i--) {
		maxHeap(nums, i, len-1);
	}
	printV(nums);

	for (int i = len - 1; i >= 0; i--) {
		swap(nums[0], nums[i]);
		maxHeap(nums, 0, i - 1);
		printV(nums);
	}
}

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(6);
	nums.push_back(4);
	nums.push_back(8);
	nums.push_back(9);

	heapSort(nums);
	printV(nums);
    return 0;
}

