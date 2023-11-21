#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba_13_1/var.h"
#include "../Laba_13_1/sum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			nsVar::x_p = 0;
			nsVar::x_k = 2;
			nsVar::dx = 1;
			nsVar::e = 0.0001;

			nsSum::sum();
			Assert::AreEqual(5.24045, nsVar::s, 0.0001);
		};
	};
};
