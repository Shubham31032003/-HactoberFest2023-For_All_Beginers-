//linear search
#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element if found
        }
    }
    return -1; // Return -1 if the target element is not found in the array
}

int main() {
    int arr[] = {12, 45, 67, 89, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int target = 34; // Element to search for
    int result = linearSearch(arr, n, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}