from executions.copy_files import copy_files
import os

from executions.create_files import create_files
from executions.execute_commands import execute_commands
from executions.functions import ask_input, get_input


def abort():
    print("Creation abort")


def main():
    print(os.system("ls"))
    return
    print("Welcome in this project initiator !\nWe need you're help for some things.")
    if not ask_input("Do you want to proceed ?"):
        return abort()
    p_name = get_input("What is you're project name ?")
    d_name = "../../" + get_input("What is you're folder's project path ?")
    os.mkdir(d_name)
    file = open(f"{d_name}/project.info", "w")
    file.write(f"project_name: {p_name}")
    copy_files(d_name)
    create_files(p_name, d_name)
    execute_commands(d_name)


if __name__ == '__main__':
    main()
