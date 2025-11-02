#pragma once

#ifndef _Myclass_123_ 
#define _Myclass_123_

#include <iostream>
using namespace std;


/*
* односвязный список
* реализация
*/


template<typename T>
class List
{
public:
	List();
	~List();

	//удаление первого элемента в списке
	void pop_front();

	//добавление элемента в конец списка
	void push_back(T data);

	// очистить список
	void clear();

	// получить количество елементов в списке
	int GetSize() { return Size; }

	// перегруженный оператор [] 
	T& operator[](const int index);

	//добавление элемента в начало списка
	void push_front(T data);

	//добавление элемента в список по указанному индексу
	void insert(T data, int index);

	//удаление элемента в списке по указанному индексу
	void removeAt(int index);

	//удаление последнего элемента в списке
	void pop_back();

private:

	template<typename T>
	class Node //Клас Node (узел) содержит данные и идрес узла
	{
	public:
		Node* pNext; // указатель на тип нод который указывает адрес в памяти следующего елемента
		T data;  // данные с которыми содержат тип нод, поле обобщённого типа

		Node(T data = T(), Node* pNext = nullptr)// T() параметр по умолчанию (вслучае указания класса присвоится конструктор либо его значение по умолчаию, в случае присвоения простого типа данных будет работа с ним), nullptr- параметр по умолчанию который нужен для последнего элемента в списке
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;// указатель количества елементов в списке
	Node<T>* head;// Указатель типа Node 
};


template<typename T>
List<T>::List()
{
	Size = 0; // количество элементов 0
	head = nullptr;// указатель на следующий элемент динамически выделяемой памяти
}


template<typename T>
List<T>::~List()
{
	clear();
}


template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;

	head = head->pNext;

	delete temp;

	Size--;

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)// проверка выделялась ли память динамически под первый элемент односвязного списка
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);

	}

	Size++;
}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}


template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;// счётчик  

	Node<T>* current = this->head;

	while (current != nullptr)// пока current не указывает на nullptr
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{

	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		/*
		Node<T>* newNode = new Node<T>(data, previous->pNext);

		previous->pNext = newNode;
		*/
		previous->pNext = new Node<T>(data, previous->pNext);//сокращенній код
		Size++;
	}
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}


		Node<T>* toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	}

}

template<typename T>
void List<T>::pop_back()
{
	removeAt(Size - 1);
}


#endif 