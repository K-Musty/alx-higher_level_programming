#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    num = 0
    val = len(argv) - 1
    for i in range(1, val + 1):
        num += int(argv[i])
    print(num)
