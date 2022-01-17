#pragma once
#include <iostream>
struct Point
{
	int x;
	int y;

	void Print()
	{
		std::cout << x <<"; "<< y << std::endl;
	}
};

struct ListofPoints
{
	const int RESIZE = 5;
	int size=10;
	int currentSize=0;
	Point* arr = new Point[size];

	void addPoint(const Point& point)
	{
		if (currentSize>=size)
			resize();		
		arr[currentSize] = point;
		currentSize++;
	}

	void resize()
	{
		int totalSize = RESIZE + size;
		Point* arrTemp = new Point[totalSize];
		for (size_t i = 0; i < size; i++)
		{
			arrTemp[i] = arr[i];
		}
		Free();
		size = totalSize;
		arr = arrTemp;
		arrTemp = nullptr;
	}

	void clear()
	{
		Free();
		currentSize = 0;
		size = 0;
	}

	void pop()
	{
		int LastElement = currentSize - 1;
		arr[LastElement].x = arr[LastElement].y = 0;
		currentSize--;
	}
	
	void Free()
	{
		delete[] arr;
		arr = nullptr;
	}
	

	void Print()
	{
		for (unsigned i = 0; i < currentSize; i++)
		{
			arr[i].Print();
		}
	}
};
