#include "PmergeMe.hpp"

void fillContainers(char **input, std::vector<int>& vec)
{
  for(size_t i = 1; input[i]; i++)
  {
      // Change for find valid chars
      for(int j = 0; input[i][j]; j++)
      {
          if(!isdigit(input[i][j]))
      		throw std::invalid_argument("Invalid argument");
	  }
      int nb = atoi(input[i]);
      if (nb < 0)
      	throw std::invalid_argument("Only positive number allowed");
	  vec.push_back(nb);
      // deq.push_back(nb);
  }
}

void printVector(std::vector<int> const& vector, const std::string& type)
{
  std::cout << (type == "before" ? "Before: " : "After: ");
  for (std::vector<int>::const_iterator it = vector.begin();
        it != vector.end();
        ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
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

void sortTwoVectors(std::vector<int>& vector, const std::vector<int>& leftArr, const std::vector<int>& rightArr, int leftSize, int rightSize) {
  int iFirst = 0;
  int iSecond = 0;
  int iTotal = 0;

  while (iFirst < leftSize && iSecond < rightSize) {
    if (leftArr[iFirst] <= rightArr[iSecond])
    {
      vector[iTotal] = leftArr[iFirst];
      ++iFirst;
    }
    else
    {
      vector[iTotal] = rightArr[iSecond];
      ++iSecond;
    }
    ++iTotal;
  }
}

void stickVectorTogether(std::vector<int>& vector, int left, int middle, int right) {
  int               leftSize = middle - left + 1;
  std::vector<int>  leftArr(leftSize);
  std::copy(vector.begin() + left,
            vector.begin() + middle + 1,
            leftArr.begin());

  int               rightSize = right - middle;
  std::vector<int>  rightArr(rightSize);
  std::copy(vector.begin() + middle + 1,
            vector.begin() + right + 1,
            rightArr.begin());

  // Merge the two subarrays back into the main array
  sortTwoVectors(vector, leftArr, rightArr, leftSize, rightSize);
}

void mergeSort(std::vector<int>& vector, int left, int right, int threshold) {
  int middle = (left + right) / 2;
  if (right - left > threshold)
  {
    mergeSort(vector, left, middle, threshold);
    mergeSort(vector, middle + 1, right, threshold);
  }
  else
  {
    insertionSort(vector, left, right);
  }
  stickVectorTogether(vector, left, middle, right);
}
