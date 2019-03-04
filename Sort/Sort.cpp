#include "pch.h"

void heap(std::vector<int> &v, int i, int n)
{
	int maxIndex = i;
	int childIndex = 0;
	while (true)
	{
		childIndex = 2 * i + 1;
		if (childIndex<n && v[childIndex]>v[maxIndex])
			maxIndex = childIndex;
		childIndex++;
		if (childIndex<n && v[childIndex]>v[maxIndex])
			maxIndex = childIndex;
		if (maxIndex == i)
			break;
		else
		{
			std::swap(v[maxIndex], v[i]);
			i = maxIndex;
		}
	}
}
void heapSort(std::vector<int> &v)
{

	for (int i = v.size() / 2; i >= 0; --i)
	{
		heap(v, i, v.size());
	}
	for (int i = v.size() - 1; i >= 1; --i)
	{
		std::swap(v[0], v[i]);
		heap(v, 0, i);
	}
}
void mergeSort(std::vector <int> &v, int start, int end)
{
	if (end - start < 2)
		return;
	if (end - start == 2)
	{
		if (v[start] > v[start + 1])
			std::swap(v[start], v[start + 1]);
		return;
	}
	mergeSort(v, start, start + (end - start) / 2);
	mergeSort(v, start + (end - start) / 2, end);
	std::vector<int>temp_v;
	int b1 = start;
	int e1 = start + (end - start) / 2;
	int b2 = e1;
	while (temp_v.size() < end - start)
	{
		if (b1 >= e1 || (b2 < end && v[b2] <= v[b1]))
		{
			temp_v.push_back(v[b2]);
			++b2;
		}
		else
		{
			temp_v.push_back(v[b1]);
			++b1;
		}
	}

	for (int i = start; i < end; ++i)
		v[i] = temp_v[i - start];
}

int main()
{	
	return 0;		
}