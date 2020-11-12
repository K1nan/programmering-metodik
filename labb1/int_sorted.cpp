#include <algorithm>
#include <random>
#include <cstddef>

#include "int_sorted.h"

int_sorted::int_sorted(const int* source, size_t size)
{
	size = buffer.size();
	//source = buffer.begin();
	//std::sort(source, source + size);
}

size_t int_sorted::size() const
{
	return buffer.size();
}

int* int_sorted::insert(int value)
{
	int_buffer _buffer();

	
	return nullptr;
}

const int* int_sorted::begin() const
{
	return buffer.begin();
}

const int* int_sorted::end() const
{
	return buffer.end();
}

int_sorted int_sorted::merge(const int_sorted& merge_with) const
{
	int_sorted r(nullptr, 0);
	int_buffer _buffer(size() + merge_with.size());//all numbers for both that we are merging with

	int* firstBuffer = _buffer.begin();//first number from merged 
	const int* firstBegin = begin();//first number from 1
	const int* firstMergeWith = merge_with.begin();//fisrt number from 2
	//1 2 5 
	//4 3 7
	
	for(; firstBegin != end() && firstMergeWith != merge_with.end(); firstBuffer++) {
		if (*firstBegin == *end()) {
			//return std::copy(*firstMergeWith, *merge_with.end(), *firstBuffer);
			r(firstMergeWith, firstBuffer);
			return r;
		}
		if (*firstBegin < *firstMergeWith) {
			 *firstBuffer = *firstBegin ;
			 ++firstBegin;
		}
		else {
			 *firstBuffer = *firstMergeWith;
			 ++firstMergeWith;
		}
	}
	r.buffer = std::copy(firstBegin, end(), firstBuffer);
	return r;
}

int_sorted int_sorted::sort(const int* begin, const int* end)
{
	if (begin == end) {
		return int_sorted(nullptr, 0);
	}
	if (begin == end - 1) {
		return int_sorted(begin, 1);
	}
	//ptrdiff_t 
	std::ptrdiff_t half = (end - begin) / 2; //pointer diff type
	const int* mid = begin + half;
	return sort(begin, mid).merge(sort(mid, end));
}
