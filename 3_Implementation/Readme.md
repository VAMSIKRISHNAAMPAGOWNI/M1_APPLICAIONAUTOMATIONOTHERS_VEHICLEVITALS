# Procedures and Installations to execute the codes are as follows:

## Software tools for C Programming

* WINDOWS OS
* LINUX OS

## Software Setup on Windows OS for C Programming

## IDE
[Visula Studio Code](https://code.visualstudio.com/docs/cpp/config-mingw) for compiling and debuggin the code.

### Build tools
* [Make Installer](http://gnuwin32.sourceforge.net/downlinks/make.php) from [GNUWin32](http://gnuwin32.sourceforge.net/packages/make.htm) for automating the build without usign IDE

### Code Analysis
* [cppcheck](http://cppcheck.sourceforge.net/) for Static Analysis
* [Dr. Memory](https://github.com/DynamoRIO/drmemory/wiki/Downloads) for Heap analysis
* [Memory Sanitization](https://lemire.me/blog/2016/04/20/no-more-leaks-with-sanitize-flags-in-gcc-and-clang/) using gcc and -fsanitize option

### Source code Management
* [git](https://git-scm.com/downloads)

### Test Framework
* [Unit test](http://www.throwtheswitch.org/unity)

# Software Setup on Linux OS for C Programming
## IDE
* [Visula Studio Code](https://code.visualstudio.com/docs/cpp/config-linux) for compiling and debuggin the code.
* Compiling and running without IDE
```
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt-get install build-essential
```
* Compiling and running
```
    gcc filename.c -o outputname.out
    ./outputname.out
```
### Build tools
* Make for automating the build
```
    sudo apt-get install cmake
```
### Code Analysis
* [cppcheck](http://cppcheck.sourceforge.net/) for Static Analysis
* Valgrind for Heap analysis. Check usage [here](http://cs.ecs.baylor.edu/~donahoo/tools/valgrind/)
```
    sudo apt-get install valgrind
```
* [Memory Sanitization](https://lemire.me/blog/2016/04/20/no-more-leaks-with-sanitize-flags-in-gcc-and-clang/) using gcc and -fsanitize option

### Source code Management
* [git](https://git-scm.com/downloads)

### Test Framework
* [Unit test](http://www.throwtheswitch.org/unity)

# Setup VS code to Clone and Push from Github Repositories
## Step-1
* Create an Account on Github if you don't have an account already.
* If you have an account just sign in from Github.

## Step-2
* If you already have a repository created, jump to [Step-3](#step-3)
* Create a new repository
* Use available and meaningful name for your repository
* Select appropriate visibility for your repository. Public to make it visible for everyone on the internet. Private to make it visible only for you and contributors you add to your repository.
* Add the **README .md** and **.gitignore** files

## Step-3
* Clone your Repository to your local machine through VS Code
* Copy the Https link of your github repository from code written in the right.
* Use **CTRL + SHIFT + P** to open command pallette and type **clone** and select **Clone from GitHub**
* Paste the copied Https link and click Enter
* Select a folder where the repository should be saved on the machine
* Select **Open** option to open the Cloned Repository in VS Code
* Check that the contents of the repository are shown in the VS Code

## Step-4
* Create a new file in the VS Code
* Select the Source control Menu on the Left in VS code
* Add your new files to the [**staging area**](https://git-scm.com/about/staging-area#:~:text=Staging%20Area%20Unlike%20the%20other%20systems%2C%20Git%20has,be%20formatted%20and%20reviewed%20before%20completing%20the%20commit.) by clicking on **+** icon
* Add if you want a meaningful commit message according to the changes made and add to repository by clicking on **&#x2611;**
* From the dropdown, select push to push your local changes to the Github repository.
* On completion, refresh the explorer and verify the added files are visible.

# Command to Run Code Using Window & Linux

### What happen when you run your code in window and Linux
```
    ifdef OS
	    RM = del/q
	    FixPath = $(subst /,\,$1)
	    EXEC = exe
    else
	    ifeq ($(shell uname), Linux)
	        RM = rm -rf
	        FixPath = $1
		    EXEC = out
	    endif
    endif
 ```
 * When you run Your code in Window, it will generate **.exe** file
 * When you run your code in Linux, it will generate **.out** file 

### To run this project write the following commands step by step in your terminal: 
- make (Make command is used to complie the project codes)
- make run (Make run to execute the project)
- make test (Make test checks all your test cases whether it passes or fails)
- make cppcheck (Make cppcheck gives us the static analysis of the code)
- make debug (Make debug is used to debug the code)
- make valgrind (Make valgrind gives us the dynamic analysis of the code)
- make coverage (Make coverage helps us to measure of how well you are testing your project)

## If you want to know more about these commands you can read the futher ellaborated steps for each of these commands.

### To run all file, use Command
```
    all:$(BUILD_DIR)
	gcc $(INC_H) $(SRC) main.c -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
```
It will run the whole program including headerfile, source file and main file.

### To see the output, use command
```
    run: 	
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
```
It will show the output

### To run testfiles, use command 
```
    test:
	gcc $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	./$(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
```
### For cppcheck, use command
```
    cppcheck --enable=all $(SRC) main.c
```

### For debug, use command
```
    gcc -I $(INC_H) $(SRC) main.c -g -o $(BUILD_DIR)/$(PROJ_NAME).$(EXEC)
	gdb $(BUILD_DIR)/$(PROJ_NAME).$(EXEC)
```

### For valgrind, use command
```
    valgrind ./$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC)
```

### For coverage, use command
```
    gcc -fprofile-arcs -ftest-coverage $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) test_conversion.c
```
