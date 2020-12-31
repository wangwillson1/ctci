def rotate_matrix(mat, n):
    for layer in range(int(n/2)):
        begin = layer
        end = n - 1 - layer

        for i in range(begin, end):
            topleft = mat[begin][i]
            offset = i - begin # distance from topleft ring to i

            mat[begin][i] = mat[end-offset][begin]
            mat[end-offset][begin] = mat[end][end-offset]
            mat[end][end-offset] = mat[i][end]
            mat[i][end] = topleft

    return mat




def main():
    mat1 = [[1,2],[1,2]]
    mat2 = [[1,2, 3],[1,2, 3],[1,2, 3]]
    mat3 = [[1,2,3,4],[1,2,3,4],[1,2,3,4],[1,2,3,4]]

    print(rotate_matrix(mat1, 2))
    print(rotate_matrix(mat2, 3))
    print(rotate_matrix(mat3, 4))

if __name__ == "__main__":
    main()