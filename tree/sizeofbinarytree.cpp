// gfg link:  https://www.geeksforgeeks.org/problems/size-of-binary-tree/1

// /* Node Structure
// class Node {
// public:
//     int data;
//     struct Node* left;
//     struct Node* right;
//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// }; */

// class Solution {
//   public:
//    int bfs(Node* root){
//        if(root == nullptr){
//            return 0;
//        }
//        queue<Node*>q;
//        q.push(root);
//        int count = 0;
//        while(!q.empty()){
//            Node* front = q.front();            // do it by dfs
//            q.pop();
//            count++;
//            if(front->left != nullptr){
               
//                q.push(front->left);
//            }
//            if(front->right!=nullptr){
//                q.push(front->right);
//            }
//        }
//        return count;
//    }
//     int getSize(Node* root) {
//         // code here
//         return bfs(root);
//     }
// };