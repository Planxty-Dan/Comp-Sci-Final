#ifndef LINEARCONTAINER_HPP
#define LINEARCONTAINER_HPP

#include<iostream>

template<typename T>
class LinearContainer {
public:
	 explicit LinearContainer(int init_max_size = 10) {
	 	max_size = init_max_size; 
	 	current_size = 0;
	 	container = new T[init_max_size];
	 }

	void push(T element) {
		push_back(element);
		current_size++;
	}

	T pop() {
		T front_element = *get_front();
		pop_front();
		return front_element;
	}

	bool is_empty() {
		return current_size == 0;
	}

  	bool is_full() {
  		return current_size == max_size;
  	}

protected:

	void push_back(T element) {

	}

	T get_front() {

	}

	T get_back() {

	}

	void pop_front() {

	}

	void pop_back() {

	}

private:
	int max_size;
	int current_size;
	T *container;
};