#include<iostream>
#include<vector>
class Node{
    public:
    Node();
    Node(int x);
    int val;
    Node* left;
    Node* right;
};
class BST{
    public:
    Node* root;
    BST();
    BST(std::vector<int>& vec);
    void insert(Node*& tree,int val);
    void clear(Node* tree);
    void print(Node* tree);
    void sortPrint(Node* bstRoot);
    private:
    void clearSubfunction(Node* tree);
};