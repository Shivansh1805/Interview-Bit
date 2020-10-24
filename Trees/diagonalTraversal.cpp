
#define tn TreeNode 
unordered_map<int,vector<int>> mp;


void solver(tn *root,int d){
    if(root==NULL){
       return;
    }
    mp[d].push_back(root->val);
    solver(root->left,d-1);
    solver(root->right,d);
    
}


vector<int> Solution::solve(TreeNode* A) {
    
    mp.clear();
    vector<int> v;
    solver(A,0);
    int i=0;
    while(mp.find(i)!=mp.end()){
        vector<int> tmp=mp[i];
        for(int k=0;k<tmp.size();k++){
            v.push_back(tmp[k]);
        }
        i--;
    }
    mp.clear();
    return v;
    
}
