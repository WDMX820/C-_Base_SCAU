#pragma once
//��д���ඨ��ͷ�ļ�date.h
#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class  Date
{
    int  year, month, day;   //�����ꡢ�¡���
    int  totalDays;   //�������Ǵӹ�ԪԪ��1��1�տ�ʼ�ĵڼ���
public:
    Date(int year, int month, int day);
    int  getYear() const { return year; }      //���巵�س��� year
    int  getMonth() const { return month; }    //���巵�س��� month
    int  getDay() const { return day; }        //���巵�س��� day
    void  show() const;			//�����ǰ����
    bool  isLeapYear(int year) const;	//�жϵ����Ƿ�Ϊ����
    int operator-(const Date& date) const { return date.totalDays - totalDays; }      //�����-����
};
#endif // DATE_H_INCLUDED
