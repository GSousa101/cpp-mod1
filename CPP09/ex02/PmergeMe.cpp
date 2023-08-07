#include "PmergeMe.hpp"

void fillContainers(char **input, std::vector<int>& vec, std::deque<int>& deq)
{
  for (size_t i = 1; input[i]; i++)
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
    deq.push_back(nb);
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

void insertionSortVector(std::vector<int>& vector, int left, int right) {
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

void mergeSortVector(std::vector<int>& vector, int left, int right, int threshold) {
  int middle = (left + right) / 2;
  if (right - left > threshold)
  {
    mergeSortVector(vector, left, middle, threshold);
    mergeSortVector(vector, middle + 1, right, threshold);
  }
  else
  {
    insertionSortVector(vector, left, right);
  }
  stickVectorTogether(vector, left, middle, right);
}

// Deque part
void insertionSortDeque(std::deque<int>& deque, int left, int right) {
  for (int currentIndex = left; currentIndex <= right; ++currentIndex)
  {
    int currentValue = deque[currentIndex];
    int comparisonIndex = currentIndex;

    while (comparisonIndex > left
            && deque[comparisonIndex - 1] > currentValue)
    {
      deque[comparisonIndex] = deque[comparisonIndex - 1];
      --comparisonIndex;
    }
    deque[comparisonIndex] = currentValue;
  }
}

void sortTwoDeques(std::deque<int>& deque, const std::deque<int>& leftArr, const std::deque<int>& rightArr, int leftSize, int rightSize) {
  int iFirst = 0;
  int iSecond = 0;
  int iTotal = 0;

  while (iFirst < leftSize && iSecond < rightSize) {
    if (leftArr[iFirst] <= rightArr[iSecond])
    {
      deque[iTotal] = leftArr[iFirst];
      ++iFirst;
    }
    else
    {
      deque[iTotal] = rightArr[iSecond];
      ++iSecond;
    }
    ++iTotal;
  }
}

void stickDequeTogether(std::deque<int>& deque, int left, int middle, int right) {
  int               leftSize = middle - left + 1;
  std::deque<int>  leftArr(leftSize);
  std::copy(deque.begin() + left,
            deque.begin() + middle + 1,
            leftArr.begin());

  int               rightSize = right - middle;
  std::deque<int>  rightArr(rightSize);
  std::copy(deque.begin() + middle + 1,
            deque.begin() + right + 1,
            rightArr.begin());

  // Merge the two subarrays back into the main array
  sortTwoDeques(deque, leftArr, rightArr, leftSize, rightSize);
}

void mergeSortDeque(std::deque<int>& deque, int left, int right, int threshold) {
  int middle = (left + right) / 2;
  if (right - left > threshold)
  {
    mergeSortDeque(deque, left, middle, threshold);
    mergeSortDeque(deque, middle + 1, right, threshold);
  }
  else
  {
    insertionSortDeque(deque, left, right);
  }
  stickDequeTogether(deque, left, middle, right);
}