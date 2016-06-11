// Errorhandeling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<array>
#include<regex>
#include<random>
#include<stdexcept>
#include "std_lib_facilities.h"

int area(int length, int width)  // calculate area of a rectangle
	{
		return length*width;
};
constexpr int frame_with = 2;
int framed_area(int x, int y) // calculate area within frame
{
	return area(x- frame_with, y- frame_with);
};

void print_bad_input(string error_string){
	cout << error_string << endl;
	error(error_string);
};

	int main()
	{
		int x = -1;
		int y = 2;
		int z = 4;
		// . . .
		if (x <= 0 || y <= 0) {
			print_bad_input("X||Y smaller than 0 ");
		};
		int area1 = area(x, y);
		int area2 = framed_area(1, z);
		int area3 = framed_area(y, z);
		double ratio = double(area1) / area3; // convert to double to get
                                              // floating-point division
		cout << ratio << " |Ratio" << endl;
		return 0;
	}

