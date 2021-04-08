#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Modify this data type(int) to insert different data type values for tree nodes.
typedef int data;

typedef struct Node{
    data my_singers;
    Node *left, *right;

    Node(data my_singers){
        this->my_singers = my_singers;
        left = right = NULL;
    }

} myNode;

// Size Of Tree :
int size_of_tree(myNode* node){
    if(node == NULL)
        return 0;
    else
        // Size Of Tree = Size Of Left Subtree + Size Of Right Subtree + 1(Represents Root).
        return(size_of_tree(node->left) + 1 + size_of_tree(node->right));
}

// Inorder Traversal :
void InOrder(myNode* node){
    if(node == NULL)
        return;

    // Traverse The Left Sub-Tree.
    InOrder(node->left);

    // Print The Root.
    cout << node->my_singers << "-->";

    // Traverse The Right Sub-Tree.
    InOrder(node->right);
}

// Preorder Traversal :
void PreOrder(myNode* node){
    if(node == NULL)
        return;
    
    cout << node->my_singers << "-->";
    PreOrder(node->left);
    PreOrder(node->right);
}

// Postorder Traversal :
void PostOrder(myNode* node){
    if(node == NULL)
        return;
    
    PostOrder(node->left);
    PostOrder(node->right);
    cout << node->my_singers << "-->";
}

int main(){
    myNode* root = new myNode(5);

    root->left = new myNode(3);
    root->left->left = new myNode(2);
    root->left->left->left = new myNode(1);
    root->right = new myNode(9);
    root->right->left = new myNode(5);
    root->right->left->right = new myNode(7);
    root->right->right = new myNode(14);
    root->right->right->left = new myNode(10);
    root->right->right->right = new myNode(15);
    
    cout << "Size Of The Tree = " << size_of_tree(root) << endl;

    cout << "Inorder = " << endl;
    InOrder(root);
    cout << endl;

    cout << "Preorder = " << endl;
    PreOrder(root);
    cout << endl;

    cout << "Postorder = " << endl;
    PostOrder(root);

    return 0;
}