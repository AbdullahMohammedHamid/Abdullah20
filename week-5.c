type arrayName[size];

int numbers[5];  // Declares an array of 5 integers
int numbers[5] = {1, 2, 3, 4, 5};  // Array initialized with values
int numbers[5] = {1, 2};  // Array initialized as {1, 2, 0, 0, 0}#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);
    
    return 0;
}
First element: 10
Third element: 30

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }
    
    return 0;
}

Element at index 0: 10
Element at index 1: 20
Element at index 2: 30
Element at index 3: 40
Element at index 4: 50

int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

1  2  3
4  5  6

#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("Element at [0][1]: %d\n", matrix[0][1]);  // Access second element in the first row
    printf("Element at [1][2]: %d\n", matrix[1][2]);  // Access third element in the second row
    
    return 0;
}

Element at [0][1]: 2
Element at [1][2]: 6

#include <stdio.h>

// Function to print all elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    printArray(numbers, 5);  // Passing array to function
    return 0;
}

10 20 30 40 50

#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("Element at [0][1]: %d\n", matrix[0][1]);  // Access second element in the first row
    printf("Element at [1][2]: %d\n", matrix[1][2]);  // Access third element in the second row
    
    return 0;
}

Element at [0][1]: 2
Element at [1][2]: 6

#include <stdio.h>

// Function to print a 2D array
void printMatrix(int matrix[2][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printMatrix(matrix, 2, 3);
    return 0;
}

1 2 3
4 5 6

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 5, 30, 15};
    int max = numbers[0];  // Assume the first element is the maximum
    
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    printf("Maximum element: %d\n", max);
    return 0;
}