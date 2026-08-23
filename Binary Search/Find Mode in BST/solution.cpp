class Solution {
public:
    unordered_map<int, int> freq;
    void dfs(TreeNode* root){
        if(root == NULL){
            return;
        }
        int num = root->val;
        freq[num]++;
        dfs(root->left);
        dfs(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        dfs(root);

        int maxFreq=0;
        for(auto x : freq){
            maxFreq = max(maxFreq, x.second);
        }

        for(auto x : freq){
            if(x.second == maxFreq){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};