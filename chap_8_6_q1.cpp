#include<iostream>

const int get_int_input_chap_8_6_q1() {
	int input;
	std::cin >> input;
	return input;
}
const char get_char_input_chap_8_6_q1() {
	char input;
	std::cin >> input;
	return input;
}

const int add_chap_8_6_q1(int a, int b) {
	return a + b;
}
const int subtract_chap_8_6_q1(int a, int b) {
	return a - b;
}
const int multiply_chap_8_6_q1(int a, int b) {
	return a * b;
}
const int divide_chap_8_6_q1(int a, int b) {
	return  a/ b;
}

int calculate_chap_8_6_q1(int a, int b, char op) {
	switch (op) {
	case '+':
		return add_chap_8_6_q1(a, b);
	case '-':
		return subtract_chap_8_6_q1(a, b);
	case '*':
		return multiply_chap_8_6_q1(a, b);
	case '/':
		return divide_chap_8_6_q1(a, b);
	default:
		std::cout << "Invalid operator!" << std::endl;
		return 0;
	}
}


void result_message_chap_8_6_q1() {
	std::cout << "Enter first integer: ";
	int num1 = get_int_input_chap_8_6_q1();
	std::cout << "Enter second integer: ";
	int num2 = get_int_input_chap_8_6_q1();
	std::cout << "Enter operator (+, -, *, /): ";
	char op = get_char_input_chap_8_6_q1();
	int result = calculate_chap_8_6_q1(num1, num2, op);
	std::cout << "Result: " << result << std::endl;
}