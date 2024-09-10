// linked list
#pragma once
#include "stdc++.h"

using namespace std;
// Definition for singly-linked list node.
struct ListNode {
  int val;
  ListNode *next;
  // Constructors
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// utilities
void __llprint(ListNode *head);
void __lldelete(ListNode *head);
int __llgetLength(ListNode *head);
ListNode *_llarrayToList(const vector<int> &arr);

