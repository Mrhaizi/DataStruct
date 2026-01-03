#pragma once
#include <cstddef>
#include <memory>

template <class T>
struct TreeNode {
    std::shared_ptr<TreeNode<T>> parentPtr;
    std::shared_ptr<TreeNode<T>> leftPtr;
    std::shared_ptr<TreeNode<T>> rightPtr;
};

template <class T>
class AVLTree {
public:
    AVLTree() {

    }
    void add(T node) {
    }
private:
    size_t nodeNum_;
    size_t tier_;
    std::shared_ptr<TreeNode<T>> rootNode_;
};

