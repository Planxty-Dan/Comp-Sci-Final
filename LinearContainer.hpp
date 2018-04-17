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

	virtual void push(T element) = 0;

	virtual T pop() = 0;

	virtual ~LinearContainer();

	bool is_empty() {
		return current_size == 0;
	}

  	bool is_full() {
  		return current_size == max_size;
  	}

protected:

	void push_back(T element) {
		int new_size = current_size + 1;
		T *tempArray = new T[new_size];
		tempArray[0] = element;
		for(int i = 1; i < current_size - 1; i++) {
			tempArray[i] = container[(i - 1)];
		}
		container = tempArray;
		current_size++;
	}

	void push_front(T element) {
		current_size++;
		container[current_size - 1] = element;
	}

	T pop_front() {
		T front_element = get_front();
		current_size--;
		return front_element;
	}

	void print_container() {
		std::cout << "Printing container of " << current_size << " size." << std::endl;
		for (int i = 0; i < current_size -1; i++) {
			std::cout << "Index " << i << ": " << container[i] << std::endl;
		}
	}

private:
	int max_size;
	int current_size;
	T *container;

	T get_front() {
		return container[current_size];
	}
};

#endif