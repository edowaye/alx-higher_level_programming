#!/usr/bin/python3
def search_replace(my_list, search, replace):
    if not my_list:
        return(my_list)
    new_list = my_list.copy()
    for idx in range(len(new_list)):
        if new_list[idx] == search:
            new_list[idx] == replace
    return(new_list)
