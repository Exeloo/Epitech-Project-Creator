import shutil
import os
from executions.functions import ask_input


def copy_files(d_name):
    print("Let's start with files in you're project")
    if ask_input("Do you want you're library ?"):
        os.mkdir(f"{d_name}/lib")
        os.mkdir(f"{d_name}/lib/my")
        for i in os.listdir("./data/lib/my"):
            shutil.copy(f"./data/lib/my/{i}", f"{d_name}/lib/my")
    if ask_input("Do you want you're .gitignore ?"):
        shutil.copy("./data/.gitignore", f"{d_name}")
    if ask_input("Do you want you're compile file ?"):
        shutil.copy("./data/compile", f"{d_name}")
        shutil.copy("./data/compile_test", f"{d_name}")
