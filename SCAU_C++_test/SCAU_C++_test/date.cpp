//��д����ʵ���ļ�date.cpp
#include<iostream>
#include "date.h"
using namespace std;
Date::Date(int Year, int Month, int Day)
{
    year = Year;     //�긳ֵ
    month = Month;   //�¸�ֵ
    day = Day;       //�ո�ֵ
    int Days = 0;
    for (int i = 0; i < year; i++)
    {
        if (isLeapYear(i) == true)
            Days = Days + 366;   //����һ��366��
        else
            Days = Days + 365;   //������һ��365��
    }
    switch (month) {
    case 1:Days += 0; break;      //��ÿ��1�յ�1��1��������ʾ����
    case 2:Days += 31; break;     // һ������31��
    case 3:Days += 59; break;     // ��������28��
    case 4:Days += 90; break;     // ��������31��
    case 5:Days += 120; break;    // ��������30��
    case 6:Days += 151; break;    // ��������31��
    case 7:Days += 181; break;    // ��������30��
    case 8:Days += 212; break;    // ��������31��
    case 9:Days += 243; break;    // ��������31��
    case 10:Days += 273; break;   // ��������30��
    case 11:Days += 304; break;   // ʮ������31��
    case 12:Days += 334; break;   // ʮһ������30��
    default:cout << "month error!" << endl;
    }
    totalDays = Days + day;
}
void  Date::show() const
{
    cout << getYear() << "/" << getMonth() << "/" << getDay() << "\t";
}	//�����ǰ����
bool  Date::isLeapYear(int year) const
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}	//�жϵ����Ƿ�Ϊ����
