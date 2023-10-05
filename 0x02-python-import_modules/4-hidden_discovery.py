#!/usr/bin/python3

if __name__ == "__main__":
    """Print all names defined by hidden_4 module."""
    import hidden_4

    dfnames = dir(hidden_4)
    for nam in dfnames:
        if nam[:2] != "__":
            print(nam)
