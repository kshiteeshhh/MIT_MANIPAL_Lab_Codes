st = "abcdefghijklmnopqrstuvwxyz"


def main():
    temp = input("enter the string")
    n = len(temp)
    ans=""
    for i in range(n):
        ans=ans+st[st.find(temp[i]) - 3]

    print("encrypted string is ", ans)


if __name__ == "__main__":
    main()
