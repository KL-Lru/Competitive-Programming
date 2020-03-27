s = input()
ps1 = s[:len(s)//2]
ps2 = s[(len(s)+2)//2:]

if s == s[::-1] and ps1 == ps1[::-1] and ps2 == ps2[::-1]:
    print("Yes")
else :
    print("No")