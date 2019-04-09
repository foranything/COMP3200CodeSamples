#include "AddIntegers.cpp"
#include "HelloPope.cpp"
#include "HiPope.cpp"
#include "PrintEverything.cpp"
#include "PrintMenu.cpp"
#include "ReverseInputString.cpp"
#include "Swap.cpp"

using namespace samples;

int main()
{
	// 1. Namespace Example
	hello::SayHelloExample();
	hi::SayHelloExample();

	// 2. Print Everything
	PrintEverythingExample();
	
	// 3. Manipulators
	PrintMenuExample();

	// 4. Summing Integers
	AddIntegersExample();

	// 5. Discarding & Interactive Input
	ReverseInputStringExample();

	// 6. Reference
	SwapExample();

	return 0;
}