
# Exam 1 Interactive Answer Key

This program is for searching the answers to exam 1 from ENGR 120-01 in Spring 2023. Code examples from the exam have been slightly modified to run automatically, and can be found in their respective source files.


## Authors

- Feithi Belkhouche, Professor
- [Kyle Smith](https://github.com/VoidWalker287), SI Leader

## Installation

#### Install using terminal emulator
1. Open the terminal emulator, and change your directory to the desired location of the project.
Use the following command to clone the git repository:
```bash
  git clone https://github.com/VoidWalker287/ENGR120-exam1.git
```
2. Navigate to the chosen directory in CLion. Open ENGR120-exam1 directory as a project.

#### Install using CLion
1. Go to File > New > File from Version Control

2. Under the Repository URL tab, paste the following URL:
```bash
https://github.com/VoidWalker287/ENGR120-exam1.git
```
In order to properly clone the project, you must clone it into a completely empty folder.

#### Install Manually with GCC (No CLion)
1. Download the header file and every C file from the project:

- config.h
- main.c
- utils.c
- examProblem1.c, examProblem2.c, etc.
- examTrueFalse.c

This can be done by opening the "Code" menu on the home page of the repository and selecting "Download ZIP". Exctract the files to your chosen directory of folder, and delete the other files.

2. Use the following code to create a Makefile:
```Makefile
examAnswers1: main.o utils.o examProblem1.o examProblem2.o examProblem3.o examProblem4.o examProblem5.o examProblem6.o examProblem7.o examProblem8.o examProblem9.o examProblem10.o examProblem11.o examProblem12.o examProblem13.o examProblem14.o examProblem15.o examProblem16.o examProblem17.o examTrueFalse.o
	gcc -o examAnswers1 main.o utils.o examProblem1.o examProblem2.o examProblem3.o examProblem4.o examProblem5.o examProblem6.o examProblem7.o examProblem8.o examProblem9.o examProblem10.o examProblem11.o examProblem12.o examProblem13.o examProblem14.o examProblem15.o examProblem16.o examProblem17.o examTrueFalse.o

main.o: main.c
	gcc -c main.c

utils.o: utils.c
	gcc -c utils.c

examProblem1.o: examProblem1.c
	gcc -c examProblem1.c

examProblem2.o: examProblem2.c
	gcc -c examProblem2.c

examProblem3.o: examProblem3.c
	gcc -c examProblem3.c

examProblem4.o: examProblem4.c
	gcc -c examProblem4.c

examProblem5.o: examProblem5.c
	gcc -c examProblem5.c

examProblem6.o: examProblem6.c
	gcc -c examProblem6.c

examProblem7.o: examProblem7.c
	gcc -c examProblem7.c

examProblem8.o: examProblem8.c
	gcc -c examProblem8.c

examProblem9.o: examProblem9.c
	gcc -c examProblem9.c

examProblem10.o: examProblem10.c
	gcc -c examProblem10.c

examProblem11.o: examProblem11.c
	gcc -c examProblem11.c

examProblem12.o: examProblem12.c
	gcc -c examProblem12.c

examProblem13.o: examProblem13.c
	gcc -c examProblem13.c

examProblem14.o: examProblem14.c
	gcc -c examProblem14.c

examProblem15.o: examProblem15.c
	gcc -c examProblem15.c

examProblem16.o: examProblem16.c
	gcc -c examProblem16.c

examProblem17.o: examProblem17.c
	gcc -c examProblem17.c

examTrueFalse.o: examTrueFalse.c
	gcc -c examTrueFalse.c
```

3. With the all of the mentioned files saved in a single directory or folder, run ```make```. If you are on Windows, you will have to [install GCC](https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j) and [make](https://stackoverflow.com/questions/2532234/how-to-run-a-makefile-in-windows).
To run the program, use ```examAnswers1``` on Windows or ```./examAnswers1``` on Linux.

## FAQ

#### Q: Why do some of the files say exam 2?

A: The project created beforehand was used in junction with a seperate class, specifically for the second exam.

#### Q: I cloned the repository, but I can't run the program.

A: This project was made with CLion with the intention of allowing the students to view the source code as part of the answers to the questions on the exam. If you are using CLion, be sure to build the project and run it using the tools in the top left corner of the screen. The standard I/O terminal should appear.

#### Q: I got an error saying my version does not meet the minimum requirement.

A: This error is just a formality from CLion. To fix this, open the CMakeLists.txt file in the project. In the following line:
```cmake
cmake_minimum_required(VERSION 3.19.2)
```
change 3.19.2 to your current CLion version. Then, reload the changes made to the file (a prompt should appear in the top right corner).

#### Q: Why can't I clone the project in CLion?

A: Please make sure you are cloning the project into a completely empty folder. This folder will act as the project folder, similar to creating a new project in CLion locally.
