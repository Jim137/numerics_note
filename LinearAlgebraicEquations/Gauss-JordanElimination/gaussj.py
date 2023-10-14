import numpy as np


def gaussj_inverse_matrix(a: np.ndarray):
    a = a.copy()
    b = np.identity(len(a))
    a = np.concatenate((a, b), axis=1)
    return gaussj(a)


def gaussj(a: np.ndarray):
    a = a.copy()
    n = len(a)
    m = len(a[0])
    for k in range(n):
        print(a)
        i = k
        # find the largest pivot
        for j in range(k + 1, n):
            if abs(a[j][k]) > abs(a[i][k]):
                i = j
        a[[k, i]] = a[[i, k]] # swap row k and row i -> put the pivot on the diagonal
        a[k] = a[k] / a[k][k] # normalize row k
        # subtract the pivot row from other rows
        for i in range(n):
            if i != k:
                a[i] = a[i] - a[i][k] * a[k]
    return a[:, n:m]


if __name__ == "__main__":
    a = np.array([[1, 1, 1, 3], [2, 3, 5, 4], [4, 0, 5, 2]])
    print(gaussj(a))

    b = np.array([[1, 1], [2, 3]])
    print(gaussj_inverse_matrix(b))
