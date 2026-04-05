# Compiling Guide in VS Code
#### A comprehensive guide on compiling the files in which there is code written in C programming language. 
----
###  Quick Navigation
* [Main Directory Commands](#-in-the-main-directory)
* [Sub-directory Compilation](#-in-a-sub-directory-inside-the-main-directory)
* [Directory Navigation (cd)](#-working-with-the-directories)
* [Running without Recompiling](#-note-the-executable-files-created-in-the-sub-directory-cannot-run-you-exit)

---
## In the main directory:
If the code file is in the main directory then just use this command in the terminal to compile: 
> gcc file_name.C -o file_name

In the main directory, the command creates:
> file_name.exe

Now, in the terminal type:
> ./file_name

The command written above will execute the code.

## In a sub-directory inside the main directory:
If the code file/s are in a sub-directory inside the main directory then simply do this:

1. Right click on the sub-directory you are working  and click on "Open in Integrated Terminal".
2. This gets you inside that sub-directory in a terminal.
3. There just type this same command again:
    > gcc file_name.C -o file_name
    
    This command written above then comiples the code file.
    
    The executable file i.e.:
    > file_name.exe

    This file is then created in that sub-directory and can olny be executed till you are inside it.

4. Now, in the terminal type:
    > ./file_name

    The command written above will execute the code.

 -----

#### Note: The executable files created in the sub-directory cannot run if you exit the sub directory and get back to the main directory, for enabling a particular file to run in the main directory, you need to write the command:

 > ./sub-directory/file_name

 This command runs the code file without needing it to recompile while being in the main directory or any other  sub directory.

----
## Working with the directories:
Here we gonna see some useful commands which are extremely useful while dealing with multiple directories in the workspace. 

1. If you wanna get inside a sub-directory manually using the terminal, then in the terminal just type:
    > cd directory_name

    This command gets you inside that particular sub-directory.

2. If you wanna exit that sub-directory and wanna move one directory up, then type this in the terminal:
    > cd ..

    This command exits the sub-directory you were previously in.

3. If you wanna jump back into the previous sub-directory you were working, then just type this in the terminal: 
    > cd -

    This command gets you back in the directory you were previously working.
----
    
