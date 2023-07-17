def transform_matrix(matrix):
    for i in matrix:
        if len(i)==3:
            q=(sum(list(map(int,i))))**2
            print((str(q)+' ')*len(i))
        
matrix=[]
for i in range(4):
    q=input()
    if q==None:
        break
    q=q.split()
    matrix.append(q)
    
transform_matrix(matrix)