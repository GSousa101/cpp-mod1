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
daniel e vitin

void copyRemaining(std::vector<int>& vector, const std::vector<int>& arr, int startIndex, int endIndex) {
  // Copy any remaining elements from the subarray
  while (startIndex < endIndex)
    vector[startIndex++] = arr[startIndex];
}

void mergeElements(std::vector<int>& vector, const std::vector<int>& leftArr, const std::vector<int>& rightArr, int leftSize, int rightSize) {
  int i = 0; // Index for the left subarray
  int j = 0; // Index for the right subarray
  int k = 0; // Index for the merged array

  // Compare and merge elements from the subarrays
  while (i < leftSize && j < rightSize) {
    if (leftArr[i] <= rightArr[j]) {
      vector[k] = leftArr[i];
      ++i;
    } else {
      vector[k] = rightArr[j];
      ++j;
    }
    ++k;
  }

  // Call the copyRemaining function for both subarrays if needed
  copyRemaining(vector, leftArr, k, leftSize);
  copyRemaining(vector, rightArr, k, rightSize);
}

void merge(std::vector<int>& vector, int left, int middle, int right) {
  // Calculate the sizes of the subarrays
  int leftSize = middle - left + 1;
  int rightSize = right - middle;

  // Create temporary arrays for the left and right subarrays
  std::vector<int> leftArr(leftSize);
  std::vector<int> rightArr(rightSize);

  // Copy data from the main array to the temporary subarrays
  std::copy(vector.begin() + left, vector.begin() + middle + 1, leftArr.begin());
  std::copy(vector.begin() + middle + 1, vector.begin() + right + 1, rightArr.begin());

  // Merge the two subarrays back into the main array
  mergeElements(vector, leftArr, rightArr, leftSize, rightSize);
}
