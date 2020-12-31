def str_comp(str1):
    len1 = len(str1)
    if (not len1):
        return str1

    last_char = str1[0]
    count = 1
    result = ''

    for i in range(1, len1):
        if str1[i] != last_char:
            result += last_char + str(count)
            last_char = str1[i]
            count = 1

        else:
            count += 1

    result += last_char + str(count)

    if (len(result) >= len1):
        return str1
    else: 
        return result



def main():
    str1 = "aaa"
    str2 = "ABCCBA"
    str3 = "aabcccccaaa"

    print(str_comp(str1))
    print(str_comp(str2))
    print(str_comp(str3))

if __name__ == "__main__":
    main()