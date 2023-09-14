#include "example.h"

example::example()
{
	cout << "Constructor ex"<<endl;
}

example::~example()
{
	cout<< "Destructor ex" << endl;
}
example::example(const example& ex)
{
	cout << "Constructor copy ex" << endl;
}