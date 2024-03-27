//
//  main.cpp
//  Binarytree
//
//  Created by Khaled Md Tuhidul Hossain on 27/03/2024.
//

#include <iostream>
#include <queue>
using namespace std;

// Definition for binary tree node
struct BinaryTreeNode {
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

// Function to print binary tree top to bottom, left to right
void printBinaryTree(BinaryTreeNode* root) {
    if (root == nullptr)
        return;

    queue<BinaryTreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        unsigned long levelSize = q.size();
        for (int i = 0; i < levelSize; ++i) {
            BinaryTreeNode* curr = q.front();
            q.pop();
            cout << curr->m_nValue << " ";

            if (curr->m_pLeft != nullptr)
                q.push(curr->m_pLeft);
            if (curr->m_pRight != nullptr)
                q.push(curr->m_pRight);
        }
    }
}

int main() {
    // Example binary tree
    BinaryTreeNode* root = new BinaryTreeNode{8,
                           new BinaryTreeNode{6,
                                                new BinaryTreeNode{5, nullptr, nullptr},
                                                new BinaryTreeNode{7, nullptr, nullptr}},
                           new BinaryTreeNode{10,
                                                new BinaryTreeNode{9, nullptr, nullptr},
                                                new BinaryTreeNode{11, nullptr, nullptr}}};
    
    cout << "Binary tree in top to bottom, left to right order: ";
    printBinaryTree(root);
    
    return 0;
}
