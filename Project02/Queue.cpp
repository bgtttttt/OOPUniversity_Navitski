#include "Queue.h"

int Queue::getSize() {
	return size;
};
bool Queue::isEmpty() {
	return size == 0;
};
void Queue::enqueue(int element) {
	if (isEmpty()) {
		queue = new int[1];
		queue[0] = element;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = queue[i];
		}
		temp[size] = element;
		delete[] queue;
		queue = temp;
	}
	size++;
};
int Queue::dequeue() {
	if (!isEmpty()) {
		int* temp = new int[size - 1];

		int element = queue[0];
		for (int i = 0; i < size-1; i++) {
			temp[i] = queue[i+1];
		}
		size--;
		delete[] queue;
		queue = temp;
		return element;
	}
	return 0;
};
int Queue::peek() {
	if (!isEmpty()) {
		return queue[0];
	}

	return 0;
};
string Queue::getInfo() {
	string s = "Queue: ";
	for (int i = size - 1; i >= 0; i++) {
		s += to_string(queue[i]) + " ";
	}
	return s;
};
