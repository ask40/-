#include<iostream>
#include <ctype.h>
#include <fstream> 
#include <string>
#include <sstream>
using namespace std;
struct Key {
    string KeyName;
    int KeyNum;
};
Key key[32] = { {"auto",0},{"break",0},{"case",0} ,{"char",0},{"const",0},{"continue",0},{"default",0}
,{"do",0},{"double",0},{"else",0},{"enum",0}, {"extern",0}, {"float",0},{"for",0},{"goto",0}, {"if",0}
,{"int",0},{"long",0},{"register",0},{"return",0}, {"short",0},{"signed",0},{"sizeof",0}, {"static",0}
,{"struct",0}, {"switch",0},{"typedef",0}, {"union",0}, {"unsigned",0}, {"void",0},{"volatile",0},{"while",0} };

void Search(int index, int len, const string& str) {
    string wd;

    if (index == 0)
    {
        if (isalpha(str[index]))
        {
            wd += str[index];
        }
        index = 1;
    }
    for (int i = index; i < len; i++)
    {
        if (isalpha(str[i])) // 拼接单词
        {
            wd += str[i];
        }
        else if (isalpha(str[i - 1]) && !isalpha(str[i])) // 找到一个单词
        {
            for (int j = 0; j < 32; j++)
            {
                if (wd == key[j].KeyName)
                {
                    key[j].KeyNum++;
                }
            }
            wd = "";  // wd 设置为空，重新开始下一个单词的拼接
        }
    }
}

int main()
{
    int i = 0,sum=0,grade;
    string FilePath,test,t;
    cout << "请输入文件路径：";
    cin >> FilePath;
    cout << "1:total num" << endl;
    cout << "2:switch and case num" << endl;
    cout << "3:if else num" << endl;
    cout << "4:if，else if，else num" << endl;
    cout << "请输入查询等级：";
    cin >> grade;
    while (grade != 1)
    {
        cout << "功能未实现，请重新输入：";
        cin >> grade;
    }
    fstream file(FilePath);
    while (file >> t)
    {
        test += t;
        test += " ";
    }
    Search(0,test.length(), test);
    file.close();
   
        for(i = 0; i < 32; i++)
        {
            sum += key[i].KeyNum;
            
        }
        cout << "total num:" << " " << sum<<endl;
        
    
}