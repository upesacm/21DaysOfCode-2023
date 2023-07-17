def ans(matrix):
    tm = []
    for r in matrix:
        tr = [sum(r) ** 2] * len(r)
        tm.append(tr)
    return tm
rows, cols = map(int, input().split())
matrix = []
for i in range(rows):
    r = list(map(int, input().split()))
    matrix.append(r)
res = ans(matrix)
for j in res:
    print(*j)
