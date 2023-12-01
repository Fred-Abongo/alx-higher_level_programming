#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    grand_total = 0
    for num in range(len(sys.argv) - 1):
        grand_total += int(sys.argv[num + 1])
    print("{}".format(grand_total))
