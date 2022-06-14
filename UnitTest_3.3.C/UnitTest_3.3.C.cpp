#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3.C/LongLong.h"
#include "../Lab_3.3.C/LongLong.cpp"
#include "../Lab_3.3.C/Object.h"
#include "../Lab_3.3.C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(8, 8), B(12, 12);
			Assert::AreEqual(A == B, false);
		}
	};
}
