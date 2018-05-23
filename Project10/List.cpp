#include"List.h"

template<typename T>
void List<T>::pushBack(T data)
{
	if (count == 0) {
		this->firstPtr = new Node(data);
		this->lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename T>
void List<T>::pushFront(T data)
{
	if (count == 0) {
		this->firstPtr = new Node(data);
		this->lastPtr = firstPtr;
	}
	else
	{
		Node *tmpPtr = firstPtr;
		firstPtr=new Node(data);
		firstPtr->nextPtr = tmpPtr;
	}
	count++;
}

template<typename T>
size_t List<T>::size()
{
	return count;
}

template<typename T>
void List<T>::print()
{
	Node *curPtr = firstPtr;
	cout << curPtr->data << endl;

	while (curPtr!= lastPtr) {
		curPtr=curPtr->nextPtr;
		cout << curPtr->data << endl;
	} 
	
}

template<typename T>
void List<T>::delFirst()
{
	if (count == 0) {
		delete firstPtr;
	}
	else
	{
		Node *curPtr;
		curPtr = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = curPtr;
	}
	count--;
}

template<typename T>
void List<T>::delLast()
{
	if (count == 0) {
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else
	{
		Node *curPtr=firstPtr;
		while (curPtr->nextPtr!= lastPtr)
		{
			curPtr = curPtr->nextPtr;
		}		
		delete lastPtr;
		lastPtr = curPtr;
		curPtr->nextPtr =nullptr;
	}	
	count--;
}

template<typename T>
bool List<T>::Find(T n)
{
		Node *curPtr = firstPtr;
		while (curPtr != lastPtr)
		{
			if (curPtr->data == n)
			{
				return 1;
			}
			curPtr = curPtr->nextPtr;			
		}
		return 0;
}

template<typename T>
T & List<T>::operator[](int index)
{	
	Node *curPtr = firstPtr;
	int tmp[10];
	int count = 0;
	tmp[count] = curPtr->data;
	while (curPtr != lastPtr)
	{
		curPtr = curPtr->nextPtr;
		count++;
		tmp[count]= curPtr->data;
		if (count == index)
			return tmp[count];
	}
}

template<typename T>
List<T>::~List()
{
	Node *curPtr;	
	while (firstPtr!= nullptr) {
		curPtr =firstPtr->nextPtr;		
		delete firstPtr;
		firstPtr = curPtr;
	}
	delete firstPtr;
}