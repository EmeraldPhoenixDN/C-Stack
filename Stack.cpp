#include <iostream>

//Stack variables: stack, stack_size, top_value_value
int stack[100], stack_size = 100, top_value_value = -1;

//stack push
void push(int val) {
	if (top_value >= stack_size - 1)
		std::cout << "Stack Overflow" << endl;
	else {
		top_value++;
		stack[top_value] = val;
	}
}

//stack pop
void pop() {
	if (top_value <= -1)
		std::cout << "Stack Underflow" << endl;
	else {
		std::cout << "The popped element is " << stack[top_value] << endl;
		top_value--;
	}
}

//values` console output
void display() {
	if (top_value >= 0) {
		std::cout << "Stack values are ";
		for (int i = top_value; i >= 0; i--)
			std::cout << stack[i] << " ";
		    std::cout << endl;
	}
	else
		std::cout << "Stack is empty!";
}


int main() {
	int choice, val;
	/*
	You can choose any action with description
	*/
	std::cout << "1) Push in stack" << endl;
	std::cout << "2) Pop from stack" << endl;
	std::cout << "3) Display stack" << endl;
	std::cout << "4) Exit" << endl;
	//do-while cycle with action choice
	do {
		cout << "Enter choice: " << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			std::cout << "Enter value to be pushed:" << endl;
			std::cin >> val;
			std::push(val);
			break;
		}
		case 2: {
			pop();
			break;
		}
		case 3: {
			display();
			break;
		}
		case 4: {
			std::cout << "Exit" << endl;
			break;
		}
		default: {
			std::cout << "Invalid Choice" << endl;
		}
		}
	} while (choice != 4);
	return 0;
}