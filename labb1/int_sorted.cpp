#include <algorithm>
#include <random>
#include <cstddef>

#include "int_sorted.h"

int_sorted::int_sorted(const int* source, size_t size): buffer(source,size)
{
	if (size == 0) {
		return;
	}
	else if (size == 1) {
		return;
	}
	//size = buffer.size();
	//source = buffer.begin();
	int_sorted s = sort(begin(),end());
	buffer = std::move(s.buffer);
}

size_t int_sorted::size() const
{
	return buffer.size();
}

int* int_sorted::insert(int value)
{
	/*int_buffer _buffer(size() +1);
	const int* sorted = begin();
	int* first = _buffer.begin();
	for (; sorted != end(); sorted++) {
		if (*sorted > value) {
			*first = value;
			break;
		}
		first++;
	}
	sorted = begin();
	for (auto it = _buffer.begin(); sorted != end(); sorted++) {
		if (it == first) {
			it++;
		}
		else {
			*it = *sorted;
		}
		it++;
	}
	buffer = std::move(_buffer);*/
	
	int_sorted _sort(&value,1);
	//std::cout << _sort.size();
	//std::cout << *_sort.begin();
	int_sorted s = merge(_sort);
	buffer = std::move(s.buffer);
	int* first = buffer.begin();
	for (; first != buffer.end(); first++) {
		if (*first == value) {
			return first;
		}
	}
	return first;
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
	
	int_buffer _buffer(size() + merge_with.size());//all numbers for both that we are merging with
	int* firstBuffer = _buffer.begin();//first number from merged 
	const int* firstBegin = begin();//first number from 1
	const int* firstMergeWith = merge_with.begin();//fisrt number from 2
	//1 2 5 
	//4 3 7
	
	for(; firstBegin != end() && firstMergeWith != merge_with.end(); firstBuffer++) {
		
		if (*firstBegin < *firstMergeWith) {
			 *firstBuffer = *firstBegin ;
			 ++firstBegin;
		}
		else {
			 *firstBuffer = *firstMergeWith;
			 ++firstMergeWith;
		}
	}
	if (firstBegin != end()) {
		std::copy(firstBegin, end(), firstBuffer);
	}
	else if (firstMergeWith != merge_with.end()){
		std::copy(firstMergeWith, merge_with.end(), firstBuffer);
	}
	int_sorted r(nullptr, 0);
	
	r.buffer = std::move(_buffer);
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
