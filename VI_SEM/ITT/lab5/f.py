def fib(n, arr):
    if n == 0 or n == 1:
        return n;
    if arr[n] != -1:
        return arr[n]
    else:
        arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
        return arr[n]


def main():
    print("enter n")
    n = int(input())
    arr = [-1] * (n)
    arr[0] = 0
    arr[1] = 1
    fib(n-1, arr)
    print("fib=",arr)


if __name__ == "__main__":
    main()
