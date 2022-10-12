from executions.functions import ask_input, get_input
import os

header = "/*\n** EPITECH PROJECT, 2022\n** {p_name}\n** File description:\n** Task{task_n} - {type} {" \
         "file}\n*/\n\n "


def create_files(p_name, d_name):
    if not ask_input("Do you want to automatically create files ?"):
        return
    is_task = ask_input("Do you want to create tasks files ?")
    is_test = ask_input("Do you want to create tests files ?")
    if not is_task and not is_test:
        return
    if is_test:
        os.mkdir(f"{d_name}/tests")
    array = get_input("Please, put your functions names.").split(" ")
    for (i, e) in enumerate(array):
        proto = get_input(f"Please, put the prototype of {e}")
        if is_task:
            file = open(f"{d_name}/{e}.c", "a")
            file.write(
                header.format(p_name=p_name, task_n=f"{str(i) if i > 10 else '0' + str(i)}", file=e, type="Function"))
            file.write(proto + "\n{\n\n}\n")
        if is_test:
            file = open(f"{d_name}/tests/test-{e}.c", "a")
            file.write(
                header.format(p_name=p_name, task_n=f"{str(i) if i > 10 else '0' + str(i)}", file=e, type="Test"))
            file.write(proto + ";\n\n")
            for let in ["a", "b", "c"]:
                file.write(f"Test({e}, {let}) " + "{\n\n\n}\n\n")