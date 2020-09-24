#include <iostream>

using namespace std;

bool isSorted(int array[], int numItems) {
  if (numItems == 1 | numItems == 0) return true;

  for (int i = 0; i < numItems - 1; i++) {
    if (array[i] > array[i+1]) {
      return false;
    }
  }
  return true;
}

int main(int argc, char** argv) {
  // Question 1
  const int TEST_ARRAY_1_SIZE = 7;
  int testArray1[TEST_ARRAY_1_SIZE] = {4, 2, 4, 5, 6, 7, 8};
  cout << "isSorted returned " << isSorted(testArray1, TEST_ARRAY_1_SIZE) << "\n";

  const int TEST_ARRAY_2_SIZE = 7;
  int testArray2[TEST_ARRAY_2_SIZE] = {1, 2, 4, 5, 6, 7, 8};
  cout << "isSorted returned " << isSorted(testArray2, TEST_ARRAY_2_SIZE) << "\n";

  const int TEST_ARRAY_3_SIZE = 1;
  int testArray3[TEST_ARRAY_3_SIZE] = {8};
  cout << "isSorted returned " << isSorted(testArray3, TEST_ARRAY_3_SIZE) << "\n";

  // Question 2
  const int TEST_ARRAY_4_SIZE = 10;
  const char test_char_arr[TEST_ARRAY_4_SIZE] = {'a', 'b', 'C', 'D', 'e', 'F', 'g', 'h', 'i', 'J'};
  int count = 0;
  for (int i = 0; i < TEST_ARRAY_4_SIZE; i++) {
    if (test_char_arr[i] >= 65 && test_char_arr[i] <= 90) {
      count++;
    }
  }
  cout << "Number of uppercase: " << count << "\n";
}