def find_opposite_face(n):
    return 7 - n

T = int(input())

for _ in range(T):
    n = int(input())
    opposite = find_opposite_face(n)
    print(opposite)
