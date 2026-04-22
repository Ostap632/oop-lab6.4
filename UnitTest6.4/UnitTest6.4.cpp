#include "pch.h"
#include "CppUnitTest.h"
#include "../main6.4.cpp"
#include <iostream>
#include <string>
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
        TEST_METHOD(TestHasAdjacentDuplicates)
        {
            int arrTrue[] = { 1, 5, 5, 8 };
            int arrFalse[] = { 1, 2, 3, 4 };
            double arrDouble[] = { 1.1, 1.1 };
            string arrString[] = { "a", "b", "b" };

            assert(hasAdjacentDuplicates(arrTrue, 4) == true);
            assert(hasAdjacentDuplicates(arrFalse, 4) == false);
            assert(hasAdjacentDuplicates(arrDouble, 2) == true);
            assert(hasAdjacentDuplicates(arrString, 3) == true);

            int single[] = { 10 };
            assert(hasAdjacentDuplicates(single, 1) == false);
        }
	};
}