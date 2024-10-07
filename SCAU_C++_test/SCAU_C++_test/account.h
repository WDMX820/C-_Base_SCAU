#pragma once
//��д���ඨ��ͷ�ļ�account.h
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include"date.h"
class Account                       //����
{
protected:
    int id;     //�����ʺţ����ͣ�
    double balance;     //�������
    static double total;      //�����ܶ�
public:
    Account(int id, double balance);
    const int getId() { return id; }
    const double getBalance() { return balance; }
    static void getTotal();
    virtual void deposit(Date date, double amount) = 0;
    virtual void withdraw(Date date, double amount) = 0;
    virtual void settle(Date date) = 0;
    virtual void show();
};
class SavingsAccount :public Account     //�����
{
protected:
    double rate;    //��������
    Date lastDate;    //�ϴα����������
    double accumulation = 0;   //�����ۼ�֮��
    const double accumulate(Date date);    //��õ�ָ������Ϊֹ�Ĵ������ۻ�ֵ
public:
    SavingsAccount(int year, int month, int day, int id, double balance, double rate);//���캯���Ͷ���
    void deposit(Date date, double amount);     //�����ֽ�dateΪ���ڣ�amountΪ���
    void withdraw(Date date, double amount);    //ȡ���ֽ�dateΪ���ڣ�amountΪ���
    void settle(Date date);       //������Ϣ��1��1�յ��ú���
    const double getRate() { return rate; }     //���巵�� Rate
    void show();
};
class CreditAccount :public Account  //���ÿ���
{
protected:
    double credit;      //���
    double rate;        //����
    double fee;         //���
    Date lastDate;
public:
    CreditAccount(int year, int month, int day, int id, double balance, double credit, double rate, double fee);
    double getAvailableCredit() { return credit; }     //���ö��
    void deposit(Date date, double amount);
    void withdraw(Date date, double amount);
    double getDebt(Date date);                       //Ƿ����
    void settle(Date date);
    void show();
};
#endif // ACCOUNT_H_INCLUDED
