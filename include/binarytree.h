#pragma once
#include <cstddef>

template <class T>
struct BinaryTreeNode {
    size_t index_; // 索引
    BinaryTreeNode<T>* parentNodePtr_; // 父节点
    BinaryTreeNode<T>* leftNodePtr_; // 左子节点
    BinaryTreeNode<T>* rightNodePtr_; // 右子节点
    BinaryTreeNode()
    {
        parentNodePtr_ = nullptr;
		leftNodePtr_ = nullptr;
        rightNodePtr_ = nullptr;
	}
    BinaryTreeNode(BinaryTreeNode<T>* parentNodePtr)
    {
        parentNodePtr_ = parentNodePtr;
		leftNodePtr_ = nullptr;
        rightNodePtr_ = nullptr;
	}

    bool addLeftNode(BinaryTreeNode<T>* leftNodePtr) {
        if (leftNodePtr_ == nullptr) {
            return false;
        }
        leftNodePtr_ =  leftNodePtr;
        return true;
    }
    bool addRightNode(BinaryTreeNode<T>* rightNodePtr) {
        if (rightNodePtr_ == nullptr) {
            return false;
        }
        rightNodePtr_ =  rightNodePtr;
        return true;
    }
    bool addParentNode(BinaryTreeNode<T>* parentNodePtr) {
        if (parentNodePtr_ == nullptr) {
            return false;
        }
        parentNodePtr_ =  parentNodePtr;
        return true;
    }
    bool deleteLeftNode(BinaryTreeNode<T>* leftNodePtr) {
        if (leftNodePtr_ == nullptr) {
            return false;
        }
        delete leftNodePtr;
        leftNodePtr = nullptr
        return true;
    }
    bool deleteRightNode(BinaryTreeNode<T>* rightNodePtr) {
        if (rightNodePtr_ == nullptr) {
            return false;
        }
        delete rightNodePtr_;
        rightNodePtr_ = nullptr;
        return true;
    }
    bool deleteParentNode(BinaryTreeNode<T>* parentNodePtr) {
        if (parentNodePtr_ == nullptr) {
            return false;
        }
        delete parentNodePtr_;
        parentNodePtr_ = nullptr;
        return true;
    }
};

template <class T>
class BinaryTree {
public:
    BinaryTree() :
        node_num_(0),
        tier_(0)
    {

    }
private:
    std::size_t node_num_;
    std::size_t tier_;
};