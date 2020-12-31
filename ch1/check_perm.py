def check_perm(str1, str2):
    charmap = {}

    # iterate through str1 and add chars to dict
    for char in str1:
        val = charmap.get(char, 0)

        if val != 0:
            charmap.update({char: val+1})
        else:
            charmap.update({char: 1})

    # go through str2 and check if chars correspond to dict
    for char in str2:
        val = charmap.get(char, 0)

        if val != 0:
            charmap.update({char: val-1})
        else:
            return False

    return True

def check_perm_sort(str1, str2):
    charmap = {}
    sorted1 = sorted(str1)
    sorted2 = sorted(str2)

    if sorted1 == sorted2:
        return True
    else:
        return False


def main():
    str1 = "abcde"
    str2 = "babcde"
    str3 = "edcba"

    print(check_perm(str1, str2))
    print(check_perm(str1, str3))
    print(check_perm_sort(str1, str2))
    print(check_perm_sort(str1, str3))

if __name__ == "__main__":
    main()