#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_3.2\Human.cpp"
#include "..\Lab_12_oop_3.2\Student.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Human h{ "Ivan", 19 };
			Student s(h);
			Assert::AreEqual("unknown", s.getSpec().c_str());
		}
	};
}
