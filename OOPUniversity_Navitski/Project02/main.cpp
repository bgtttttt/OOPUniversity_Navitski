#include "Stack.h";
#include "Queue.h"

int main() {
	Queue queue;
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);
	queue.enqueue(6);
	while (!queue.isEmpty()) {
		cout << queue.dequeue() << " ";
	}
	cout << "\n";
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	while (!stack.isEmpty()) {
		cout << stack.pop() << " ";
	}
}