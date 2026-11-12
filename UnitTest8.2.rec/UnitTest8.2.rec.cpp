
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern int Count(const char* str, int i);

namespace Lab81RecursiveTests
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(Test1)
        {
            Assert::AreEqual(3, Count("aabbcc", 0));
        }

        TEST_METHOD(Test2)
        {
            Assert::AreEqual(0, Count("abc", 0));
        }

        TEST_METHOD(Test3)
        {
            Assert::AreEqual(2, Count("aaxbb", 0));
        }

        TEST_METHOD(Test4)
        {
            Assert::AreEqual(1, Count("abccab", 0));
        }
    };
}
