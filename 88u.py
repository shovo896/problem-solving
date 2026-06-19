R1, R2 = map(int, input().split())
D1, D2 = map(int, input().split())

dominater_final = R1 + D1
everule_final = R2 + D2

if dominater_final > everule_final:
    print("Dominater")
else:
    print("Everule")
