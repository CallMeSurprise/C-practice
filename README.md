# C++-practice
This is for some practices in C++.

# Chapter6Pro
这是南邮本科课本的第六章末尾的学生管理系统，C++实现。
这里是简单实现，没有涉及String、vector等问题。照着书本实现后发现问题不断，调试几天才解决。
书上代码为VC++ 6.0，这里本人在VS2015下调试通过。


代码文件共计5个，为：Student.h、Student.cpp、Interface.h、Interface.cpp、Main.cpp。
Student对应学生类，维护基本信息，Interface类对应界面操作，新增学生信息、查询、显示、排序等操作，Main函数调用Interface类，程序跑起来。
## Tips
学生个数目前为2，可以在Interface类中设置参数N进行调整，来容纳更多地学生信息。
当然，更好的方式是接入数据库。

简单小Demo，热身小程序。