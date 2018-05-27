// LeetCode 206
// Reverse a singly linked list(not allow extra space)
// Author: Michael Shi
// Licence: TBD

#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	// The different between 0 and NULL. 
	// In C++ 11, it start to use nullptr as keyword for null pointer
	ListNode (int x) : val(x), next(nullptr) {}; 

};

class Solution {
public: 
	ListNode * reverseList(ListNode* head) {
		ListNode *new_head = NULL;
		while (head) {
			ListNode *next = head->next; // backup head->next
			head->next = new_head;       // update head->next
			head->next = head;           // move new_head
			head = next;
		}
		return new_head;
	  }
};