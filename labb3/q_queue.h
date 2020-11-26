#ifndef PRIOROTE_H
#define PRIOROTE_H

#include <algorithm>
#include <vector>

template<typename T , typename Comp>
class p_queue {
public:
	p_queue();
	T pop(); //Hämta och ta bort det element som har högsta prioritet.
	void push(T e);//Lägg till ett element(med godtycklig prioritet).
	int size() const;//Antal element i kön.
	bool empty() const;//Tom kö.

private:
	std::vector <T>list;
	Comp comp;
};



#endif // !PRIOROTE_H



template<typename T, typename Comp>
inline p_queue<T,Comp>::p_queue()
{
}

template<typename T , typename Comp>
inline T p_queue<T , Comp>::pop()
{
	if (empty()) {
		std::cout << "empty\n";
	}
	T number = list.front();//we used front becouse it return the reference to the first number
	list.erase(list.begin());// begin it return the iterator throught the collection
	return number;
}

template<typename T, typename Comp>
inline void p_queue<T, Comp>::push(T e)
{
	/*std::vector<T> sz = size() + 1;
	sz.push_back(e);
	std::sort(sz.begin(),sz.end, sz);*/
	std::vector<T> sz(size() + 1);
	std::merge(list.begin(), list.end(), &e, &e + 1, sz.begin(), comp);
	list = sz;
}

template<typename T, typename Comp>
inline int p_queue<T , Comp>::size() const
{
	return list.size();
}

template<typename T , typename Comp>
inline bool p_queue<T , Comp>::empty() const
{
	return list.empty();
}
