#pragma once
/*��� ������� ������� ������� �������� � ������������ �����(*.h).�� �� ��������� � � ��������
�������.���� ��� ������� ������(� ���������� ������,
	� ���������� ��� �������) ������������� �������� �
	����� ������������ �����.*/
#include<iostream>

using namespace std;

template<class T > ///////��� template<typename T > ������ ����
class Array
{
	T* mas = nullptr;   /////  Point* mas,  Person* mas, int* mas ......
	int size;/////������� �������� � ����� � �������

	///////int capacity;/////  �������� ����� ����� ������
public:
	/*   ��  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	* 
	* 
	* �� ������Ӫ���� ������ string  , char* ������  ��� ��� ������� ���� My_string
	copy constructor
	move constructor
	operator = (copy)
	operator = (move)

	operator >>
	operator <<

	AddLast 
	DellLast
	Add(index)
	Dell(index)
		
	*/

	Array();
	void Output()const;
	~Array();
	T& operator[](int index);
	int GetSize()const/////  inline
	{
		return size;
	}
	const T* GetPtr()const  ///   
	{
		return mas;
	}
	void SetSize(int s)
	{
		if (s > size)
		{
			T* temp = new T[s]{};
			for (int i = 0; i < size; i++)
				temp[i] = mas[i];
			size = s;
			delete[] mas;
			mas = temp;
		}
		else
		{
			T* temp = new T[s]{};
			for (int i = 0; i < s; i++)
				temp[i] = mas[i];
			size = s;
			delete[] mas;
			mas = temp;
		}
	}
	void SetPtr(T* ptr,int size)///move
	{
		delete[] mas;
		mas = ptr;
		ptr = nullptr;
		this->size = size;


	}
};
template<class T>Array<T>::Array()
{
	size = 10;
	mas = new T[10];          //////                    mas = new Student[10];    =>   ������ ���� ����������� �� ���������


	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 100 * 1.2;
	}
}
template<class T>void Array<T>::Output()const
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << "\t";  //// int  cout<<int  ////    Product    cout<<Product   ����� ����������� �������� ������  ��� Product    ������ ������ ����������
	}
	cout << endl << endl;
}
template<class T>Array<T>::~Array()
{
	if (mas != nullptr)
	{
		delete[] mas;
	}
}

template<class T>
inline T& Array<T>::operator[](int index)
{
	return mas[index];
}
