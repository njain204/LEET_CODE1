class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
         if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;
        if(p->val!=q->val)return false;
        bool v=isSameTree(p->left,q->left);
        if(v==false)return false;
        bool v1=isSameTree(p->right,q->right);
        if(v1==false)return false;
         return true;
    }
};