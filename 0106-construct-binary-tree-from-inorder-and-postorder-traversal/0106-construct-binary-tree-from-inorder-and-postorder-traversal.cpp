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
    unordered_map<int, int >mp;
    int pstidx;

    TreeNode* solve(vector<int>& postorder, int st, int ed){
        if(st > ed) return NULL;

        int rootval =  postorder[pstidx];
        pstidx--;

        TreeNode* node = new TreeNode(rootval);

        int mid = mp[rootval];

        node->right = solve(postorder, mid+1, ed );
        node->left = solve(postorder, st, mid-1 );

        return node;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i<inorder.size(); i++){
            mp[inorder[i]] = i;
        }

        pstidx = postorder.size()-1;

        return solve(postorder, 0, inorder.size()-1);


    }
};