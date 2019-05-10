#ifndef _STACKBYVECTOR_
#define _STACKBYVECTOR_
#include <vector>
#include <stdexcept>

template<typename T>
class Stack
{
private:
	std::vector<T> tonnyStack; //Declaring container
public:

	Stack() {}

	void push(T value)
	{
		tonnyStack.push_back(value); //Adding in the end of the container
	}

	T top()
	{
		return tonnyStack.at(tonnyStack.size() - 1); //Get the element from the last index (Feature of stack)
	}

	void pop()
	{
		tonnyStack.erase(tonnyStack.begin() + tonnyStack.size() - 1); //Erase the last index of container (Feature of stack)
	}

	int size()
	{
		return tonnyStack.size(); //Return size
	}

	bool isEmpty()
	{
		return (tonnyStack.size() == 0); //Check empty
	}
};
#endif