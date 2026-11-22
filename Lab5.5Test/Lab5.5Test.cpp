#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab55Test
{
	TEST_CLASS(Lab55Test)
	{
	public:

		TEST_METHOD(TestBinomialGeneralCase)
		{
			int n = 5;
			int k = 2;
			int level = 1;
			int depth = 0;
			int expectedValue = 10;
			int expectedDepth = 5;

			int actualValue = C(n, k, level, depth);

			Assert::AreEqual(expectedValue, actualValue);
			Assert::AreEqual(expectedDepth, depth);
		}

		TEST_METHOD(TestBinomialBaseCase)
		{
			int n = 4;
			int k = 0;
			int level = 1;
			int depth = 0;
			int expectedValue = 1;
			int expectedDepth = 1;

			int actualValue = C(n, k, level, depth);

			Assert::AreEqual(expectedValue, actualValue);
			Assert::AreEqual(expectedDepth, depth);
		}
	};
}