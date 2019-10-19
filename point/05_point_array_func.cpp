//
// Created by SXTian on 2019/10/17.
//

#include <iostream>

using namespace std;

/*
 * 冒泡排序
 */


void bubbleSort(int *arr, int lens) {
    for (int i = 0; i < lens - 1; i++) {
        for (int j = 0; j < lens - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void printArray(int *arr, int lens) {
    for (int i = 0; i < lens; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[10] = {4, 5, 3, 12, 7, 21, 6, 31, 1, 17};
    int lens = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, lens);

    bubbleSort(arr, lens);
    printArray(arr, lens);
    return 0;
}