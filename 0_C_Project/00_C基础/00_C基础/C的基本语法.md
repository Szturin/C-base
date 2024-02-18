# [C语言]基本语法补充01

### 2024.1.9更新



    #define _CRT_SECURE_NO_WARNINGS 1
    #include<stdio.h>
    typedef	unsigned int u_int;
    //mark
    int main4()
    {
        //关于操作符的补充
        //+ - * / % 
        int a = 9 / 2;//整数除法
        float b = 9 / 2;//整数除法
        float c = 9 / 2.0;//输出为小数
        printf("%d\n", a);
        printf("%f\n", b);
        printf("%f\n", c);//正确结果

        //移位操作符
        int a1 = 2;//0010,此处省略n个0...
        int b1 = a1 << 1;//左移操作符，移动的是二进制位
        printf("%d\n", b1);//0100
        //位操作符：& 按位与 | 按位或 ^ 按位异或
        //赋值操作符 += -= *= /= ...
        //单目操作符：!（逻辑取反） - + &  
        // *:间接访问操作符（解引用操作符）
        //PS: a+b 有两个操作数，此处+为双目操作符

        //sizeof是一个操作符，不是函数
        sizeof(a);//通常使用方法
        sizeof a;

        printf("%d\n", !a);//非0即真
        a = -a;
        printf("%d\n", a);

        //mark:为什么a按位取反后，输出结果为-1;
        //~
        a = 0;//二进制位32个bit
        printf("%d\n", ~a);//结果为-1，按位取反，位即二进制位，按位取反包括符号位(bit31)，补码反码转换符号位不变
        //数据在内存中存储的是补码

        //int b = (++a) + (++a) + (++a);//不建议使用的表达
        
        //强制类型转换
        //int a = (int)3.14;

        //&&逻辑与 ||逻辑或

        //条件操作符（三目操作符）? :
        int a2 = 1;
        int b2 = 2;
        int max = 0;

        if (a2 > b2)
        {
            max = a2;
        }
        else
        {
            max = b2;
        }
        printf("%d\n", max);

        max = a2 > b2 ? a2 : b2;
        printf("%d\n", max);

        //逗号表达式
        //逗号表达式从左向右依次计算
        int a3 = 0;
        int b3 = 3;
        int c3 = 5;
        int d3 = (a3 = b3 + 3, b3 = c3 - a3, c3 = a3 + b3);
        //整个表达式是结果是最后一个表达式的结果
        printf("%d", d3);


        //下标引用，函数调用和结构成员
        //[] () , ->

        //调用函数的时候，函数名后面的()
        printf("hi\n");
        printf("%d",100);

    //-------------------------------------------------------------------------------------------------//

        //C语言的关键字
        //1.无法自己创建
        //2.不能作变量名
        //3.

        {
            auto int a0 = 10;//自动创建，自动销毁 -自动变量
            //auto 通常省略
        }
        //extern用来申明外部符号
        //register寄存器关键字
        
        //频繁被使用的数据，可以存储在寄存器中，提升效率
        //计算机中效率最快的是寄存器
        //现代编译器会自动将数据处理到寄存器中，所以register一般不使用

        register int Number = 849797;

        //signed 有符号的 10 -10
        //unsigned 无符号的

        //static 静态的
        //union 联合体(共用体)
        //void 无 空

        //volatile
        
        //类型重命名
        //define,include不是关键字，为预处理命令

        unsigned int num11 = 100;
        u_int num2 = 100;	

        return 0;

    }	
