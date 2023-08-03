#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

void fillContainers(char **input, std::vector<int>& vec);
void printVector(std::vector<int> const& vector, const std::string& type);
void mergeSort(std::vector<int>& vector, int left, int right, int threshold) ;
