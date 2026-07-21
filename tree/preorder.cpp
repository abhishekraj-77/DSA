// gfg link:  https://www.geeksforgeeks.org/problems/preorder-traversal/1


// /*
// class Node
// {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     void preorder(Node* root, vector<int>& ans){
//         if(root == nullptr){
//             return;
//         }
//         ans.push_back(root->data);
//         preorder(root->left, ans);
//         preorder(root->right, ans);
//     }
//     vector<int> preOrder(Node* root) {
//         // code here
//         vector<int>ans;
//         preorder(root, ans);
//         return ans;
//     }
// };