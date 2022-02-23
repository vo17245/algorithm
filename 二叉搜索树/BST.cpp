#include"BST.h"
Node::Node(){
    left=nullptr;
    right=nullptr;
    val=0;
}
Node::Node(int x){
    left=nullptr;
    right=nullptr;
    val=x;
}
BST::BST(){
    root=nullptr;
}
void BST::insert(Node*& tree,int val){
    Node* z=new Node(val);
    Node* y=nullptr;
    Node* x=tree;
    while(x!=nullptr){
        y=x;
        if(z->val>x->val){
            x=x->right;
        }else{
            x=x->left;
        }
    } 
    if(y==nullptr){
        tree=z;
    }else if(z->val>y->val){
        y->right=z;
    }else{
        y->left=z;
    }
}
void BST::clearSubfunction(Node* bstRoot){
    if(bstRoot==nullptr){
        return;
    }
    clear(bstRoot->left);
    clear(bstRoot->right);
    delete bstRoot;
}
void BST::clear(Node* bstRoot){
    clearSubfunction(bstRoot);
    root=nullptr;
}
void BST::print(Node* root){
    if(root==nullptr){
        return;
    }
    std::cout<<root->val<<" ";
    print(root->left);
    print(root->right);
}
BST::BST(std::vector<int>& vec){
    root=nullptr;
    for(int i=0;i<vec.size();i++){
        insert(BST::root,vec[i]);
    }
}
void BST::sortPrint(Node* bstRoot){
    if(nullptr==bstRoot){
        return;
    }
    sortPrint(bstRoot->left);
    std::cout<<bstRoot->val<<" ";
    sortPrint(bstRoot->right);
}