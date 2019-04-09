#include "MirrorString.cpp"
#include "PrintRecord.cpp"
#include "PrintRecords.cpp"
#include "VectorExample1.cpp"
#include "VectorExample2.cpp"

using namespace samples;

int main()
{
	// 1. Mirror String
	MirrorStringExample();

	// 2. StringStream
	PrintRecordExample();

	// 3. File I/O
	ManageRecordsExample();

	// 4. Vector(Header/Cpp)
	VectorExample1();

	// 5. Vector with Member Functions
	VectorExample2();

	return 0;
}