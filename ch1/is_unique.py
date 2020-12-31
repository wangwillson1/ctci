def is_unique(s):
    charset = set({})

    for char in s:
        if char in charset:
            return False
        
        charset.add(char)

    return True

def main():
    str1 = "abcde"
    str2 = "babcde"

    print(is_unique(str1))
    print(is_unique(str2))

if __name__ == "__main__":
    main()