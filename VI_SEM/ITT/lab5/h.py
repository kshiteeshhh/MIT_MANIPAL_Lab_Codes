def main():
    n = int(input("enter the size of set1\n"))
    st1 = set()
    print("enter values for set 1\n")
    for i in range(n):
        temp = input()
        st1.add(temp)

    n = int(input("enter the size of set2\n"))
    st2 = set()
    print("enter valus for set 2\n")
    for i in range(n):
        temp = input()
        st2.add(temp)

    print("intersection of both the sets is ", st1.intersection(st2), "\n")
    print("union of both the sets is ", st1.union(st2), "\n")


if __name__ == "__main__":
    main()
