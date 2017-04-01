//
// Created by Ken Kuwata on 3/22/17.
//

/*
 * Problem:
 * Given an array of values, create a balanced binary tree and print each row
 * of the tree in the order. Terminate each row with a carriage return.
 */

#include <iostream>
#include <map>
#include <list>

using namespace std;

char vals[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
//char result = '';

struct Tree {
    char val = vals[0];
    char left;
    char right;
}tree;

/*struct Row {
    std::list now = {new Tree};
    std::list next = {};
}row;*/


/*void createTree() {
    int val, d, depth;


    void addNodes(Tree prtNode){
    }
};*/