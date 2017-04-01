//
// Created by Ken Kuwata on 3/23/17.
//

#include <iostream>
#include <queue>

using namespace std;

class Node{
    public:
        int data;
        Node left;
        Node right;
};

class LinkedList{
    // Struct inside the class LinkedList
    // This is one node which is not needed by the caller. It is just
    // for internal work.
    struct Node {
        int x;
        Node *next;
    };

// public member
public:
    // constructor
    LinkedList(){
        head = NULL; // set head to NULL
    }

    // This prepends a new value at the beginning of the list
    void addValue(int val){
        Node *n = new Node();   // create new Node
        n->x = val;             // set value
        n->next = head;         // make the node point to the next node.
        //  If the list is empty, this is NULL, so the end of the list --> OK
        head = n;               // last but not least, make the head point at the new node.
    }

    // returns the first element in the list and deletes the Node.
    // caution, no error-checking here!
    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

// private member
private:
    Node *head; // this is the private member variable. It is just a pointer to the first Node
};

struct node {
    int key_value;
    node *left;
    node *right;
};

class LevelOrderTraversal {

    int height(Node root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(height(root.left), height(root.right));
    }

    void printLevels(Node root, int h) {
        if (root == NULL) {
            return;
        }
        if (h == 1) {
            std::cout << ' ' + root.data << std::endl;
        } else {
            printLevels(root.left, h - 1);
            printLevels(root.right, h - 1);
        }
    }

    void levelOrderQueue(Node root){
        queue<int> q;
        int levelNodes = 0;

        if (root == NULL) {
            return;
        }


    }

    void levelOrderNaiveApproach(Node root) {
        int h = height(root);

        for(int i =1; i<=h; i++) {

        }
    }
};
