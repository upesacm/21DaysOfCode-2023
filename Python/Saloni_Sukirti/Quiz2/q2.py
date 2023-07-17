def transform_matrix(matrix):
    transformed_matrix = []
    
    for row in matrix:
        transformed_row = []
        row_sum = sum(row)
        
        for element in row:
            transformed_element = row_sum ** 2
            transformed_row.append(transformed_element)
        
        transformed_matrix.append(transformed_row)
    
    for row in transformed_matrix:
        print(' '.join(str(element) for element in row))

        
rows, columns = map(int, input().split())

actual_matrix = []
 
for i in range(rows):   
    single_row = list(map(int, input().split()))   
    actual_matrix.append(single_row)  

transform_matrix(actual_matrix)
    
