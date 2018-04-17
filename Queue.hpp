
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "LinearContainer.hpp"

template<typename T>
class Queue : public LinearContainer<T> {
public:
    void push(T elem) {
        return LinearContainer<T>::push_back(elem);
    }

    T pop() {
        return LinearContainer<T>::pop_front();
    }
};

#endif