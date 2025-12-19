#pragma once
#include <cstddef>

template <class T>
struct BinaryTreeNode {
    size_t index_; // 索引
    BinaryTreeNode<T>* parentNodePtr_; // 父节点
    BinaryTreeNode<T>* leftNodePtr_; // 左子节点
    BinaryTreeNode<T>* rightNodePtr_; // 右子节点
    BinaryTreeNode() :
        parentNodePtr_(nullptr),
        leftNodePtr_(nullptr),
        rightNodePtr_(nullptr)
    {
	}
    BinaryTreeNode(BinaryTreeNode<T>* parentNodePtr = nullptr, BinaryTreeNode<T>* leftNodePtr = nullptr, BinaryTreeNode<T>* rightNodePtr = nullptr ) :
        parentNodePtr_(parentNodePtr),
        leftNodePtr_(leftNodePtr),
        rightNodePtr_(rightNodePtr)
    {
	}

    void putLeftNode(BinaryTreeNode<T>* leftNodePtr) {
        leftNodePtr_ = leftNodePtr;
        if (leftNodePtr_ != nullptr) {
            leftNodePtr_->parentNodePtr_ = this;
        }
    }
    void putRightNode(BinaryTreeNode<T>* rightNodePtr) {
        rightNodePtr_ = rightNodePtr;
        if (rightNodePtr_ != nullptr) {
            leftNodePtr_->parentNodePtr_ = this;
        }
    }
    void putParentNode(BinaryTreeNode<T>* parentNodePtr) {
        parentNodePtr_ = parentNodePtr;
        if (parentNodePtr_ != nullptr) {
            leftNodePtr_->parentNodePtr_ = this;
        }
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