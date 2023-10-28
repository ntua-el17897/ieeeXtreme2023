#!/usr/bin/env python3
# encoding: utf-8

def parser():
    while 1:
        data = list(input().split(' '))
        for number in data:
            if len(number) > 0:
                yield(number)   

input_parser = parser()

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)

n = get_number()
h = get_number()
a = get_number()
c = get_number()
q = get_number()
sum = 0
stack = []

stack.append(h)

for i in range(n-1):
	h = (a*h+c)%q
	sum += len(stack)
	while(len(stack) != 0):
		if(stack[-1] > h):
			break
		else:
			stack.pop()
	stack.append(h)

print(sum)