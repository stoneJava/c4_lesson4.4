# c4_lesson4.4
1，构造函数、复制构造函数、析构函数的学习，以及调用规则。
2， 如果函数形参是类对象，调用函数时，进行形参和实参的结合时，需要调用复制构造函数，
    因为传对象时时传值方式，需要产生一个副本，这就是临时对象，调用复制构造函数产生
    副本，在函数退出时调用析构函数析构临时对象。
