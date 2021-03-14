#include "pch.h"
#include "CppUnitTest.h"
#include "../2.1/Triangle.h"
#include "../2.1/Source.cpp"
#include "../2.1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle a(3, 4);
			Assert::AreEqual(a.Cost(), 5);
		}
	};
}
