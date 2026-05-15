# 第000课：介绍

# 作者：Caesar James LEE

# 授课日期：2026年5月15日，星期五

---

## `Python` vs `C++`

|       项目       |     `Python`     |      `C++`      |
| :--------------: | :--------------: | :-------------: |
|    **代码块**    |       缩进       |      `{}`       |
|   **类型系统**   |     动态类型     |    静态类型     |
| **变量类型修改** |       允许       |   **不**允许    |
|   **行结束符**   |      不需要      |       `;`       |
|     **注释**     | `#` 或 `''' '''` | `//` 或 `/* */` |
|   **执行方式**   |     直接执行     |  先编译后执行   |

---

## 文本编辑器 + 编译器（或 IDE）

1. 文本编辑器：用于编写代码的工具。
2. 编译器：把代码转换成真正的程序。
3. `IDE`：包含多个开发工具的大型应用程序。

---

### 文本编辑器

1. `vim` / `neovim`
    - 基于键盘操作，速度很快
    - 有多种模式
    - 高度可自定义
    - 面向程序员的高级工具

> [!NOTE]
> 我平时主要用这个编辑器。

> [!IMPORTANT]
> 不推荐初学者使用。

2. `microsoft visual studio code`（`VS Code`）（**推荐**）
    - 对初学者非常友好
    - 非常流行
    - 有很多实用扩展
    - 几乎算是前端开发行业标准

> [!NOTE]
> 推荐学生使用。

3. `emacs`
    - 功能强大的编辑器
    - 高度可自定义
    - 在资深程序员中很有名

> [!NOTE]
> 我不用它。

4. `sublime text`
    - 轻量且快速
    - 用户界面（`UI`）更简单
    - 适合小型项目

> [!NOTE]
> 我不用它。

5. `notepad++`
    - `microsoft windows` 上的简单编辑器
    - 容易安装
    - 很轻量

---

### 编译器

1. `g++`
    - 最常见的 `C++` 编译器
    - 免费
    - 适合初学者
    - 很多学校和竞赛都会使用

> [!NOTE]
> 竞赛编程中经常使用。

2. `clang`
    - 现代化编译器
    - 错误提示非常优秀
    - `apple macos` 默认编译器

> [!NOTE]
> 我使用 `clangd` 作为 C++ 的 LSP 服务。

---

### 集成开发环境（`IDE`）

一个 `IDE` 通常包含：`文本编辑器`、`编译器`、`调试器`、`漂亮的图形界面 UI`、`项目工具`。

1. `microsoft visual studio`
    - 功能非常强大的 IDE
    - 常用于 `microsoft windows` 平台上的专业 C++ 开发
    - 下载体积较大
    - 有很多内置功能

> [!NOTE]
> 我曾经用它开发 win32 应用程序。

2. `Dev-C++`
    - 老旧但简单的 C++ IDE
    - 一些学校和竞赛仍然在使用
    - 对初学者友好

---

## `C++` 的版本

|  版本   | 发布年份 |          描述           |
| :-----: | :------: | :---------------------: |
| `c++98` |   1998   |     第一个正式版本      |
| `c++03` |   2003   |        小幅改进         |
| `c++11` |   2011   | 第一个现代化 `C++` 版本 |
| `c++14` |   2014   |       引入新特性        |
| `c++17` |   2017   |     非常流行的版本      |
| `c++20` |   2020   |    引入许多现代特性     |
| `c++23` |   2023   |      最新主要版本       |
| `c++26` |   2026   |     即将到来的版本      |

---

## `Hello World` 程序

```cpp
    #include <iostream>
    //using namespace std;

    int main(){
        std::cout << "Hello World" << std::endl;
        return 0;
    }
```

---

## 输入（Input）

```cpp
    #include <iostream>
    #include <string>
    using namespace std;

    int main(){
        //声明一个字符串变量
        string name;

        cout << "your name:\t";

        //输入到变量中
        cin >> name;

        cout << "your name is: " << name << endl;
        return 0;
    }
```

---

### `Python` 与 `C++` 的输入输出对比

| `Python`  |     `C++`      |
| :-------: | :------------: |
| `input()` | `std::cin >>`  |
| `print()` | `std::cout <<` |

---

## 变量（Variables）

### 类型（Types）

|    项目    |     `Python`     |               `C++`                |
| :--------: | :--------------: | :--------------------------------: |
|  **整数**  |      `int`       |       `int`、`long long` 等        |
|  **小数**  |     `float`      |        `float`、`double` 等        |
| **布尔值** |      `bool`      |               `bool`               |
|  **字符**  | 没有独立字符类型 |               `char`               |
| **字符串** |      `str`       | `std::string`、`char []`、`char *` |

---

### 静态类型的优点

1. 更快
2. 更安全
3. 更早发现错误

---

### 声明（Declaration）

告诉编译器创建一个变量。
未初始化变量可能包含垃圾值。

`Python`：

```python
    n: int
```

`C++`：

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int n;
        return 0;
    }
```

---

### 赋值（Assignment）

给变量赋一个值。

`Python`：

```python
    n = 1
```

`C++`：

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

## 条件语句（Conditional Statements）

用于让程序进行判断。

---

### `if`

`Python`：

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

`C++`：

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        cout << "enter score:";
        int score;
        cin >> score;

        if(score >= 100){
            cout << "excellent";//好的代码风格
        }else if(score >= 90)
            cout << "very good";//允许，但不推荐
        else if(score >= 80)cout << "good";//允许，但不推荐
        else if(score >= 70){
            cout << "not bad" << endl;//endl 会刷新缓冲区
                                    //endl 比更慢
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

适用于对同一个变量检查多个固定值。

> [!IMPORTANT]
> `switch` 通常用于整数类型或类似整数的类型。

`Python`：

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

`C++`：

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

### 逻辑运算符（Logical Operators）

| 运算符  |          含义           | `Python` | `C++`  |
| :-----: | :---------------------: | :------: | :----: |
|  `==`   |          等于           |   `==`   |  `==`  |
|  `!=`   |         不等于          |   `!=`   |  `!=`  |
|   `>`   |          大于           |   `>`    |  `>`   |
|   `<`   |          小于           |   `<`    |  `<`   |
|  `>=`   |        大于等于         |   `>=`   |  `>=`  |
|  `<=`   |        小于等于         |   `<=`   |  `<=`  |
| **AND** | 两个条件都必须为 `true` |  `and`   |  `&&`  |
| **OR**  |  至少一个条件为 `true`  |   `or`   | `\|\|` |
| **NOT** |        反转条件         |  `not`   |  `!`   |

---

## 循环语句（Loop Statements）

`循环语句` 用于重复执行代码。

---

### `for` 循环

适用于重复执行固定次数的代码。

> [!NOTE]
> 最常用的循环。

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
        for(int i = 0; i < 5; i++){//(初始化; 条件; 更新)
            cout << i << endl;
        }
        return 0;
    }
```

---

### `while` 循环

适用于在条件为 `true` 时重复执行代码。

> [!NOTE]
> 我有时会使用它（但比 for 循环稍少）。

`Python`：

```python
    i = 0
    while i < 5:
        print i
        i += 1
```

`C++`：

```cpp
    #include <iostream>
    using namespace std;

    int main(){
        int i = 0;//初始化
        while(i < 5){//条件
            cout << i << endl;
            i++;//i = i + 1, i += 1, 更新
            //cout << i++ << endl; 另一种写法
        }
    }
```

### `do-while` 循环

适用于至少执行 **一次** 的代码。

> [!NOTE]
> 我在竞赛中从来不用它。

`Python`：

没有内置的 `do-while` 循环。

`C++`：

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

### `continue` 与 `break`

|   关键字   |     描述     |
| :--------: | :----------: |
| `continue` | 跳过当前循环 |
|  `break`   | 直接结束循环 |

`Python`：

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
            if(i % 2 == 0){//或者 !(i % 2)，但不推荐
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

## 算术运算符（Arithmetic Operators）

用于数学计算。

| 运算符 |     含义     |      `Python`       |  `C++`  |
| :----: | :----------: | :-----------------: | :-----: |
|  `+`   |     加法     |       `a + b`       | `a + b` |
|  `-`   |     减法     |       `a - b`       | `a - b` |
|  `*`   |     乘法     |       `a * b`       | `a * b` |
|  `/`   |     除法     | `a // b` 或 `a / b` | `a / b` |
|  `%`   | 取模（余数） |       `a % b`       | `a % b` |

---

## 赋值运算符（Assignment Operators）

用于更简洁地更新变量。

| 运算符 |    含义    | `Python` |  `C++`   |
| :----: | :--------: | :------: | :------: |
|  `+=`  |  加后赋值  | `a += 3` | `a += 3` |
|  `-=`  |  减后赋值  | `a -= 3` | `a -= 3` |
|  `*=`  |  乘后赋值  | `a *= 3` | `a *= 3` |
|  `/=`  |  除后赋值  | `a /= 3` | `a /= 3` |
|  `%=`  | 取模后赋值 | `a %= 3` | `a %= 3` |

---

## 自增与自减运算符（Increment and Decrement Operators）

`Python` 没有这些运算符。

|      运算符      |  含义  | `C++` |
| :--------------: | :----: | :---: |
| `++`（前置自增） | 先计算 | `++a` |
| `++`（后置自增） | 后计算 | `a++` |
| `--`（前置自减） | 先计算 | `--a` |
| `--`（后置自减） | 后计算 | `a--` |
