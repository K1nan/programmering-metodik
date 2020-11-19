#ifndef PRIOROTE_H
#define PRIOROTE_H

#include <vector>

template<typename T>
class p_queue {
public:
	p_queue();
	T pop(); //Hämta och ta bort det element som har högsta prioritet.
	void push(T e);//Lägg till ett element(med godtycklig prioritet).
	int size();//Antal element i kön.
	bool empty();//Tom kö.

private:
	std::vector <T>list;
};



#endif // !PRIOROTE_H



template<typename T>
inline p_queue<T>::p_queue()
{
}

template<typename T>
inline T p_queue<T>::pop()
{
	if (empty()) {
		std::cout << "empty\n";
	}
	T number = list.front();//we used front becouse it return the reference to the first number
	list.erase(list.begin());// begin it return the iterator throught the collection
	return number;
}

template<typename T>
inline void p_queue<T>::push(T e)
{
	std::vector<T> sz = size() + 1;
	sz.push_back(e);
	std::sort(sz.begin(),sz.end, sz);
}

template<typename T>
inline int p_queue<T>::size()
{
	return list.size();
}

template<typename T>
inline bool p_queue<T>::empty()
{
	return list.empty();
}
