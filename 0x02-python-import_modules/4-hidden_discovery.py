#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    names_defined = dir(hidden_4)
    for name in names_defined:
        if name[:2] != "__":
            print(name)
