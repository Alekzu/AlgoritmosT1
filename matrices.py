
import timeit


def suma():
    matrix1 = [[1, 1, 1], [1, 1, 1]]
    matrix2 = [[2, 2, 2], [3, 3, 3]]
    matrix3 = [[0, 0, 0], [0, 0, 0]]

    for i in range(2):
        for j in range(3):
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j]

    #print(matrix3)


tiempo = timeit.timeit('suma()', 'from __main__ import suma', number=100000)
print(tiempo)
#con 1000 0.018555416000708647