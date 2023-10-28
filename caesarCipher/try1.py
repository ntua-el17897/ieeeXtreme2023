# a simple parser for python. use get_number() and get_word() to read
def parser():
    while 1:
        data = list(input().split('\n'))
        for number in data:
            if len(number) > 0:
                yield(number)

input_parser = parser()

checker = False

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)

# numpy and scipy are available for use

def cipher(line, offset):
    ans = ""
    for i in line:
        curr = ord(i) - offset
        if (i == ' '): 
            ans += ' '
        elif curr >= ord('a'):
            ans += chr(curr)
        else: 
            ans += chr(curr + 26)
    print(ans)
    return

def decipher(line, offset):
    ans = ""
    for i in line:
        curr = ord(i) + offset
        if (i == ' ' or i == '\n'): 
            ans += ' '
        elif curr <= ord('z'):
            ans += chr(curr)
        else: 
            ans += chr(curr - 26)
    print(ans)

    return

def solution():
    offset = get_number()
    line = get_word()
    test = line.split(' ')
    check = False
    for i in test:
        if i == "the": check = True
    if(check == True):
        cipher(line, offset)
    else:
        decipher(line, offset)



n = get_number()
for i in range(n):
    solution()
# res = a + b
# print(res)