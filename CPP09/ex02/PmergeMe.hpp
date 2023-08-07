#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <cstdlib>

void fillContainers(char **input, std::vector<int>& vec, std::deque<int>& deq);
void printVector(std::vector<int> const& vector, const std::string& type);
void mergeSortVector(std::vector<int>& vector, int left, int right, int threshold);
void mergeSortDeque(std::deque<int>& deque, int left, int right, int threshold);
