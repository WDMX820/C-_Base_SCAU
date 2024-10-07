//�ڶ��׶Σ�ͨѶ¼����ϵͳ

/*
ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�
���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ

ϵͳ����Ҫʵ�ֵĹ�������:
1�������ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ����(�������Ա����䡢��ϵ�绰����ͥסַ)����¼1000��
�����ϵ��ʵ�ֲ���:
  1.1 �����ϵ�˽ṹ��
  1.2 ���ͨѶ¼�ṹ��
  1.3 main�����д���ͨѶ¼
  1.4 ��װ�����ϵ�˺���
  1.5 ���������ϵ�˹���

2����ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
��ʾ��ϵ��ʵ�ֲ���:
  2.1 ��װ��ʾ��ϵ�˺���
  2.2 ������ʾ��ϵ�˹���

3��ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
ɾ����ϵ��ʵ�ֲ���:
  3.1 ��װ�����ϵ���Ƿ����
  3.2 ��װɾ����ϵ�˺���
  3.3 ����ɾ����ϵ�˹���

4��������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
������ϵ��ʵ�ֲ���:
  4.1 ��װ������ϵ�˺���
  4.2 ���Բ���ָ����ϵ��

5���޸���ϵ�ˣ��������������޸�ָ����ϵ��
�޸���ϵ��ʵ�ֲ���:
  5.1 ��װ�޸���ϵ�˺���
  5.2 �����޸���ϵ�˹���

6�������ϵ�ˣ����ͨѶ¼��������Ϣ
�����ϵ��ʵ�ֲ���
  6.1 ��װ�����ϵ�˺���
  6.2 ���������ϵ��

7���˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼
*/


//Task1 - �˵�����
// 
//-��װ������ʾ�ý��� �� void showMenu()
//-��main�����е��÷�װ�õĺ���

//ע������ѽṹ����Ϊ�������ݽ������������ֵ���ݲ�������"."������ǵ�ַ���ݲ�������"->"

#include<iostream>
using namespace std;
#include<string>
#include "System1.h"
#define MAX 1000   //����곣������������޸�

// �����ϵ�˽ṹ��
struct person
{
	string m_name;     //���� - m_name��m��ָ��Ա����
	int m_sex;         //�Ա�  1 ��  2 Ů
	int m_age;           //����
	string m_phone;    //�绰
	string m_address;  //��ַ
};

// ���ͨѶ¼�ṹ��
struct addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct person personarray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_size;
};


// 0 - �˵����� - showMenu����
void showMenu()
{
	cout << "*****************************" << endl;
	cout << "******  1�������ϵ��  ******" << endl;
	cout << "******  2����ʾ��ϵ��  ******" << endl;
	cout << "******  3��ɾ����ϵ��  ******" << endl;
	cout << "******  4��������ϵ��  ******" << endl;
	cout << "******  5���޸���ϵ��  ******" << endl;
	cout << "******  6�������ϵ��  ******" << endl;
	cout << "******  0���˳�ͨѶ¼  ******" << endl;
	cout << "*****************************" << endl;
}


// 1 - �����ϵ�˺���
void addperson(addressbooks* abs)  //�õ�ַ���ݣ�����������abs�ĵ�ַ�������޸���������ʵ��
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_size == MAX)  //�����е�����"."����ַ�е�����"->"����"->"��ͨ���ṹ��ָ����ʽṹ���е�����
	{
		cout << "ͨѶ¼���������޷���ӣ�" << endl;
		return;
	}
	else
	{
		cout << "��ʾ������������ʾ�����������ݣ����ܻᵼ����ѭ������������룡" << endl;
		//��Ӿ�����ϵ��
		//1������
		string name;   //�������������ϵ���������β�name
		cout << "������������";
		cin >> name;
		//���� abs->personarray��ָabs�������ͨѶ¼�����еĳ�Ա����personarray
		//���� abs->m_size��ָ�ڼ�����ϵ��(��0��ʼ)��".m_name"��ȡ����Ӧperson�����ֲ����ֵ
		abs->personarray[abs->m_size].m_name = name;  //��ǰ2��ע��

		//2���Ա�
		int sex = 0;   //�������������ϵ���Ա���β�sex
		cout << "�������Ա�1:��|2:Ů����";
		while (true)
		{
			//���������� 1 ���� 2 �����˳�ѭ������Ϊ���������ȷֵ
			//���������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->m_size].m_sex = sex;  //��ǰ�����ƽ���
				break;
			}
			else
			{
				cout << "������1(��)����2(Ů)���˴������������Ա�" << endl;
			}
		}

		//3������
		int age = 0;
		cout << "���������䣺";
		while (true)
		{
			//���������� 0 ���� 150 �����˳�ѭ������Ϊ���������ȷֵ
			//���������������������
			cin >> age;
			if (age <= 150 || age >= 0)
			{
				abs->personarray[abs->m_size].m_age = age;  //��ǰ�����ƽ���
				break;
			}
			else
			{
				cout << "������0-150�����ǵ����˲��������ˣ�" << endl;
			}
		}

		//4���绰
		cout << "��������ϵ�绰��";
		string phone;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;

		//5����ַ
		cout << "�������ͥסַ��";
		string address;
		cin >> address;
		abs->personarray[abs->m_size].m_address = address;

		//6��֪ͨ��������ӳɹ�
		cout << "�����ϵ��" << abs->personarray[abs->m_size].m_name << "�ɹ���" << endl;

		//7������ͨѶ¼����
		abs->m_size++;

		//8�������������������֮��������
		system("pause");  //�밴���������
		system("cls");    //��������������������
	}
}


// 2 - ��ʾ������ϵ�� - showperson����
void showperson(addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "��" << i + 1 << "����ϵ�˵���Ϣ���£�" << endl;
			cout << "������" << abs->personarray[i].m_name << "\t";
			// �Ա� ʹ����Ŀ������������1������У�����1�����Ů
			cout << "�Ա�" << (abs->personarray[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personarray[i].m_age << "\t";
			cout << "�绰��" << abs->personarray[i].m_phone << "\t";
			cout << "��ַ��" << abs->personarray[i].m_address << endl;
		}
	}
	system("pause");  //�밴���������
	system("cls");    //��������������������
}


//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1 ͨѶ¼    ����2 �Ա�����
int isexist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		//�ҵ��û������������
		if (abs->personarray[i].m_name == name)
		{
			return i;   //�ҵ��ˣ�����������������е��±���
		}
	}
	return -1;  //�������������û���ҵ�������-1
}


// 3 - ɾ��ָ����ϵ�� - deleteperson����
void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�";

	string name;
	cin >> name;

	// ret == -1 δ�鵽
	// ret != -1 �鵽�� ���ҷ��ص�����ϵ���������е��±���
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_size; i++)
		{
			//����ǰ��(����ǰ�Ƹ���)
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->m_size--;  //����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");  //�밴���������
	system("cls");    //��������������������
}


// 4 - ����ָ����ϵ�� - findperson����
void findperson(addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�";
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isexist(abs, name);
	if (ret != -1)  //�ҵ���ϵ��
	{
		cout << "������" << abs->personarray[ret].m_name << "\t";
		cout << "�Ա�" << (abs->personarray[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personarray[ret].m_age << "\t";
		cout << "�绰��" << abs->personarray[ret].m_phone << "\t";
		cout << "��ַ��" << abs->personarray[ret].m_address << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");  //�밴���������
	system("cls");    //��������������������
}


// 5 - �޸�ָ����ϵ�� - modifyperson����
void modifyperson(addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�";
	string name;
	cin >> name;
	cout << "��Ҫ�޸ĵ���ϵ���ǣ�" << name << endl;
	int ret = isexist(abs, name);

	if (ret != -1)  //�ҵ�ָ����ϵ��
	{
		int selectnum = 1;
		while (selectnum == 1 || selectnum == 2 || selectnum == 3 || selectnum == 4 || selectnum == 5)  //һֱѭ����ֱ��selectnum����0�Ż��˳�ϵͳ
		{
			cout << "�޸������밴 1 |�޸��Ա��밴 2 |�޸������밴 3 |�޸ĵ绰�밴 4 |�޸ĵ�ַ�밴 5 |�˳��޸��밴 0" << endl;
			cin >> selectnum;

			switch (selectnum)  //ѡ��ϵͳ�Ĺ���
			{
			case 1:  //1���޸�����
			{
				string name;
				cout << "�������µ�������";
				cin >> name;
				abs->personarray[ret].m_name = name;
				break;
			}
			case 2:  //2���޸��Ա�
			{
				int sex = 0;
				cout << "�������µ��Ա�1:��|2:Ů����";

				while (true)
				{
					cin >> sex;
					if (sex == 1 || sex == 2)
					{
						//������ȷ  �˳�ѭ������
						abs->personarray[ret].m_sex = sex;
						break;
					}
					cout << "�����������������룡" << endl;
				}
				break;
			}
			case 3:  //3���޸�����
			{
				int age = 0;
				cout << "�������µ����䣺";
				while (true)
				{
					//���������� 0 ���� 150 �����˳�ѭ������Ϊ���������ȷֵ
					//���������������������
					cin >> age;
					if (age <= 150 || age >= 0)
					{
						abs->personarray[ret].m_age = age;
						break;
					}
					else
					{
						cout << "������0-150�����ǵ����˲��������ˣ�" << endl;
					}
				}
				break;
			}
			case 4:  //4���޸ĵ绰
			{
				cout << "�������µ���ϵ�绰��";
				string phone;
				cin >> phone;
				abs->personarray[ret].m_phone = phone;
				break;
			}
			case 5:  //5���޸ĵ�ַ
			{
				cout << "�������µļ�ͥסַ��";
				string address;
				cin >> address;
				abs->personarray[ret].m_address = address;
				break;
			}
			case 0:  //6��selectnum��Ϊ0������whileѭ��
			{
				break;
			}
			}
		}
		cout << "�޸���ϵ��" << abs->personarray[ret].m_name << "�ɹ���" << endl;
	}
	else
	{
		cout << "�ܱ�Ǹ�����޴��ˣ�" << endl;
	}
	//7�������������������֮��������
	system("pause");  //�밴���������
	system("cls");    //��������������������
}


// 6 - �����ϵ�� - cleanperson����
void cleanperson(addressbooks* abs) 
{
	cout << "�������Ҫ���������ϵ���𣿴˲����޷���أ�" << endl;
	cout << "��ִ�����������ϵ���밴 1 ����������밴 2 " << endl;
	int selectnumber;
	cin >> selectnumber;
	if (selectnumber == 1)
	{
		abs->m_size = 0; //�����ڼ�¼��ϵ��������Ϊ0�����߼���ղ���
		cout << "ͨѶ¼�����" << endl;
	}
	else
	{
		cout << "ͨѶ¼���ֲ���" << endl;
	}
	system("pause");  //�밴���������
	system("cls");    //��������������������
}



//������
int main()
{
	//����ͨѶ¼�ṹ�����
	addressbooks abs;
	
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_size = 0;

	int select = 0;  //�����û�ѡ������ı���

	while (true)  //һֱѭ����ֱ������ 0 �Ż��˳�ϵͳ
	{

		//�˵�����
		showMenu();

		cin >> select;

		switch (select)  //ѡ��ϵͳ�Ĺ���
		{
		case 1:  //1�������ϵ��
			addperson(&abs);   //����"&"�Ļ���ֵ���ݣ������޸�abs�����ݣ�Ҫ�õ�ַ�����޸�ʵ��
			break;
		case 2:  //2����ʾ��ϵ��
			showperson(&abs);
			break;
		case 3:  //3��ɾ����ϵ��
			//case��������������࣬Ҫ��װ�ɴ���Σ�ʹ��{}���� �����
		{
			/*cout << "������һ��ɾ������ϵ��������";
			string name;
			cin >> name;
			if (isexist(&abs, name) == -1)
			{
				cout << "���޴��ˣ�" << endl;
			}
			else
			{
				cout << "�ҵ����ˣ�" << endl;
			}*/
			deleteperson(&abs);
			break;
		}
		case 4:  //4��������ϵ��
			findperson(&abs);
			break;
		case 5:  //5���޸���ϵ��
			modifyperson(&abs);
			break;
		case 6:  //6�������ϵ��
			cleanperson(&abs);
			break;
		case 0:  //7���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");  //�밴���������
			return 0;  //�����˳�whileѭ��
			break;
		}
	}

	system("pause");
	return 0;

}