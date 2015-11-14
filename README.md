dlex
==============

哈工大编译原理实验词法分析器
语法分析器请见https://github.com/dontpanic92/dparse


dlex文件语法
==============

dlex文件一行表示一种token，每一列的意义分别为

<table><tr><td>ID</td><td>名称</td><td>行为</td><td>正则表达式</td></tr></table>

名称：为token的标志名，将在parse阶段使用。
行为：目前支持Accept以及Omit。被设置为Omit的token将被忽略。
支持正则表达式：支持由简易的正则表达式构成的token词法描述。

实现原理
==============
一个简易的正则表达式引擎。
