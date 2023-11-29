#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        number *= -1
        last_digit = abs(number % 10)
    else:
        last_digit = abs(number % 10)
    print("{}".format(last_digit), end="")
    return last_digit
