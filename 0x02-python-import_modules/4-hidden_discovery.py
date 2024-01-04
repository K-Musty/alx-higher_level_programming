#!/usr/bin/python3
if __name__ == "__main__":

    import hidden_4
    list = dir(hidden_4)
    for names in lst:
        if names[:2] != "__":
            print(names)
