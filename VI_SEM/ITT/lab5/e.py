def sum(n):
    if n==1:
        return 1
    return n+sum(n-1)

def main():
    print("enter n")
    n=int(input())
    ans=sum(n)
    print("sum=",ans)
if __name__=="__main__":
    main()
