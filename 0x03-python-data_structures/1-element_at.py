#!/usr/bin/python3
def element_at(my_list, idx):
    if idx < 0 or idx > (len(my_list) -1):
        return None

    for k, i in enumerate(my_list):
        if k == idx:
            return i

