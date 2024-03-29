class Codec {
public:
    string serialize(TreeNode* root) {
         if(root==NULL)
            return "";
        
        string s;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node==NULL)
            {
                s.append("#,");
            }
            else
            {
                s.append(to_string(node->val)+',');
            }
            if(node!=NULL)
            {
                q.push(node->left);
                q.push(node->right);
            }     
        }
        return s;
    }
    TreeNode* deserialize(string data) {
        if(data.size()==0)
            return NULL;
        
        stringstream s(data);
        string str;
        getline(s, str, ',');
        TreeNode* root=new TreeNode(stoi(str));
            queue<TreeNode*>q;
            q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            
              getline(s, str, ',');
            if(str=="#")
            {
                node->left=NULL;
            }
            else
            {
                TreeNode* l=new TreeNode(stoi(str));
                node->left=l;
                q.push(l);
            }
            
             getline(s, str, ',');
            if(str=="#")
            {
                node->right=NULL;
            }
            else
            {
                TreeNode* r=new TreeNode(stoi(str));
                node->right=r;
                q.push(r);
            }
            
        }
        return root;
    }
};