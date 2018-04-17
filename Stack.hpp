
#ifndef STACK_HPP
#define STACK_HPP

#include "LinearContainer.hpp"

template<typename T>
class Stack : public LinearContainer<T> {
public:
    void push(T elem) {
        return LinearContainer<T>::push_front(elem);
    }

    T pop() {
        return LinearContainer<T>::pop_front();
    }
};

#endif