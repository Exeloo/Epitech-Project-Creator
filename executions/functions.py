def ask_input(q):
    while True:
        r = input(f"{q} y / n\n>> ")
        if r in ["y", "n"]:
            return True if r == "y" else False
        print("Value error, please retry.")


def get_input(q):
    while True:
        r = input(f"{q}\n>> ")
        if r != "":
            return r
        print("Value error, please retry.")