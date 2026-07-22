// gfg link: https://www.geeksforgeeks.org/problems/level-order-traversal/1

// code:  

// /* A binary tree Node
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     // Constructor
//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */

// class Solution {
//   public:
//     void levelorder(Node* root, vector<int>& ans){
//         if(root == nullptr) return;
//         queue<Node*>q;
//         q.push(root);
//         while(!q.empty()){
//             Node* front = q.front();
//             q.pop();
//             ans.push_back(front->data);
//             if(front->left != nullptr) {
//                 q.push(front->left);
//             }
//             if(front->right != nullptr){
//                 q.push(front->right);
//             }
//         }
//     }
//     vector<int> levelOrder(Node *root) {
//         // code here
//         vector<int> ans;
//         levelorder(root, ans);
//         return ans;
//     }
// };

// leetcode link: https://leetcode.com/problems/binary-tree-level-order-traversal/description/


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void levelorder(TreeNode* root, vector<vector<int>>& ans){
//         if(root == nullptr) return;
//         queue<TreeNode*>q;
//         q.push(root);
//         q.push(nullptr);
//         vector<int>level;
//         while(!q.empty()){
//             TreeNode* front = q.front();
//             q.pop();
//             if(front == nullptr){
//                 ans.push_back(level);
//                 level.clear();
//                 if(!q.empty()){
//                     q.push(nullptr);
//                 }
//             }else{
//                 level.push_back(front->val);
//                 if(front->left != nullptr) q.push(front->left);
//                 if(front->right != nullptr) q.push(front->right);
//             }
//         }
//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>>ans;
//         levelorder(root, ans);
//         return ans;
//     }
// };