import shutil
import os
from executions.functions import ask_input


def copy_files(d_name):
    print("Let's start with files in you're project")
    if ask_input("Do you want your library ?"):
        os.mkdir(f"{d_name}/lib")
        for lib in os.listdir("./data/lib"):
            if lib == ".gitkeep":
                os.remove("./data/lib/.gitkeep")
                continue
            os.mkdir(f"{d_name}/lib/{lib}")
            for file in os.listdir(f"./data/lib/{lib}"):
                shutil.copy(f"./data/lib/{lib}/{file}", f"{d_name}/lib/{lib}")
    if ask_input("Do you want your include ?"):
        os.mkdir(f"{d_name}/include")
        for i in os.listdir("./data/include"):
            if i == ".gitkeep":
                os.remove("./data/lib/.gitkeep")
                continue
            shutil.copy(f"./data/include/{i}", f"{d_name}/include")
    if ask_input("Do you want your .gitignore ?"):
        shutil.copy("./data/.gitignore", f"{d_name}")
    if ask_input("Do you want your compile files ?"):
        shutil.copy("./data/compile_prod", f"{d_name}")
        shutil.copy("./data/compile_test", f"{d_name}")
        shutil.copy("./data/compile_coverage", f"{d_name}")
        shutil.copy("./data/compile_lib", f"{d_name}")
