print("enter the matrix to do transpose")
n=int(input("enter dimension"))
arr=[]
for i in range(n):
    temp=[]
    for j in range(n):
        value=int(input())
        temp.append(value)
    arr.append(temp)

print("original")
for i in range(n):
    for j in range(n):
        print(arr[i][j],end=" ")
    print()

print("transpose")
for i in range(n):
    for j in range(i):
        arr[i][j],arr[j][i]=arr[j][i],arr[i][j]

for i in range(n):
    for j in range(n):
        print(arr[i][j],end=" ")
    print()
