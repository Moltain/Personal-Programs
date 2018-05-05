// Grading.cpp : Defines the entry point for the console application.
//This program has the user input the score of a test as well as the students name and grades all of them on a curve

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>


int main()
{
	const int MAX = 300;
	int n;
	int y;
	int x; // find what the difference between the highest score and 100
	std::vector<std::pair <int, std::string >> vect;

	//Asks for # of tests for loop
	std::cout << "Hello, How many tests do you need to grade?" << std::endl;
	std::cin >> n;
	std::cout << "Please enter a grade then student name and press enter. Repeat until you have reached the number specified in the previous step" << std::endl;
	std::cout << "DO NOT ENTER DECIMALS" << std::endl;

	
	// declare array
	std::string name[MAX];
	int score[MAX];

	
	

	// gets input for names and test scores
	for (int i = 0; i < n; i++)
	{
		std::pair <int, std::string> pair_input;
		std::cin >> pair_input.first >> pair_input.second;
		vect.push_back(pair_input);
		

	}



	// sorts tests
	std::sort(vect.rbegin(), vect.rend()); 


	//add a space for easier reading
	std::cout << " " << std::endl;
	//finds the difference between the highest scores and 0
	x = 100 - vect[0].first;

	for (int i = 0; i < n; i++)
	{
		
		std::cout << vect[i].first + x << " " << vect[i].second << std::endl;
	}
	 
	std::cout << "enter a value then press enter to close";
		std::cin >> y;
    return 0;
}

