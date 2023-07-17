def transform(matrix):
    matrix2 = []
    for row in matrix:
        row2 = [sum(row) ** 2] * len(row)
        matrix2.append(row2)
    return matrix2

def main():
    rows, cols = map(int, input().split())
    matrix = []
    for _ in range(rows):
        row = list(map(int, input().split()))
        if len(row) != cols:
            raise ValueError("Invalid number of elements in the row")
        matrix.append(row)
    transformed_matrix = transform(matrix)
    for row in transformed_matrix:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()
