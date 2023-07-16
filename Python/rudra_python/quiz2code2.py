
def transform_matrix(matrix):
    # Write your code here
    for i in range(len(matrix)):
        sum = 0
        for j in range(len(matrix[i])):
            sum += matrix[i][j]
        matrix[i] = [sum**2]*len(matrix[i])
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print(matrix[i][j], end = " ")
        print()

if __name__ == '__main__':
    m, n = map(int, input().split())
    matrix = []
    for i in range(m):
        matrix.append(list(map(int, input().split())))
    transform_matrix(matrix)
