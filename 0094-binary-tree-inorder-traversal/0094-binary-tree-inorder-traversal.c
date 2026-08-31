/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;

    int* result = malloc(100 * sizeof(int));

    if (root == NULL) {
        return result;
    }

    // Helper function
    void inorder(struct TreeNode* node) {
        if (node == NULL) 
            return;

        inorder(node->left);
        result[(*returnSize)++] = node->val;
        inorder(node->right);
    }

    inorder(root);

    return result;
}

    
