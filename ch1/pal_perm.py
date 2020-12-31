def pal_perm(str1):
    # palindrome must have 2 of each char plus potentially 1 of another
    charmap = {}
    fstr = str1.upper().replace(' ','')

    for char in fstr:
        val = charmap.get(char, 0)

        if val == 0:
            charmap.update({char: 1})

        elif val == 2:
            return False

        else: 
            charmap.update({char: val+1})

    # iterate through charmap
    single = False
    for k, v in charmap.items():
        if v == 1 and not single:
            single = True
        elif v == 1 and single:
            return False
    
    return True

def main():
    str1 = "Tact Coa"
    str2 = "ABCCBA"
    str3 = "ABCDEF"

    print(pal_perm(str1))
    print(pal_perm(str2))
    print(pal_perm(str3))

if __name__ == "__main__":
    main()