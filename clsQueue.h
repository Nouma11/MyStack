#pragma once
#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
template<class T>
class clsQueue
{
protected:
	clsDblLinkedList<T> _MyList;

public:
	
	void Print() {
		_MyList.PrintList();
	}

	

	void Push(T Value) {
		_MyList.InsertAtEnd(Value);

	}
	T Front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(Size() -1);
	}
	T Size() {
		return _MyList.Size();
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}
	void Pop() {
		_MyList.DeleteFirstNode();
	}

	T GetItem(T Index) {
		return _MyList.GetItem(Index);
	}
	
	void Reverse() {
		_MyList.Reverse();
	}

	void UpdateItem(T Index, T Value) {
	 _MyList.UpdateItem(Index, Value);
	}

	void InsertAfter(T Index ,T Value) {
		_MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value) {
		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value) {
		_MyList.InsertAtEnd(Value);
	}

	void Clear() {
		_MyList.Clear();
	}
};

