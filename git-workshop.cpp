#include <iostream>

void printSum(int arr[], int size) {
    int sum = 0;
    // something seems off here 🤔
    for (int i = 0; i <= size; i++) {
        sum += arr[i];
    }

    std::cout << "the sum is: " << sum << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3};
    printSum(numbers, 3);
    return 0;
}