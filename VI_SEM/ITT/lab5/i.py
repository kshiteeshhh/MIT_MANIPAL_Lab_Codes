def main():
    n = int(input("enter the size of list\n"))
    arr = list()
    for i in range(n):
        temp = input()
        arr.append(temp)

    flag = 0
    for i in range(n):
        if arr[i] != arr[n - i - 1]:
            print("not a palindrome")
            flag = 1;
            break;

    if (flag == 0):
        print("this list is palindrome")


if __name__ == "__main__":
    main()
