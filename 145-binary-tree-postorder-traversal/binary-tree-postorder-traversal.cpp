/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        stack<TreeNode*> st;
        if(root == NULL){
            return arr;
        }
        st.push(root);
        while(!st.empty()){
            TreeNode* cur = st.top();
            arr.push_back(cur->val);
            st.pop();
            if(cur->left){
                st.push(cur->left);
            }
            if(cur->right){
                st.push(cur->right);
            }
        }
        reverse(arr.begin(),arr.end());
        return arr; 
    }
};