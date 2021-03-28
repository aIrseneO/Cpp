# Sed

In this project I implement a program with some basic functionalities of sed (stream editor for filtering and transforming text). The program takes a filename and two strings, s1 and s2. It opens the file and display its content after replacing every occurence of s1 with s2. The content is displayed in the standard output<br>
## Synopsis
```bash
./sed s1 s2 filename
```
## How to run it?
The program can be compile with a simple 
```bash
make
```
the executable ```sed``` will be created.<br> To clean object files run:
```bash
make clean
```
To clean the executable and object files run:
```bash
make fclean
```
To restart, meaning clean everything up and make the executable, run:
```bash
make re
```
Run
```bash
make f
```
to make the executable and clean object files at once.<br>
## Test it!
The script ```sed.sh``` is provided to test the binary. It compares the output of the original sed program (```/bin/sed```) with the one of this newly created sed. It can be run as follow:
```bash
./sed.sh s1 s2 filename
```
The file ```test``` can be used to run some tests.
## Return and Error
If failure, the program will exit with -1 and display the an error on the standard output; it exit with a 0 the result is also displayed on the standard output otherwise.
