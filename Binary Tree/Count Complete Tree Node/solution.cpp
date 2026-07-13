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
    int findLeftHgt(TreeNode* node){
        int height=0;
        while(node!=NULL){
            height++;
            node=node->left;
        }
        return height;
    }

    int findRightHgt(TreeNode* node){
        int height=0;
        while(node!=NULL){
            height++;
            node= node->right;
        }
        return height;
    }

    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int leftHeight= findLeftHgt(root);
        int rightHeight= findRightHgt(root);

        if(leftHeight == rightHeight){
            return pow(2,leftHeight) -1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};