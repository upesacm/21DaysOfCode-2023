'''
As part of the Chandrayaan mission, you are tasked with developing software to analyze the data collected by the lunar rover. Implement a function called 'transform_matrix' that takes a matrix represented as a list of lists, containing data collected on the moon's surface. The function should perform a transformation operation on the matrix to generate a new matrix. In this transformation, each element in the new matrix is obtained by squaring the sum of the corresponding row in the original matrix. Finally, the function should print the transformed matrix, which reflects the enhanced lunar data obtained through the transformation.

Input Format

The function should take a matrix as input, represented as a list of lists. Each inner list represents a row in the matrix. The matrix can have varying number of rows and columns.

Constraints

The number of rows and columns in the matrix will not exceed 1000.
The elements in the matrix can be positive or negative integers, including zero.
The function should handle and print the correct transformed matrix for all valid input matrices.
Output Format

The function should print the transformed matrix. The transformed matrix should have the same number of rows and columns as the original matrix.

Sample Input 0

3 3
4 7 2
1 5 9
6 3 8
Sample Output 0

169 169 169
225 225 225
289 289 289
'''

def matrix_input():
    rows, cols = map(int, input().split())

    matrix = []

    for _ in range(rows):
        row_input = input().split()
        row = list(map(int, row_input))
        matrix.append(row)

    return matrix

def transform_matrix(matrix):
    rows = len(matrix)
    cols = len(matrix[0])

    transformed_matrix = [[0 for _ in range(cols)] for _ in range(rows)]

    for i in range(rows):
        row_sum = sum(matrix[i])  
        transformed_value = row_sum ** 2 
        for j in range(cols):
            transformed_matrix[i][j] = transformed_value

    for row in transformed_matrix:
        print(" ".join(str(value) for value in row))


matrix = matrix_input()



transform_matrix(matrix)


