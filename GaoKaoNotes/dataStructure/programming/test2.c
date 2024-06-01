#include <stdio.h>
#include <stdlib.h>

// AVL 树节点结构
struct TreeNode {
    int val;
    int count; // 子树节点数
    struct TreeNode *left;
    struct TreeNode *right;
};

// 创建 AVL 树节点
struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->count = 1; // 初始节点数为 1
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 计算节点的子树节点数
int getCount(struct TreeNode* node) {
    return node ? node->count : 0;
}

// 在 AVL 树中查找第 j 个元素
int findJthElement(struct TreeNode* root, int j) {
    if (!root || j <= 0 || j > getCount(root)) {
        return -1; // 未找到或 j 超出范围
    }
    int leftCount = getCount(root->left);
    if (j <= leftCount) {
        return findJthElement(root->left, j); // 在左子树中查找
    } else if (j == leftCount + 1) {
        return root->val; // 找到第 j 个元素
    } else {
        return findJthElement(root->right, j - leftCount - 1); // 在右子树中查找
    }
}

// 中序遍历 AVL 树（用于验证结果）
void inorderTraversal(struct TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        printf("%d ", root->val);
        inorderTraversal(root->right);
    }
}

int main() {
    // 创建 AVL 树
    struct TreeNode* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(8);
    root->right->right = createNode(30);
    root->right->right->left = createNode(25);
    
    // 验证中序遍历结果
    printf("Inorder traversal of AVL tree:\n");
    inorderTraversal(root);
    printf("\n\n");
    
    // 查找第 j 个元素
    int j = 4;
    int result = findJthElement(root, j);
    if (result != -1) {
        printf("The %dth element in AVL tree is: %d\n", j, result);
    } else {
        printf("Invalid value of j\n");
    }

    return 0;
}
