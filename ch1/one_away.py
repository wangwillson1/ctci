def ins_check(str1, str2, len1):
    found_diff = False
    j = 0

    # assumes str1 is the longer string
    for i in range(len1):
        if j == len1 - 1:
            break
            
        elif (str1[i] != str2[j] and not found_diff):
            found_diff = True
            continue

        elif (str1[i] != str2[j]):
            return False
        
        j += 1

    return True


def one_away(str1, str2):
    # check insert (note that inserting from one is removing from the other)
    len1 = len(str1)
    len2 = len(str2)
    
    if len1 == len2 + 1:
        return ins_check(str1, str2, len1)
    elif len2 == len1 + 1:
        return ins_check(str2, str1, len2)

    # check replace
    elif len1 == len2:
        found_diff = False
        for i in range(len1):
            if (str1[i] != str2[i] and not found_diff):
                found_diff = True
                continue

            elif (str1[i] != str2[i]):
                return False

        return True

    return False


def main():
    str1 = "pale"
    str2 = "pales"
    str3 = "ple"
    str4 = "bale"
    str5 = "bake"
    str6 = "reee"
    str7 = "ree"
    str8 = "reeee"
    str9 = "reees"

    print(one_away(str1, str3)) # T
    print(one_away(str2, str1)) # T
    print(one_away(str1, str4)) # T
    print(one_away(str1, str5)) # F
    print(one_away(str6, str7)) # T
    print(one_away(str8, str7)) # F
    print(one_away(str8, str9)) # T
    print(one_away(str7, str9)) # F
    print(one_away(str6, str9)) # T
    

if __name__ == "__main__":
    main()