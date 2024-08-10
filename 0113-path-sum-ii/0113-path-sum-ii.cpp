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
    void haspathSum(TreeNode* root, int targetSum, vector<vector<int>>& result, vector<int>& ds)
    {
        if(root==NULL )
            return;
        ds.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(targetSum==root->val)
            {
                result.push_back(ds);
            }
        }else
        {
            haspathSum(root->left, (targetSum-root->val), result,ds);
            haspathSum(root->right, (targetSum-root->val),result,ds);
        }
        ds.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> ds;
        haspathSum(root,targetSum, result, ds);
        return result;
    }
};

auto init = []
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();