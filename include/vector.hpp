#pragma once

#include <cmath>


template <class T>
class MyVector {
public:
    MyVector() :
        num_(0),
        size_(0),
        tail_(nullptr),
        head_(nullptr),
        data_(nullptr)
    {
    }
    explicit MyVector(std::size_t size) :
        num_(0),
        size_(size),
        tail_(nullptr),
        head_(nullptr),
        data_(nullptr)
    {
        std::cout << "construct 2" <<  "\n";
        data_ = new T[size_];
    }
    void pushBack(T data) {
        if (num_ == size_) {
            expandSize();
        }
        data_[num_] = data;
        tail_ = &data_[num_];
        num_++;
        if (num_ == 1) {
            head_ = &data_[num_];
        }
        return;
    }
    T popBack() {
        if (num_ == 0) {
            std::cout << "num_ == 0 error" << "\n";
            // erorr
        }
        T data = *tail_;
        tail_ = &data_[num_ - 2];
        num_--;
        return data;
    }

    void frontBack();
    void insert();
private:
    void expandSize() {
        T* oldData = data_;
        size_t oldSize = size_;
        // c++ you 
        size_ = static_cast<int>(std::ceil(size_ * 1.5));
        data_ = new T[size_];
        std::move(oldData, oldData + oldSize, data_);
    }
    std::size_t num_; // now data number;
    std::size_t size_; // size
    T* tail_;
    T* head_;
    T* data_;
};



