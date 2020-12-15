#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			double i = 1;
				t = S0(i);
			Assert::AreEqual(t, 1, 4.75937);
		}
	};
}
