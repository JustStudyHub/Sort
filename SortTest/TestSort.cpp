#include "stdafx.h"
#include "CppUnitTest.h"
#include <vector>
#include <../Sort/Sort.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SortTest
{		
	TEST_CLASS(MergeSortTest)
	{
	public:
		
		TEST_METHOD(SortTest)
		{
			std::vector <int> inputVec { 4, 6, 1, 9, 0, 3, 2, 7, 8, 5 };
			std::vector <int> outputVec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

			heapSort(inputVec);

			for (int i = 0; i < inputVec.size(); ++i)
			{
				Assert::AreEqual(inputVec[i], outputVec[i]);
			}
		}

	};

	TEST_CLASS(HeapSortTest)
	{
	public:

		TEST_METHOD(SortTest)
		{
			std::vector <int> inputVec { 4, 6, 1, 9, 0, 3, 2, 7, 8, 5 };
			std::vector <int> outputVec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

			mergeSort(inputVec, inputVec[0], inputVec[inputVec.size()-1]);

			for (int i = 0; i < inputVec.size(); ++i)
			{
				Assert::AreEqual(inputVec[i], outputVec[i]);
			}
		}
	};
}