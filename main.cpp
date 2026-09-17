#include <iostream>

int main() {
	// & address-of operator
	// * dereference operator

std::string name = "Bro";
int age = 21;

std::string *pName = &name;
int *pAge = &age;

std::cout << *pName << '\n';
std::cout << *pAge << '\n';

return 0;
}
