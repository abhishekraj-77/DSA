// // gfg link : https://www.geeksforgeeks.org/problems/inorder-traversal/1
// // leetcode link: https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/2075294050/

// //code:

// /*
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };


// class Solution {
//   public:
//     void inordered(Node* root,vector<int>& ans){
//         if(root == nullptr){
//             return;
//         }
//         inordered(root->left, ans);
//         ans.push_back(root->data);
//         inordered(root->right, ans);
//     }
//     vector<int> inOrder(Node* root) {
//         // code here
//         vector<int>ans;
//         inordered(root, ans);
//         return ans;
//     }
// };