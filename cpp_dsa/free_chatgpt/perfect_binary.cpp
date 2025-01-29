#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a value into the binary tree.
TreeNode* insertLevelOrder(int arr[], TreeNode* root, int i, int n) {
    if (i < n) {
        TreeNode* temp = new TreeNode(arr[i]);
        root = temp;

        // Insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);

        // Insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// Helper function to print spaces for tree visualization.
void printSpaces(int count) {
    for (int i = 0; i < count; ++i) {
        cout << " ";
    }
}

// Function to print the tree in a structured format (visual representation).
void printTree(TreeNode* root, int level = 0, int indentSpace = 4) {
    if (!root) {
        return;
    }

    if (root->right) {
        printTree(root->right, level + 1, indentSpace);
    }

    printSpaces(level * indentSpace);
    cout << root->val << endl;

    if (root->left) {
        printTree(root->left, level + 1, indentSpace);
    }
}

// Function to print the tree level-order.
void printLevelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        cout << node->val << " ";

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    cout << endl;
}

int main() {
    const int n = 15; // Perfect binary tree size (2^4 - 1)
    int arr[n];

    cout << "Enter 15 integers for the perfect binary tree: \n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    TreeNode* root = insertLevelOrder(arr, nullptr, 0, n);

    cout << "The tree in level-order traversal is: \n";
    printLevelOrder(root);

    cout << "\nVisual representation of the tree: \n";
    printTree(root);

    return 0;
}
