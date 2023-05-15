## Time Complexity in C++

### Introduction
Time complexity is a fundamental concept in computer science that measures how the execution time of an algorithm increases with the size of the input data. It is essential to understand time complexity to analyze the performance of algorithms and choose the most efficient one for a given problem.

### Big O notation
Big O notation is commonly used to describe the time complexity of an algorithm. It provides an upper bound on the running time of the algorithm as a function of the input size. It gives us a clear understanding of how an algorithm's performance scales with increasing input size. For example, O(n) means that the number of operations performed by the algorithm grows linearly with the size of the input data, while O(n^2) means that the number of operations grows quadratically with the input size.

### Example
Here is a simple example of calculating the sum of elements in an array and its time complexity in C++.

```cpp
#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of elements in the array is: " << sum << endl;

    return 0;
}
