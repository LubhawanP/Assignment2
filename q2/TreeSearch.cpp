#include <queue>
#include <stack>
#include "TreeSearch.h"
#include <iostream>
#include <fstream>
using namespace std;

/**
 * Constructor to instantiate the array
 * @param size_ - number of elements in tree
 */
BinaryTree::BinaryTree(int size_){
  // TODO
}

/**
 * Function to insert an element into the tree in level order
 * @param key - element to be inserted
 * @return 0 if insert was success, -1 if it failed
 */
int BinaryTree::insert(int key){
  //TODO

}

/**
 * Function to find the key by performing an inorder order traversal of the tree
 * @param key - key to be searched for in the tree
 * @return value - return the index of the key (starting at 1) if found else return -1
 */
int BinaryTree::findByInOrder(int key){
  // TODO
}

/**
 * Function to find the key by performing a level order traversal of the tree
 * @param key - key to be searched for in the tree
 * @return value - return the index of the key (starting at 1) if found else return -1
 */
int BinaryTree::findByLevelOrder(int key){
  // TODO
}

/**
 * Optional: Extra Credit
 * Function to insert all elements as a sorted array
 * @param keys - elements to be inserted in sorted order
 * @return 0 if insert was success, -1 if it failed
 */
int insertSorted(int* keys) {
  // TODO: optional, extra credit
}

/**
 * Optional: Extra Credit
 * Function to find the key by performing a binary search over sorted array
 * @param key - key to be searched for in the sorted array
 * @return value - return the index of the key (starting at 1) if found else return -1
 */
int BinaryTree::findByBinarySearch(int key){
  // TODO: optional, extra credit
}


int main(){
  // read from input number and query files using the file name passed in as inputs

  // insert each input number into the tree

  // iterate and search for each query number using inorder traversal
  // measure the total time taken to search all the numbers using inorder

  // iterate and search for each query number using level-order traversal
  // measure the total time taken to search all the numbers using level-order


  // output in the format "2a:123,456,789" where:
  // 123<=m is the number matching query numbers found 
  // 456 is the total time taken in milliseconds to complete the search using inorder traversal, and 
  // 789 is the total time taken in milliseconds to complete this search using level-order traversal.
}
