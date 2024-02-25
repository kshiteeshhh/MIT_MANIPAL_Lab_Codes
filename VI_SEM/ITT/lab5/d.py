def takeArr(n):
    print("enter matrix ")
    arr=[]
    for i in range(n):
        temp=[]
        for j in range(n):
            value=int(input())
            temp.append(value)
        arr.append(temp)
    return arr

def printArr(arr,n):
    for i in range(n):
        for j in range(n):
            print(arr[i][j],end=" ")
        print()


def main():
    print("enter dimension for matrix 1")
    n1=int(input())
    arr1=takeArr(n1)
    print("enter dimension for matrix 2")
    n2=int(input())
    arr2=takeArr(n2)
    print("matrix 1")
    printArr(arr1,n1)
    print("matrix 2")
    printArr(arr2,n2)

    if n1!=n2:
        print("Matrices cannot be multiplied. Inner dimensions must match.")
        return None
    result = [[0 for _ in range(n1)] for _ in range(n1)]

    # Perform matrix multiplication
    for i in range(n1):
        for j in range(n2):
            result[i][j]=arr1[i][j]+arr2[i][j]

    print("result matrix")
    printArr(result,n1)
if __name__=="__main__":
    main()
