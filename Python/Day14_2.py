def transform_matrix(matrix):
    transformed_matrix = []
    
    for row in matrix:
        for element in row:
            transformed_row = [sum(row) ** 2]
            transformed_matrix.append(transformed_row)

    for row in transformed_matrix:
        for element in row:
            print(element, end = " ")
        print()

rows, cols = map(int, input().split())

original_matrix = []
for i in range(rows):
    valid_input = False
    while not valid_input:
        try:
            temp = []
            temp = list(map(int, input().split()))
            original_matrix.append(temp)
            valid_input = True
        except:
            original_matrix.clear()
            break

transform_matrix(original_matrix)
