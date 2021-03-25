# Phonebook

In this project I implement a basic static phonebook software. Contacts can be  added using the ```ADD``` command until the phonebook's max size is reached. The command ```SEARCH``` is used to check the loaded contacts. ```EXIT``` is used to exit the program. After exiting the program all contacts are lost.<br>
## How to run it?
The size of the desire phonebook can be set in the Makefile (update variable ```MAXPHONEBOOKSIZE```) then a simple 
```bash
make
```
can be use to run the program. The executable ```phonebook``` will be created.<br> To clean object files run:
```bash
make clean
```
To clean the executable and object files run:
```bash
make fclean
```
To restart, meaning clean all and make the executable run:
```bash
make re
```
Run
```bash
make f
```
to make the executable and clean object files at once.<br>
This mini project is inspire by a school assignment available vie this [link](https://drive.google.com/file/d/1YBU_apkXirqHPc-KdLeXPI-WrlUAWKnl/view?usp=sharing).