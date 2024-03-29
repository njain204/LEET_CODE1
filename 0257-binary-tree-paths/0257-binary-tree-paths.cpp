class Solution {
public:
     void solve(TreeNode * root, vector<string>&ans, string s)
    {
        if(!root)return;
        if(!root->left && !root->right)
        {
            s += to_string(root->val);
            ans.push_back(s);
        }
        s += to_string(root->val);
        solve(root->left, ans, s+"->");
        solve(root->right, ans, s+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        string s = "";
        vector<string>ans;
        solve(root, ans, s);    
        return ans;
    }
};