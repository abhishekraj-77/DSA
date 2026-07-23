// leetcode link:https://leetcode.com/problems/maximum-depth-of-binary-tree/description/?envType=problem-list-v2&envId=duddjyc2

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
//     int solveusingBFS(TreeNode* root){
//         queue<TreeNode*>q;
//         q.push(root);
//         q.push(nullptr);
//         int count = 0;
//         while(!q.empty()){
//             TreeNode* front = q.front();
//             q.pop();
//             if(front == nullptr){
//                 count++;
//                 if(!q.empty()){
//                     q.push(nullptr);
//                 }
//             }else{
//                 if(front->left != nullptr) q.push(front->left);
//                 if(front->right != nullptr) q.push(front->right);
//             }
//         }
//         return count;
//     }
//     int maxDepth(TreeNode* root) {
//         if(root == nullptr) return 0;
//         return solveusingBFS(root);
//     }
// };