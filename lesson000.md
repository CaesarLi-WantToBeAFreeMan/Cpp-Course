# Lesson #000: Introduction

# Author: Caesar James LEE

# Teaching Date: Friday, May 15, 2026

---

## `Python` vs `C++`

|           field            |     `Python`     |         `C++`          |
| :------------------------: | :--------------: | :--------------------: |
|         **block**          |   indentation    |          `{}`          |
|      **type system**       |  dynamic typing  |     static typing      |
| **changing variable type** |     allowed      |    **not** allowed     |
|      **end of line**       |   not required   |          `;`           |
|        **comment**         | `#` or `''' '''` |    `//` or `/* */`     |
|       **execution**        | executed dirctly | compiled then executed |

---

## Text Editor + Compiler (or IDE)

1. text editor: a tool used to write code.
2. compiler: turn code into a real program.
3. `IDE`: a large application that includes that includes many development tools together.

---

### Text Editors

1. `vim`/`neovim`
    - fast keyboard-based editor
    - has multiple modes
    - highly customizable
    - advanced tool for programmers

    > [!NOTE]
    > I use this as my daily editor.

    > [!IMPORTANT]
    > Not recommended for beginners.

2. `microsoft visual studio code`(`VS Code`)(**recommended**)
    - excellent for beginners
    - very popular
    - many useful extensions
    - almost industry standard for frontend development

    > [!NOTE]
    > Recommended for students.

3. `emacs`
    - powerful editor
    - highly customizable
    - famous among experienced programmers

    > [!NOTE]
    > I don't use it

4. `sublime text`
    - lightweight and fast
    - simpler user interface (`UI`)
    - good for small projects

    > [!NOTE]
    > I don't use it

5. `notepad++`
    - simple editor for `microsoft windows`
    - easy to install
    - lightweight

---

### Compilers

1. `g++`
    - most common `C++` compiler
    - free
    - good for beginners
    - used in many schools and competitions

    > [!NOTE]
    > often used in competitive programming.

2. `clang`
    - modern compiler
    - very good error messages
    - **default** compiler on `apple macos`

    > [!NOTE]
    > I use `clangd` as my C++ language LSP server.

---

### Integrated Development Environment (`IDE`)

An `IDE` often includes `text editor`, `compiler`, `debugger`, `pretty graphical UI`, `project tools`.

1. `microsoft visual studio`
    - very powerful IDE
    - common for professional C++ development on `microsoft windows`
    - large download size
    - many built-in features

    > [!NOTE]
    > I used it to build a win32 application.

2. `Dev-C++`
    - old but simple C++ IDE
    - still used in some schools and competitions
    - easy for beginners

---

## Versions of `C++`

| version | released year |           description           |
| :-----: | :-----------: | :-----------------------------: |
| `c++98` |     1998      |     first official version      |
| `c++03` |     2003      |       small improvements        |
| `c++11` |     2011      | first mordern version of `C++`  |
| `c++14` |     2014      |     introduced new features     |
| `c++17` |     2017      |      very popular version       |
| `c++20` |     2020      | introduced many modern features |
| `c++23` |     2023      |      latest major version       |
| `c++26` |     2026      |        upcoming version         |

---

## `Hello World` Program

```cpp
    #include <iostream>
    //using namespace std;

    int main(){
        std::cout << "Hello World" << std::endl;
        return 0;
    }
```

---

## Input

```cpp
    #include <iostream>
    #include <string>
    using namespace std;

    int main(){
        //declare a string variable
        string name;

        cout << "your name:\t";

        //input into variable
        cin >> name;

        cout << "your name is: " << name << endl;
        return 0;
    }
```

---

### Comparison Between `Python` And `C++` In `I/O`

| `Python`  |     `C++`      |
| :-------: | :------------: |
| `input()` | `std::cin >>`  |
| `print()` | `std::cout <<` |

---

## Variables

### Types

|     field     |     `Python`     |               `C++`                |
| :-----------: | :--------------: | :--------------------------------: |
|  **integer**  |      `int`       |    `int`, `long long` and so on    |
|  **decimal**  |     `float`      |    `float`, `double` and so on     |
|  **boolean**  |      `bool`      |               `bool`               |
| **character** | no separate type |               `char`               |
|  **string**   |      `str`       | `std::string`, `char []`, `char *` |

---

### Advantages of `Static Typing`

1. faster
2. safer
3. catch mistakes earlier

---

### Declaration

tells the compiler to create a variable
uninitialized variables may contain garbage values

`Python`:

```python
    n: int
```

`C++`:

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int n;
        return 0;
    }
```

---

### Assignment

gives a value to a variable

`Python`:

```python
    n = 1
```

`C++`:

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int n;
        n = 1;
        int a = 2;
        return 0;
    }
```

---

## Conditional Statements

allow programs to make decisions.

---

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
            cout << "not bad" << endl;//endl flushes buffer
                                    //endl is slower than \n
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

---

### `switch`

useful for checking many fixed values for one variable

> [!IMPORTANT]
> switch usually works with integer-like types

`Python`:

```python
    score = int(input("enter score:"))
    score //= 10

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
        case 5 | 4 | 3 | 2 | 1 | 0:
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
                break;
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

---

### Logical Operators

| operator |                meaning                | `Python` | `C++`  |
| :------: | :-----------------------------------: | :------: | :----: |
|   `==`   |               equal to                |   `==`   |  `==`  |
|   `!=`   |             not equal to              |   `!=`   |  `!=`  |
|   `>`    |             greater than              |   `>`    |  `>`   |
|   `<`    |               less than               |   `<`    |  `<`   |
|   `>=`   |       greater than or equal to        |   `>=`   |  `>=`  |
|   `<=`   |         less than or equal to         |  `<= `   |  `<=`  |
| **AND**  |    both conditions must be `true`     |  `and`   |  `&&`  |
|  **OR**  | at least one condition must be `true` |   `or`   | `\|\|` |
| **NOT**  |          reverse a condition          |  `not`   |  `!`   |

---

## Loop Statements

`loop statements` are used to repeat code.

---

### `for` Loop

useful for repeating code a specific number of times

> [!NOTE]
> most commonly used loop

`Python`

```python
    for i in range(5):
        print(i)
```

`C++`

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        for(int i = 0; i < 5; i++){//(initialization; condition; update)
            cout << i << endl;
        }
        return 0;
    }
```

---

### `while` Loop

useful for repeating code while a condition is `true`

> [!NOTE]
> I use it sometimes (but slightly less frequently than for loops).

`Python`:

```python
    i = 0
    while i < 5:
        print i
        i += 1
```

`C++`:

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int i = 0;//initialization
        while(i < 5){//condition
            cout << i << endl;
            i++;//i = i + 1, i += 1, update
            //cout << i++ << endl;  another write way
        }
    }
```

### `do-while` Loop

useful for running code at least **once**

> [!NOTE]
> I never use it in competitions.

`Python`:

doesn't have a built-in `do-while` loop

`C++`:

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int i = 0;
        do{
            cout << i++ << endl;
        }while(i < 5);
        return 0;
    }
```

### `continue` vs `break`

|  keyword   |       description        |
| :--------: | :----------------------: |
| `continue` |  skip current iteration  |
|  `break`   | stop the loop completely |

`Python`:

```python
    print("odd numbers in [0, 5]")
    for i in range(6):
        if i % 2 == 0:
            continue
        print(i)

    print("1 - 3:")
    for i in range(1, 5):
        if i > 3:
            break
        print(i)
```

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        cout << "odd numbers in [0, 5]" << endl;
        for(int i = 0; i < 6; i++){
            if(i % 2 == 0){//or !(i % 2), but not recommended
                continue;
            }
            cout << i << endl;
        }

        cout << "1 - 3:";
        for(int i = 0; i < 5; i++){
            if(i > 3){
                break;
            }
            cout << i << endl;
        }
        return 0;
    }
```

---

## Arithmetic Operators

used for mathematical calculations

| operator |      meaning       |      `Python`       |  `C++`  |
| :------: | :----------------: | :-----------------: | :-----: |
|   `+`    |      addition      |       `a + b`       | `a + b` |
|   `-`    |    subtraction     |       `a - b`       | `a - b` |
|   `*`    |   multiplication   |       `a * b`       | `a * b` |
|   `/`    |      devision      | `a // b` or `a / b` | `a / b` |
|   `%`    | modulo (remainder) |       `a % b`       | `a % b` |

---

## Assignment Operators

shorter way to update variables

| operator |      meaning       | `Pytho`  |  `C++`   |
| :------: | :----------------: | :------: | :------: |
|   `+=`   |   add and assign   | `a += 3` | `a += 3` |
|   `-=`   | sutract and assign | `a -= 3` | `a -= 3` |
|   `*=`   | mutiply and assign | `a *= 3` | `a *= 3` |
|   `/=`   |  divie and assign  | `a /= 3` | `a /= 3` |
|   `%=`   | modulo and assign  | `a %= 3` | `a %= 3` |

---

## Increment and Decrement Operators

`Python` doesn't have these operators

|        operator         |       meaning       | `C++` |
| :---------------------: | :-----------------: | :---: |
| `++` (`pre-increment`)  | calculate **first** | `++a` |
| `++` (`post-increment`) | calculate **later** | `a++` |
| `--` (`pre-decrement`)  | calculate **first** | `--a` |
| `--` (`post-decrement`) | calculate **later** | `a--` |
