#include "int_buffer.h"

#include <algorithm>

//defult constructor
int_buffer::int_buffer(size_t size)
{
	_size = size;
	_pointer = new int[size];
}

int_buffer::int_buffer(const int* source, size_t size)
{
	_size = size;
	_pointer = new int[size];
	std::copy(source, source + size, _pointer);

}
//copy constructor
int_buffer::int_buffer(const int_buffer& rhs)
{
	_size = rhs._size;
	_pointer = new int [rhs.size()];
	std::copy(rhs._pointer , rhs._pointer + rhs._size, _pointer);
}
//move constructor
int_buffer::int_buffer(int_buffer&& rhs)
{
	_size = rhs._size;
	_pointer = rhs._pointer;
	rhs._size = 0;
	rhs._pointer = nullptr; //change in the destrctor and empty it 
}

int_buffer& int_buffer::operator=(const int_buffer& rhs)
{
	int_buffer tmp(rhs);
	std::swap(_size, tmp._size);
	std::swap(_pointer, tmp._pointer);
	return *this;
}

int_buffer& int_buffer::operator=(int_buffer&& rhs)
{
	/*if (this == &rhs) {
		return *this;
	}
	delete[] _pointer;
	_pointer = rhs._pointer;
	_size = rhs._size;
	rhs._pointer = nullptr;
	rhs._size = 0;*/
	std::swap(_size, rhs._size);
	std::swap(_pointer, rhs._pointer);
	/*_pointer = std::move(rhs._pointer);
	_size = std::move(rhs._size);
	rhs._pointer = nullptr;
	rhs._size = 0;*/
	return *this;
}
//overloading [] operator
int& int_buffer::operator[](size_t index)
{
	return _pointer[index];
}

const int& int_buffer::operator[](size_t index) const
{
	return _pointer[index];
}

size_t int_buffer::size() const
{
	return _size;
}

int* int_buffer::begin()
{
	return _pointer;
}

int* int_buffer::end()
{
	return _pointer + _size;
}

const int* int_buffer::begin() const
{
	return _pointer;
}

const int* int_buffer::end() const
{
	return _pointer + _size;
}

int_buffer::~int_buffer()
{
	delete[] _pointer;
}
