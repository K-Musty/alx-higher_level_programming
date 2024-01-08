#!/usr/bin/python3
def no_c(my_string):
    st = my_string
    st = st.translate({ord('c'): None})
    st = st.translate({ord('C'): None})
    return (st)
