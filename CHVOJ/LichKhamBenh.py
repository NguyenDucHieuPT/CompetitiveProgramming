t = int(input())
while t:
    t -= 1
    n, x = map(int, input().split())
    ans = x + 10 * (n - 1) - x * n
    if ans < 0 :
        print(0)
    else :
        print(ans)
