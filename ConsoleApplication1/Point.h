#pragma once
#include <iostream>
using namespace std;

class Point     /////// �� ������� ��� ,���� ���� � ���������������� ������ int x;	int y; �� public �����������
{
private:
	int x;
	int y;
public:
	Point(); // construct by default
	Point(int x1, int y1); // Construct by 2 param
	Point(const Point& pnt); // Construct by 2 param

	void Init(int x1, int y1);///���������� ������ Init
	void Output() const;
	void Sum(const Point& p); //////���� �������� const Point pnt1;  a ���� ��������  Point pnt2;


	void SetX(int xx);// ������
	int GetX() const;//������
	void SetY(int yy);// ������
	int GetY() const;//������

};