with open('Horse.inp', 'r') as f_in:
    n = int(f_in.readline())
    dien_ky_horses = list(map(int, f_in.readline().split()))
    vua_te_horses = list(map(int, f_in.readline().split()))

dien_ky_horses.sort(reverse=True)
vua_te_horses.sort(reverse=True)

wins = 0
vua_te_index = 0

for horse in dien_ky_horses:
    while vua_te_index < n and vua_te_horses[vua_te_index] >= horse:
        vua_te_index += 1
    if vua_te_index < n:
        wins += 1
        vua_te_index += 1
with open('Horse.out', 'w') as f_out:
    f_out.write(str(wins))
