# Lesson #000: Introduction

# Author: Caesar James LEE

# Teaching Date: Friday, May 15, 2026

## `Python` vs `C++`

|              field              |     `Python`      |          `C++`           |
| :-----------------------------: | :---------------: | :----------------------: |
|            **block**            |    identation     |           `{}`           |
|            **type**             |      dynamic      |          static          |
| **changing type of a variable** |        can        |          cannot          |
|         **end of line**         |        ``         |           `;`            |
|           **comment**           |  `#` or `''''''`  |      `//` or `/**/`      |
|          **execution**          | execution dirctly | compiling then execution |

## Text Editor + Compiler (or IDE)

1. text editor: a tool that writes code.
2. compiler: turn code into a real program.
3. `IDE`: a big app that includes many tools together.

### Text Editor

1. `vim`/`neovim`
    - fast keyboard-based editor
    - has multiple modes
    - can greatly increase typing speed
    - highly customizable
    - advanced tool for programmers

    > [!info]
    > I use this as my daily editor.

    > [!important]
    > not recommended for beginners.

2. `microsoft visual studio code`(`VS Code`)(**recommended**)
    - excellent for beginners
    - very popular
    - has many useful extensions
    - almost industry standard for frontend development

    > [!info]
    > use this for now

3. `emacs`
    - powerful editor
    - highly customizable like `vim`/`neovim`
    - famous among experienced programmers

    > [!info]
    > never use it

4. `sublime text`
    - lightweight and fast
    - simpler user interface (`UI`)
    - good for small project

    > [!info]
    > never use it

5. `notepad++`
    - simple editor for `microsoft windows`
    - easy to install
    - lightweight

### Compiler

1. `g++`
    - most common `C++` compiler
    - free
    - good for programmers
    - used in many schools and competitions

    > [!info]
    > often use it

2. `clang`
    - modern compiler
    - very good error messages
    - default compiler on `apple macos`

    > [!info]
    > use it as LSP server

### Integrated Develop Environment (`IDE`)

An `IDE` often includes `text editor`, `compiler`, `debugger`, `pretty UI`, `project tools`.

1. `microsoft visual studio`
    - very powerful IDE
    - common professional C++ development on `microsoft windows`
    - large download sizes
    - many built-in features

    > [!info]
    > I used it to build a win32 app.

2. `Dev-C++`
    - old but simple C++ IDE
    - still used in some schools and competitions
    - easy for beginners

## Versions of `C++`

| version | released year |                                   description                                   |
| :-----: | :-----------: | :-----------------------------------------------------------------------------: |
| `c++98` |     1998      |                             first official version                              |
| `c++03` |     2003      |                               small improvements                                |
| `c++11` |     2011      | first version of modern `C++`, allowed version for `CSP-J`/`CSP-S`/`NOIP`/`NOI` |
| `c++14` |     2014      |                                add some features                                |
| `c++17` |     2017      |                very popular version, allowed version for `USACO`                |
| `c++20` |     2020      |                                add some features                                |
| `c++23` |     2023      |                                add some features                                |
| `c++26` |     2026      |                                add some features                                |

## `Hello World` Program

```cpp
    //include iostream library
    //think of using a input/output tool
    #include <iostream>
    //use std namespace, offen use in competititonal programs
    //but do not use in indutrial programs
    //using namespace std;

    //start point of a program
    int main(){
        //output Hello World on the screen, and move cursor to the next line
        std::cout << "Hello World" << std::endl;
        //end the program
        //0 means program operate successfully
        return 0;
    }
```

## Input

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        cout << "your name:\t";
        //declare a string variable
        string name;
        //input to name variable
        cin >> name;

        cout << "your name is: " << name << endl;
        return 0;
    }
```

### Comperison Between `Python` And `C++` In `I/O`

| `Python`  |     `C++`      |
| :-------: | :------------: |
| `input()` | `std::cin >>`  |
| `print()` | `std::cout <<` |

## Variables

### Types

|     field     | `Python` |               `C++`                |
| :-----------: | :------: | :--------------------------------: |
|  **integer**  |  `int`   |    `int`, `long long` and so on    |
|  **decimal**  | `float`  |    `float`, `double` and so on     |
|  **boolean**  |  `bool`  |               `bool`               |
| **character** |    no    |               `char`               |
|  **string**   |  `str`   | `std::string`, `char []`, `char *` |

### Advantages of `Static Typing`

1. faster
2. safer
3. catch mistakes earlier

## Conditional Statements

Conditional statements allow programs to make decisions.

### `if`

`Python`:

```python
    score = int(input("enter score:"))

    if score >= 100:
        print("excellent")
    elif score >= 90:
        print("very good")
    elif score >= 80:
        print("good")
    elif score >= 70:
        print("not bad")
    elif score >= 60:
        print("pass")
    elif score >= 0:
        print("failure")
    else:
        print("invalid score")
```

`C++`:

```c++
    #include <iostream>
    using namespace std;

    int main(){
        cout << "enter score:";
        int score;
        cin >> score;

        if(score >= 100){
            cout << "excellent\n";//good code styling
        }else if(score >= 90)
            cout << "very good\n";//allowed, but not recommended
        else if(score >= 80)cout << "good\n";//allowd, but not recommended
        else if(score >= 70){
            cout << "not bad" << endl;//endl is better than \n
                                    //endl does extra operations like clear cache
        }else if(score >= 60){
            cout << "pass" << endl;
        }else if(score >= 0){
            cout << "failure" << endl;
        }else{
            cout << "invalid score" << endl;
        }
        return 0;
    }
```

### `switch`

`switch` is a multi-if statement.
`switch` is useful when a variable has multiple possible values

> [!important]
> you cannot validate a string in switch

`Python`:

```python
    score = int(input("enter score:"))
    score /= 10

    match score:
        case 10:
            print("excellent")
        case 9:
            print("very good")
        case 8:
            print("good")
        case 7:
            print("not bad")
        case 6:
            print("pass")
        case 5, case 4, case 3, case 2, case 1, case 0:
            print("failure")
        case _:
            print("invalid score")
```

`C++`:

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        cout << "enter score:";
        int score;
        cin >> score;

        switch(score / 10){
            case 10:
                cout << "excellent" << endl;
                break;//break the statement
            case 9:
                cout << "very good" << endl;
                break;
            case 8:
                cout << "good" << endl;
                break;
            case 7:
                cout << "not bad" << endl;
                break;
            case 6:
                cout << "pass" << endl;
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                cout << "failure" << endl;
                break;
            default:
                cout << "invalid score" << endl;
                break;//default
        }
        return 0;
    }
```

### Logical Operators

| operator |                 meaning                  | `Python` | `C++`  |
| :------: | :--------------------------------------: | :------: | :----: |
|   `==`   |                eequal to                 |   `==`   |  `==`  |
|   `!=`   |               not equal to               |   `!=`   |  `!=`  |
|   `>`    |               greater than               |   `>`    |  `>`   |
|   `<`    |                less than                 |   `<`    |  `<`   |
|   `>=`   |         greater than or equal to         |   `>=`   |  `>=`  |
|   `<=`   |          less than or equal to           |  `<= `   |  `<=`  |
| **AND**  |      two conditions must be matched      |  `and`   |  `&&`  |
|  **OR**  | either of two conditions must be matched |   `or`   | `\|\|` |
| **NOT**  |           reverse a condition            |  `not`   |  `!`   |

## Loop Statements

`loop statements` are used to repeat code.
