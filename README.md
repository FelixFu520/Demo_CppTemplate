# Demo_CppTemplate
- [视频](https://www.bilibili.com/video/BV1n94y127rH/?p=1)
## 目录
- `None`:  什么是模板？
- `002.hpp`: 函数模板
- `003.hpp`: 类模板
- `004.hpp`: typename关键字
- `005.hpp`: 模板的全特化与偏特化
- `006.hpp`: 类模板的静态成员
- `007.hpp`: 内部类模板
- `008.hpp`: 类模板继承
- `009.hpp`: 模板形参之类型参数
- `010.hpp`: 模板形参之非类型参数
- `011.hpp`: 模板形参之非类型参数
- `012.hpp`: 模板类型推导
- `013.hpp`: 模板递归
- `None`: 模板元编程
- `015.hpp`: 编译期if switch结构
- `016.hpp`: 编译期for结构
- `017.hpp`: traits介绍

## 结果
```
$./cppT 
**********002!
1110
3.579
3.579
102.345
**********003!
1110
999
5.801
4.567
5.801
4.567
**********004!
Pi
**********005!
A <T1,T2>: print!
A <int,float>: print!
A <int,float>: show!
A <int,float>: show!
A <T1,float>: show!
test<T1,T2>！
test<int,int>！
test<T1,T2>！
**********006!
111
222
111
111
333.33
666
A
**********007!
Outer print!
Inner print!
**********008!
A0 111
B0 1.234
A2 111
B2 1.234
A3 123
B3 1.234
A4 123
B4 1.234
A5 123
B5 1.234
**********009!
112.234
**********010!
40
80
hello world!
100
100
666
**********011!
B
A
B1
A1
**********012!
PPPi
42, i, 3
10, c, l
v    1S    d
10    
c,A
l
f
Pc
Pc
Pd
A20_d
i
i
d
A6_c
f
**********013!
297
16
17
**********015!
为真执行语句！
为假执行语句！
执行 case 1语句！
执行 case 2语句！
执行default默认语句！
**********016!
循环的执行语句100
循环的执行语句99
循环的执行语句98
循环的执行语句97
循环的执行语句96
循环的执行语句95
循环的执行语句94
循环的执行语句93
循环的执行语句92
循环的执行语句91
循环的执行语句90
循环的执行语句89
循环的执行语句88
循环的执行语句87
循环的执行语句86
循环的执行语句85
循环的执行语句84
循环的执行语句83
循环的执行语句82
循环的执行语句81
循环的执行语句80
循环的执行语句79
循环的执行语句78
循环的执行语句77
循环的执行语句76
循环的执行语句75
循环的执行语句74
循环的执行语句73
循环的执行语句72
循环的执行语句71
循环的执行语句70
循环的执行语句69
循环的执行语句68
循环的执行语句67
循环的执行语句66
循环的执行语句65
循环的执行语句64
循环的执行语句63
循环的执行语句62
循环的执行语句61
循环的执行语句60
循环的执行语句59
循环的执行语句58
循环的执行语句57
循环的执行语句56
循环的执行语句55
循环的执行语句54
循环的执行语句53
循环的执行语句52
循环的执行语句51
循环的执行语句50
循环的执行语句49
循环的执行语句48
循环的执行语句47
循环的执行语句46
循环的执行语句45
循环的执行语句44
循环的执行语句43
循环的执行语句42
循环的执行语句41
循环的执行语句40
循环的执行语句39
循环的执行语句38
循环的执行语句37
循环的执行语句36
循环的执行语句35
循环的执行语句34
循环的执行语句33
循环的执行语句32
循环的执行语句31
循环的执行语句30
循环的执行语句29
循环的执行语句28
循环的执行语句27
循环的执行语句26
循环的执行语句25
循环的执行语句24
循环的执行语句23
循环的执行语句22
循环的执行语句21
循环的执行语句20
循环的执行语句19
循环的执行语句18
循环的执行语句17
循环的执行语句16
循环的执行语句15
循环的执行语句14
循环的执行语句13
循环的执行语句12
循环的执行语句11
循环的执行语句10
循环的执行语句9
循环的执行语句8
循环的执行语句7
循环的执行语句6
循环的执行语句5
循环的执行语句4
循环的执行语句3
循环的执行语句2
循环的执行语句1
**********017!
true
false
int: false
int*: true
int**: true
int(*)(int): true
int: false
int[3]: true
array<int,3>: false
string: false
string[3]: true
int, int: false
A, A: true
A, B: true
A, const B: true
A&, B&: false
B, A: false
false
true
false
true
false
------------------------
true
false
true
false
true
false
```