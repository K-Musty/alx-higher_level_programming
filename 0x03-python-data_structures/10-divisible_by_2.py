#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    return list(map(lambda k: True if k % 2 == 0 else False, my_list))
