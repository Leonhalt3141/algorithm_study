//
// Created by Ken Kuwata on 3/27/17.
//

#include <iostream>
#include <deque>
#include <climits>
#include <vector>

using namespace std;

struct Tree{
    char data;
    Tree *left;
    Tree *right;
    Tree *parent;
};

Tree* lookUp(struct Tree *node, char key){
    if(node == NULL) return node;

    if(node->data == key) return node;
    else {
        if(node->data < key)
            return lookUp(node->right, key);
        else
            return lookUp(node->left, key);
    }
}

Tree* lookMost(struct Tree *node){
    if(node == NULL) return NULL;
    while(node->left != NULL)
        node = node->left;
    return node;
}

struct Tree *newTreeNode(int data){
    Tree *node = new Tree;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;

    return node;
}

struct Tree * insertTreeNode(struct Tree *node, int data){
    static Tree *p;
    Tree *retNode;

    if(node == NULL){
        retNode = newTreeNode(data);
        retNode->parent = p;
        return retNode;
    }
    if(data <= node->data){
        p = node;
        node->left = insertTreeNode(node->left, data);
    } else {
        p = node;
        node->right = insertTreeNode(node->right, data);
    }
    return node;
}

void isBST(struct Tree *node){
    static int lastData = INT_MIN;
    if(node == NULL) return;

    isBST(node->left);

    if(lastData < node->data)
        lastData = node->data;
    else {
        cout << "Not a BST" << endl;
        return;
    }

    isBST(node->right);
    return;
}


