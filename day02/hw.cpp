#include <iostream>
using namespace std;
/**
    *函数功能：返回a和b的最大值
      *a和b是两个整数
        */
int getMax(int a, int b)
{
        return a > b ? a : b;
}

/**
    * 函数功能：返回数组中的最大值
      * arr：整型数组
        * count：数组长度
          * 该函数是对上面函数的重载
            */
int getMax(int *p,int count)
{
        //定义一个变量并获取数组的第一个元素
        int maxNum = p[0];
            for(int i = 1; i < count; i++)
                    {
                                //比较变量与下一个元素的大小
                                if(p[0] < p[i])
                                            {
                                                            //如果数组中的元素比maxNum大，则获取数组中的值
                                                            maxNum = p[i];
                                                                    }   
                                    }
                return maxNum;
}

int main(void)
{
        //定义int数组并初始化
        int numArr[3] = {3, 8, 6};
            
            //自动调用int getMax(int a, int b)
            cout << getMax(numArr[0], numArr[1]) << endl;
                
                //自动调用返回数组中最大值的函数返回数组中的最大值
                cout << getMax(numArr,3) << endl;
                    return 0;
}