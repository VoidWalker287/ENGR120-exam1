
# Exam 1 Interactive Answer Key

This program is for searching the answers to exam 1 from ENGR 120-01 in Spring 2023. Code examples from the exam have been slightly modified to run automatically, and can be found in their respective source files.


## Authors

- Feithi Belkhouche, Professor
- [Kyle Smith](https://github.com/VoidWalker287), SI Leader

## Installation

#### Install using terminal emulator:
Open the terminal emulator, and change your directory to the desired location of the project.
Use the following command to clone the git repository:
```bash
  git clone https://github.com/VoidWalker287/ENGR120-exam1.git
```
Navigate to the chosen directory in CLion. Open ENGR120-exam1 directory as a project.
## FAQ

#### Q: Why do some of the files say exam 2?

A: The project created beforehand was used in junction with a seperate class, specifically for the second exam.

#### Q: I cloned the repository, but I can't run the program.

A: This project was made with CLion with the intention of allowing the students to view the source code as part of the answers to the questions on the exam. If you are using CLion, be sure to build the project and run it using the tools in the top left corner of the screen. The standard I/O terminal should appear.

#### Q: Can I use this program without CLion?

A: Usage of this project without CLion was not tested, but you can manually compile and run the program with any tools you'd like, assuming you add the correct files.
The required files for the program to run properly are as follows:

- config.h
- main.c
- utils.c
- examProblem1.c, examProblem2.c, etc.
- examTrueFalse.c

#### Q: I got an error saying my version does not meet the minimum requirement.

A: This error is just a formality from CLion. To fix this, open the CMakeLists.txt file in the project. In the following line:
```cmake
cmake_minimum_required(VERSION 3.19.2)
```
change 3.19.2 to your current CLion version. Then, reload the changes made to the file (a prompt should appear in the top right corner).
