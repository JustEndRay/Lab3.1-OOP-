#include "pch.h"
#include "CppUnitTest.h"
#include "../Car.h"
#include "../Car.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car a;
			a.SetPower(4);
			int f = a.GetPower();
			Assert::AreEqual(f, 4);
		}
	};
}
