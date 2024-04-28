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
    void pushing(queue<TreeNode*>& queue, vector<int>& values,TreeNode* node) {
        if(node->right!=NULL){
        queue.push(node->right);
        values.push_back(node->right->val);
        }
        if(node->left!=NULL){
        queue.push(node->left);
        values.push_back(node->left->val);
        }else{
            values.push_back(NULL);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        else if(p==NULL & q!=NULL){
            return false;
        }
        else if(q==NULL && p!=NULL){
            return false;
        }
        queue<TreeNode*> myqueue1,myqueue2;
        vector<int> values1,values2;
        myqueue1.push(p);
        values1.push_back(p->val);
        TreeNode* node;
        while (!myqueue1.empty()) {
            node = myqueue1.front();
            myqueue1.pop();
            pushing(myqueue1, values1, node);
        }
        myqueue2.push(q);
        values2.push_back(q->val);
        while (!myqueue2.empty()) {
            node = myqueue2.front();
            myqueue2.pop();
            pushing(myqueue2, values2, node);
        }
        cout<<values1.size()<<" "<<values2.size()<<endl;
        if (values1.size() != values2.size()) {
            return false;
        }
        for (int i = 0; i < values1.size(); i++) {
            if (values1[i] != values2[i]) {
                return false;
            }
        }
        return true;
    }
};