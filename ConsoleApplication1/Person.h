//#pragma once
//
//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	char* fname;
//	char* phone;
//	int age;
//	char* mf;
//
//public:
//	Person();
//	Person(int ag, const char* m_f, const char* nm, const char* fn, const char* phn);
//	Person(const Person& prs);
//
//	~Person();
//
//
//	void Output()const;
//	void SetName(const char* nm);
//
//
//
//};



#include<iostream>
#include<time.h>
using namespace std;

class Point
{
private:
	int x;/////���� ����������� ��� ������� �������
	int y;
	int z;
	static int count;////�������� ����, ����� � ������� ��� ��� ���������� �����, �������� �����

public:

	Point()
	{
		cout << "Construct ()  \n";
		x = y = 0;
		count++;
	}





	/*
	Point(int x1)
	{

		x = x1;
		y = x;
		count++;
	}
	Point(int x1, int y1) :Point(x1)
	{

		y = y1;
		count++;
	}
	Point(int x1, int y1, int z1):Point(x1,y1)
	{

		z = z1;
		count++;
	}*/
	void Output()
	{
		cout << "X: " << x << "\tY: " << y << endl;
		cout << "Count: " << count << endl;
	}

	//////  ������ ���������

	int GetX()const  // ����������
	{

		return x;
	}

	int GetY()const
	{
		return y;
	}



	/////  ������������ 
	void SetX(int X)
	{
		// X <100
		if (X > 100)
		{
			cout << "Error\n";
			x = 0;
		}
		else
		{
			x = X;
		}
	}
	void SetY(int y)
	{

		y = y;////��� �� ����������� ���� �� ���������

		this->y = y;
	}



	static int  GetCount()
	{
		///cout << x;   ��� �� �� ������ ������  this ������� ������ �� ������ ���������� �� ������������ ������ � ����
		/////x = 5;
		///Output();
		return count;
	}
};


int Point::count = 0;//// ����������� ���������� ����




/*
��������� �������������:
���_������ ( ��������� (����������) ) : ���_������ ( ���������� �������� ���������� )
{
����;
};

*/

void Show(Point obj)///��������  ��ﳳ
{
	obj.Output();
}


Point CreateObj()
{
	Point obj;
	return obj;
}/////�� ��������� ������ ������� obj ����������, � ���� ���� ����������� � coller
void main()
{

	Point obj1;
	Point obj2(obj1);




	///////������������ ���������

	///1. ����������� ������ ������� �����
	//Point obj2(obj1);   ////Point( const Point& pnt) ������� ����������� ���.����� �� ���� �� �������������
	////////������������� ��������� �� ������������� ������ ������� ���� �������


	///2. ���� �������� ������ � ������� �� ���������(�� ��ﳺ�)

	Show(obj1);//////���������� �������� ����� Point obj(obj1), � ����� ������� ����������� ���

	////3. ���������� ��ﳳ ������� � �������

	obj1 = CreateObj();


}