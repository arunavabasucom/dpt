#pragma once
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode();
  TreeNode(int x);
  TreeNode(int x, TreeNode* left, TreeNode* right);
};
TreeNode* arrayToBinaryTree(const vector<int>& arr, int index);
// void printBinaryTree(TreeNode* root, string indent = "", bool last = true);

struct Node {
  int data;
  Node* left;
  Node* right;
  Node();
  Node(int x);
  Node(int x, Node* left, Node* right);
};
