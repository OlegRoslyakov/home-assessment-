import os
from os import path
import shutil

Source_Path = 'C:\home\oleg '
Destination = 'C:\home\oleg\test'
#dst_folder = os.mkdir(Destination)


def main():
    for count, filename in enumerate(os.listdir(Source_Path)):
        dst =  "main" + str(count) + ".cpp"

        # rename all the files
        os.rename(os.path.join(Source_Path, filename),  os.path.join(Destination, dst))


# Driver Code
if __name__ == 'main':
    main()