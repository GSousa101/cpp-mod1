#include "PmergeMe.hpp"




void loadContainers(char **input)
{
    for(size_t i = 1; input[i]; i++)
    {
        // Change for find valid chars
        for(int j = 0; input[i][j]; j++)
        {
            if(!isdigit(input[i][j]))
                throw InputError();
        }
        int nb = atoi(input[i]);
        if (nb < 0)
            throw InputError();
        vec.push_back(nb);
        deq.push_back(nb);
    }
}

void printVector(std::vector<int> const& vector, const std::string& type)
{
  std::cout << (type == "before" ? "Before: " : "After: ");
  for (std::vector<int>::const_iterator it = vector.begin();
        it < vector.end();
        it++)
    std::cout << *it << " ";
  std::cout << std::endl;
}

void mergeSort(std::vector<int>& vector, int left, int right, int threshold) {
  if (right - left > threshold)
  {
    int middle = (left + right) / 2;
    mergeSort(vector, left, middle, threshold);
    mergeSort(vector, middle + 1, right, threshold);
    merge(vector, left, middle, right);
  }
  else {
    insertionSort(vector, left, right);
  }
}

void insertionSort(std::vector<int>& vector, int left, int right) {
  for (int currentIndex = left; currentIndex <= right; ++currentIndex)
  {
    int currentValue = vector[currentIndex];
    int comparisonIndex = currentIndex;

    while (comparisonIndex > left
            && vector[comparisonIndex - 1] > currentValue)
    {
      vector[comparisonIndex] = vector[comparisonIndex - 1];
      --comparisonIndex;
    }

    vector[comparisonIndex] = currentValue;
  }
}
