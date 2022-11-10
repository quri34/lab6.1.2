#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab6.1.2\lab6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[2] = { 3, 5 };
			int C = Count(A, 2, 0);
			Assert::AreEqual(2, C);
		}
	};
}
