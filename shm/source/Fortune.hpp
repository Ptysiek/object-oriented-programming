#pragma once
#include <algorithm>
#include <random>
#include <vector>

class Fortune {
	static std::random_device _randomDevice;
	static std::mt19937 _randomEngine;
	
public:
	static int getNumber(int first, int last);
	static std::vector<int> getNumbersEvenlyDistributed(int first, int last, const int n);
	static void shuffle(std::vector<int>& vector);
};