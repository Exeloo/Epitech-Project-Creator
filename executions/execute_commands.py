import os

from executions.functions import ask_input, get_input


def execute_commands(d_name):
    if ask_input("Do you want to init your git repository ?"):
        remote = get_input("Please put your git remote.")
        os.system(
            f"cd {d_name} && git init && git remote add origin {remote} && git add lib && git commit -m \"Init ("
            f"auto)\" && git push --force")
