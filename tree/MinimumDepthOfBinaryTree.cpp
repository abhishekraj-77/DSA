// leetcode link:https://leetcode.com/problems/minimum-depth-of-binary-tree/?envType=problem-list-v2&envId=duddjyc2

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
//     int minimumLevel(TreeNode* root){
//         if(root == nullptr) return 0;
//         queue<TreeNode*>q;
//         q.push(root);
//         q.push(nullptr);
//         int count = 1;
//         while(!q.empty()){
//             TreeNode* front = q.front();
//             q.pop();
//             if(front == nullptr){
//                 count++;
//                 if(!q.empty()){
//                     q.push(nullptr);
//                 }
//             }else{
//                 if(front->left == nullptr && front ->right == nullptr){
//                     return count;
//                 }
//                 if(front->left != nullptr){
//                     q.push(front->left);
//                 }
//                 if(front->right != nullptr){
//                     q.push(front->right);
//                 }
//             }
//         }
//         return count;
//     }
//     int minDepth(TreeNode* root) {
//         return minimumLevel(root);
    
//     }
// };