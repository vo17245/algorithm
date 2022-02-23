#include<iostream>
#include"BST.h"
#include<vector>
int main(){
    //使用数组初始化二叉搜索树
    int a[10]={1,3,6,8,2,5,7,9};
    std::vector<int> vec(a,a+8);
    BST bst(vec);
    //前序遍历
    std::cout<<"print(plr): "<<std::endl;
    bst.print(bst.root);
    std::cout<<std::endl;
    //中序遍历
    std::cout<<"sort print"<<std::endl;
    bst.sortPrint(bst.root);
    //清除二叉搜索树
    bst.clear(bst.root);
    std::cout<<std::endl;
    //打印空的树(检查清除结果)
    std::cout<<"empty: "<<std::endl;
    bst.print(bst.root);
    std::cout<<std::endl;
    return 0;
}