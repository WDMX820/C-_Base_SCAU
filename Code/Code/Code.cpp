//��һ�׶Σ�����ѧϰ�׶�

//ѡ������ȡ��ע�ͣ�Control + K + U
//ѡ������ע�ͣ�Control + K + C

//Task 1��ע�ͺͱ���������
/*
#include<iostream>
using namespace std;

// 1������ע��(��ɫע��)

// 2������ע��

//main��һ����������
//ÿ�����򶼱�������ôһ������
//���ҽ���һ����

int main()
{
	//���Hello World
	//cout << "Hello World" << endl;
	//cout << "Hello C++" << endl;

	//�����������﷨���������� ������ = ������ʼֵ
	//int a = 10;
	//cout << "a = " << a << endl;

	system("pause");

	return 0;
}
*/




//Task 2��������ʹ��
/*
#include<iostream>
using namespace std;

//�����Ķ��巽ʽ
//1��#define �곣��
//2��const���εı���

//1��#define �곣��
#define Day 7

int main()
{

	//Day = 14; //����Day�Ǻ곣����һ���޸ľͻᱨ��
	cout << "һ���ܹ��У�" << Day << "��" << endl;

	//2��const���εı���
	const int month = 12;
	//month = 24; //����const���εı���Ҳ��Ϊ����

	cout << "һ���ܹ��У�" << month << "����" << endl;

	system("pause");

	return 0;
}
*/




//Task 3���ؼ���
/*
#include<iostream>
using namespace std;

int main()
{
	//������������������ �������� = ������ʼֵ
	//��Ҫ�ùؼ��ָ��������߳���������
	//int int = 10;   ���󣬵ڶ���int�ǹؼ��֣���������Ϊ����������

	system("pause");
	return 0;
}
*/




//Task 4����ʶ����������
/*
#include<iostream>
using namespace std;

//��ʶ����������
//1����ʶ���������ǹؼ���
//2����ʶ��������ĸ�����֡��»��߹���
//3����ʶ����һ���ַ�ֻ������ĸ���»���
//4����ʶ�������ִ�Сд��


int main()
{
	//1����ʶ���������ǹؼ���
	//int int = 10;

	//2����ʶ��������ĸ�����֡��»��߹���
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;

	//3����ʶ����һ���ַ�ֻ������ĸ���»���
	//int 123abc = 40;

	//4����ʶ�����ִ�Сд
	int aaa = 100;
	cout << aaa << endl;
	//cout << AAA << endl;  //AAA��aaa����ͬһ������

	//���飺������������ʱ������ܹ���������֪�⣬�����Լ�������ȥ�Ķ�(����Ŀɶ���)
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;

	system("pause");
	return 0;
}
*/




//Task 5����������-����
/*
#include<iostream>
using namespace std;

int main()
{
	//���ͣ�����������ռ�ڴ�ռ䲻ͬ��
	//1�������� 2�ֽ� (-32768 ~ 32767)
	short num1 = 32768;  //num1����32767�������´�-32768��ʼ

	//2������ 4�ֽ� (-2^31 ~ 2^31-1)
	int num2 = 10;

	//3�������� 4�ֽ� (-2^31 ~ 2^31-1)
	long num3 = 10;

	//4���������� 8�ֽ� (-2^63 ~ 2^63-1)
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");
	return 0;
}
*/




//Task 6����������-sizeof�ؼ���
/*
#include<iostream>
using namespace std;

int main()
{
	//���ͣ�short��2��    int��4��    long��4��    long long��8��
	//��������sizeof�����������ռ���ڴ��С���ֽڣ�
	//�﷨��sizeof����������/������

	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	//���ʹ�С�Ƚ�
	//short < int <= long <= long long

	system("pause");
	return 0;
}
*/




// Task 7����������-ʵ��
/*
#include<iostream>
using namespace std;

int main()
{

	//1��������  float
	//2��˫����  double
	//Ĭ������� ���һ��С��������ʾ��6λ��Ч����
	float f1 = 3.1415926f; //���� f ��Ĭ��Ϊdouble˫����
	cout << "f1 = " << f1 << endl;

	float d1 = 3.1415926; //���� f ��Ĭ��Ϊdouble˫����
	cout << "d1 = " << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "float ռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;    // 4�ֽ�
	cout << "double ռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;  // 8�ֽ�

	//��ѧ������
	float f2 = 3e2; //3 * 10 ^ 2 = 300
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3 * 0.1 ^ 2 = 0.03
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}
*/




// Task 8����������-�ַ���
/*
#include<iostream>
using namespace std;

int main()
{
	//1���ַ��ͱ����Ĵ�����ʽ
	char ch = 'a';
	char ch1 = 'A';
	cout << ch << endl;
	cout << ch1 << endl;

	//2���ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;

	//3���ַ��ͱ�����������
	//char ch2 = "b"; // �����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'abcdef'; // �����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ�

	//4���ַ��ͱ�����ӦASCII����
	// a - 97  ��
	// A - 65  ��
	cout << (int)ch << endl;
	cout << (int)ch1 << endl;

	system("pause");
	return 0;
}
*/




// Task 9����������-ת���ַ�
/*
#include<iostream>
using namespace std;

int main()
{
	//ת���ַ�

	//���з� \n

	cout << "Hello Wolrd" << endl;
	cout << "Hello Wolrd\n";

	//��б�� \\

	cout << "\\" << endl;

	//ˮƽ�Ʊ�� \t   ���ÿ��������������

	cout << "aaaa\tHello World" << endl;
	cout << "aa\tHello World" << endl;
	cout << "aaaaaa\tHello World" << endl;

	system("pause");
	return 0;
}
*/




// Task 10����������-�ַ�������
/*
#include<iostream>
using namespace std;
#include<string>  //��C++����ַ�����ʱ��Ҫ�������ͷ�ļ�

int main()
{
	//1��C����ַ���
	//ע������1��char �ַ����� []
	//ע������2���Ⱥź��� Ҫ��˫���� ���������ַ���
	char str[] = "Hello World";
	cout << str << endl;
	cout << "Hello World" << endl;

	//2��C++����ַ���
	//ע���������һ��ͷ�ļ�  #include<string>
	string str2 = "Hello World";
	cout << str2 << endl;

	system("pause");
	return 0;
}
*/




// Task 11����������-��������
/*
#include<iostream>
using namespace std;

int main()
{
	//1������bool��������
	bool flag = true; //true����
	cout << flag << endl;

	flag = false; //false�Ǽ�
	cout << flag << endl;

	//������  1������  0����٣���ʵ��0�������棩

	//2���鿴bool������ռ�ڴ�ռ䣨bool����ռ1���ֽڴ�С��
	cout << "bool������ռ�ڴ�ռ䣺" << sizeof(bool) << endl;

	system("pause");
	return 0;
}
*/




// Task 12����������-���ݵ�����
/*
#include<iostream>
using namespace std;
#include<string> // stringͷ�ļ�

int main()
{
	//1������
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ���a = " << a << endl;

	//2��������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���a = " << f << endl;

	//3���ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���ch = " << ch << endl;

	//4���ַ�����
	string str = "hello";
	cout << "����ַ���str��ֵ" << endl;
	cin >> str;
	cout << "�ַ���str = " << str <<endl;

	//5����������
	bool flag = false;
	cout << "�����������flag��ֵ" << flag << endl;
	cin >> flag;  //bool���� ֻҪ�Ƿ�0��ֵ��Ϊ��
	cout << "��������flag = " << flag << endl;

	system("pause");
	return 0;
}
*/




// Task 13����������-�����
/*
#include<iostream>
using namespace std;

int main()
{
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //����������� �����Ȼ����������С������ȥ��

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;  // ��������������������ǲ�����Ϊ0��

	//����С���������
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;  //����Ľ��Ҳ������С��

	system("pause");
	return 0;
}
*/




// Task 14����������-���������1
/*
#include<iostream>
using namespace std;

int main()
{
	//ȡģ���㱾��  ������������ֻ�����ͱ�������ȡģ�������
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	// ��������������������ǲ�����Ϊ0�ģ�����Ҳ������ȡģ����
	//cout << a3 % b3 << endl;

	//����С���ǲ�������ȡģ�����
	double d1 = 3.14;
	double d2 = 1.1;

	//cout << d1 % d2 << endl;

	system("pause");
	return 0;
}
*/




// Task 15����������-���������2
/*
#include<iostream>
using namespace std;

int main()
{
	//1��ǰ�õ���
	int a = 10;
	++a;  // �ñ���+1
	cout << "a = " << a << endl;

	//2�����õ���
	int b = 10;
	b++;  //�ñ���+1
	cout << "b = " << b << endl;

	//3��ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//���õ��� �Ƚ��б��ʽ���� Ȼ���ñ���+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//ǰ�õݼ� ���ñ���-1 Ȼ����б��ʽ����
	int a4 = 10;
	int b4 = --a4 * 10;
	cout << "a4 = " << a4 << endl;
	cout << "b4 = " << b4 << endl;

	//���õݼ� �Ƚ��б��ʽ���� Ȼ���ñ���-1
	int a5 = 10;
	int b5 = a5-- * 10;
	cout << "a5 = " << a5 << endl;
	cout << "b5 = " << b5 << endl;

	system("pause");
	return 0;
}
*/




// Task 16����������-��ֵ�����
/*
#include<iostream>
using namespace std;

int main()
{
	//��ֵ�����

	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;  // a = a + 2
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;  // a = a - 2
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;  // a = a * 2
	cout << "a = " << a << endl;

	// /=
	a = 10;
	a /= 2;  // a = a / 2
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 2;  // a = a % 2
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}
*/




// Task 17����������-�Ƚ������
/*
#include<iostream>
using namespace std;

int main()
{
	//�Ƚ����������Ϊ1 ��Ϊ0��
	// ==
	int a = 10;
	int b = 20;

	cout << (a == b) << endl;

	// !=
	cout << (a != b) << endl;

	// >
	cout << (a > b) << endl;

	// <
	cout << (a < b) << endl;

	// >=
	cout << (a >= b) << endl;

	// <=
	cout << (a <= b) << endl;

	system("pause");
	return 0;
}
*/




// Task 18����������-�߼���������ǡ��롢��
/*
#include<iostream>
using namespace std;

int main()
{
	//�߼������ - ��  !
	int a = 10;
	//��C++�� ����0 ��Ϊ��
	cout << !a << endl;
	cout << !!a << endl;

	//�߼������ - ��  &&
	//ͬ��Ϊ�棬����Ϊ��
	cout << (0 && 0) << endl;  // 0 ��
	cout << (0 && 1) << endl;  // 0 ��
	cout << (1 && 1) << endl;  // 1 ��


	// �߼������ - �� ||
	//ͬ��Ϊ�٣�����Ϊ��
	cout << (0 || 0) << endl;  // 0 ��
	cout << (0 || 1) << endl;  // 1 ��
	cout << (1 || 1) << endl;  // 1 ��

	system("pause");
	return 0;
}
*/




// Task 19���������̽ṹ-ѡ��ṹ-����if���
/*
#include<iostream>
using namespace std;

int main()
{
	//ѡ��ṹ - ���и�ʽif��䣺if(����){ ��������ִ�е���� }
	//�û�������������Final score����7����Ϊ����IC��UCL������Ļ�����

	//1���û��������
	int ListeningScore = 0;
	int ReadingScore = 0;
	int WritingScore = 0;
	int SpeakingScore = 0;
	int FinalScore = 0;
	cout << "������Listening Score��" << endl;
	cin >> ListeningScore;
	cout << "������Reading Score��" << endl;
	cin >> ReadingScore;
	cout << "������Writing Score��" << endl;
	cin >> WritingScore;
	cout << "������Speaking Score��" << endl;
	cin >> SpeakingScore;
	FinalScore = (ListeningScore + ReadingScore + WritingScore + SpeakingScore) / 4;

	//2����ӡ�û�����ķ���
	cout << "����FinalScore�ǣ�" << FinalScore << endl;

	//3���жϷ����Ƿ����7�֣�������ڣ���ô���
	//ע�����if�������治Ҫ�ӷֺš�
	if (FinalScore > 7)
	{
		cout << "��ϲ���õ�IC��UCL��Offer��" << endl;

	}

	system("pause");
	return 0;
}
*/




// Task 20���������̽ṹ-ѡ��ṹ-����if���
/*
#include<iostream>
using namespace std;

int main()
{
	//ѡ��ṹ - ����if���
	//�û�������������Final score����7����Ϊ����IC��UCL������Ļ�����
	//���С�ڵ���7����ӡ����Ŭ����

	//1���û��������
	int ListeningScore = 0;
	int ReadingScore = 0;
	int WritingScore = 0;
	int SpeakingScore = 0;
	int FinalScore = 0;
	cout << "������Listening Score��" << endl;
	cin >> ListeningScore;
	cout << "������Reading Score��" << endl;
	cin >> ReadingScore;
	cout << "������Writing Score��" << endl;
	cin >> WritingScore;
	cout << "������Speaking Score��" << endl;
	cin >> SpeakingScore;
	FinalScore = (ListeningScore + ReadingScore + WritingScore + SpeakingScore) / 4;

	//2����ӡ�û�����ķ���
	cout << "����FinalScore�ǣ�" << FinalScore << endl;

	//3���жϷ����Ƿ����7�֣�������ڣ���ô�����ϲ��������������Ŭ����
	//ע�����if�������治Ҫ�ӷֺš�
	if (FinalScore > 7)  //����7��ִ����������ŵ�����
	{
		cout << "��ϲ���õ�IC��UCL��Offer��" << endl;
	}
	else   //���������ִ����������ŵ�����
	{
		cout << "����Ŭ����" << endl;
	}
	system("pause");
	return 0;
}
*/




// Task 21���������̽ṹ - ѡ��ṹ - ������if���
/*
#include<iostream>
using namespace std;

int main()
{
	//ѡ��ṹ - ��������if��䣺if(����1){ ����1����ִ�е���� } else if(����2){ ����2����ִ�е���� }...else{��������ִ�е����}

	//�û�������������Final score����7����Ϊ������IC��UCL��������Ļ�����
	//�������6.5����ӡ���������������������Ŭ������
	//�������6����ӡ��KCL��NTU���У���
	//���С�ڵ���6����ӡ��ͬ־����Ŭ������

	//1���û��������
	float ListeningScore = 0;
	float ReadingScore = 0;
	float WritingScore = 0;
	float SpeakingScore = 0;
	float FinalScore = 0;
	cout << "������Listening Score��" << endl;
	cin >> ListeningScore;
	cout << "������Reading Score��" << endl;
	cin >> ReadingScore;
	cout << "������Writing Score��" << endl;
	cin >> WritingScore;
	cout << "������Speaking Score��" << endl;
	cin >> SpeakingScore;
	FinalScore = (ListeningScore + ReadingScore + WritingScore + SpeakingScore) / 4;

	//2����ӡ�û�����ķ���
	cout << "����FinalScore�ǣ�" << FinalScore << endl;

	//3���жϷ����Ƿ����7�֣�������ڣ���ô�����ϲ��������������Ŭ����
	//ע�����if�������治Ҫ�ӷֺš�
	if (FinalScore >= 7)  //����7��ִ����������ŵ�����
	{
		cout << "��ϲ���õ�IC��UCL��Offer��" << endl;
	}
	else if (FinalScore >= 6.5) //���������ִ����������ŵ�����
	{
		cout << "�������������������Ŭ����" << endl;
	}
	else if (FinalScore >= 6)
	{
		cout << "KCL��NTU���У�" << endl;
	}
	else
	{
		cout << "ͬ־����Ŭ����" << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 22���������̽ṹ - ѡ��ṹ - Ƕ��if���
/*
#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	//��ʾ�û�����һ���߿����Է���,���ݷ����������жϷ����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ����
	//������һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�����˴�


	//1����ʾ����һ���߿�����
	cout << "������߿����Է�����" << endl;
	cin >> score;

	//2����ʾ�߿�����
	cout << "������ĸ߿�����Ϊ��" << score << endl;

	//3���ж�
	//�������600  һ��
		//����700  ����
		//����650  �廪
		//����     �˴�
	//�������500  ����
	//�������400  ����
	//���������δ���ϱ���
	if (score > 600)
	{
		cout << "��ϲ������һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "��ϲ�����뱱����ѧ��";
		}
		else if (score > 650)
		{
			cout << "��ϲ�������廪��ѧ��";
		}
		else
		{
			cout << "��ϲ�������й������ѧ��";
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ�����������ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else
	{
		cout << "δ���ϱ��ƣ����ٽ�����" << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 23���������̽ṹ - ѡ��ṹ���� - ��ֻС�������
/*
#include<iostream>
using namespace std;

int main()
{
	//��ֻС������أ��ж���ֻ����

	//1��������ֻС������ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2�����û�������ֻС�������
	cout << "������С��zyh������" << endl;
	cin >> num1;

	cout << "������С��zbh������" << endl;
	cin >> num2;

	cout << "������С��zdm������" << endl;
	cin >> num3;

	cout << "С��zyh������Ϊ��" << num1 << endl;
	cout << "С��zbh������Ϊ��" << num2 << endl;
	cout << "С��zdm������Ϊ��" << num3 << endl;

	//3���ж���ֻ����
	//���ж�zyh��zbh������
	if (num1 > num2)  // ZYH��ZBH��
	{
		if (num1 > num3)  // ZYH��ZDM��
		{
			cout << "С��zyh����" << endl;
		}
		else  // ZDM��ZYH��
		{
			cout << "С��zdm����" << endl;
		}
	}
	else  // ZBH��ZYH��
	{
		if (num2 > num3)  // ZBH��ZDM��
		{
			cout << "С��zbh����" << endl;
		}
		else  // ZDM��ZBH��
		{
			cout << "С��zdm����" << endl;
		}
	}

	system("pause");
	return 0;
}
*/




// Task 24���������̽ṹ - ѡ��ṹ���� - ��Ŀ�����
/*
#include<iostream>
using namespace std;

int main()
{
	//��Ŀ�����

	//������������ a b c
	//��a��b���Ƚϣ����������ֵ��ֵ������c

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);    // ���a����b������Ϊa������Ϊb

	cout << "c = " << c << endl;

	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}
*/




// Task 25���������̽ṹ - ѡ��ṹ - Switch���
/*
#include<iostream>
using namespace std;

int main()
{
	//switch���
	//����Ӱ���д��
	// 9 ~ 10  ����
	// 7 ~ 8   �ǳ���
	// 5 ~ 6   һ��
	// 5����   ��Ƭ
	//��ע�����case�������û��break����ô�����һֱ����ִ��

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���д��" << endl;

	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;

	//3�������û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;  // �˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;  // �˳���ǰ��֧
	case 8:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;  // �˳���ǰ��֧
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;  // �˳���ǰ��֧
	case 6:
		cout << "����Ϊ��һ��ĵ�Ӱ" << endl;
		break;  // �˳���ǰ��֧
	case 5:
		cout << "����Ϊ��һ��ĵ�Ӱ" << endl;
		break;  // �˳���ǰ��֧
	default:  // ����if��������else
		cout << "����Ϊ����һ����Ƭ" << endl;
		break;  // �˳���ǰ��֧
	}

	// if �� switch ֮������𣿡�
	//switchȱ�㣺�ж�ʱ��ֻ�������ͻ����ַ��ͣ��������ж�����
	//switch�ŵ㣺�ṹ������ִ��Ч�ʸ�

	system("pause");
	return 0;
}
*/




// Task 26���������̽ṹ - ѭ���ṹ - While���
/*
#include<iostream>
using namespace std;

int main()
{
	//whileѭ��
	//����Ļ�д�ӡ 0 ~ 9 ��10������
	int num = 0;

	//while() ������ѭ������
	//ע�������дѭ��һ��Ҫ������ѭ���ĳ��֣������ṩ����ѭ���ĳ���

	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}
*/




// Task 27���������̽ṹ - ѭ���ṹ���� - ������
/*
#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>

int main()
{
	cout << "����һ�������ֵ���Ϸ���뿪ʼ�����֣�" << endl;
	//�����������ӡ�  �������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1��ϵͳ���������
	int num = rand() % 100 + 1;   // rand()%100 + 1   ����  0 ~ 99 + 1 �����
	// cout << num << endl;

	//2����ҽ��в²�
	int val = 0; // ������������

	//3���ж���ҵĲ²�
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²�������" << endl;
		}
		else if (val < num)
		{
			cout << "�²�����С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			//�¶�   �˳���Ϸ
			break; // break���������øùؼ������˳���ǰѭ��
		}
		//�¶�    �˳���Ϸ
		//�´�    ��ʾ�µĽ��  ������߹�С  ���·��ص�2��
	}

	system("pause");
	return 0;
}
*/




// Task 28���������̽ṹ - ѭ���ṹ - dowhile���
/*
#include<iostream>;
using namespace std;

int main()
{
	//do...while���
	//while�����жϣ���ִ��
	//do...while��while����������do...while����ִ��һ��ѭ����䣬���ж�ѭ������
	//����Ļ����� 0 �� 9 ��10������

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	}
	while (num < 10);   //�������0-9


	do
	{
		cout << num << endl;
		num++;
	}
	while (num);    //��ִ��num�ͱ��1���ᵼ������ѭ��


	while(num)
	{
		cout << num << endl;
		num++;
	}    //���ж�num����0��ֱ��û�����

	system("pause");
	return 0;
}
*/




// Task 29���������̽ṹ - ѭ���ṹ���� - ˮ�ɻ���
/*
#include<iostream>;
using namespace std;

int main()
{
	//ˮ�ɻ�����ָһ��3λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������

	//1���ȴ�ӡ������λ����
	int num = 100;
	int gw = 0;  //��λ
	int sw = 0;  //ʮλ
	int bw = 0;  //��λ

	do
	{
		//2����������λ�������ҵ�ˮ�ɻ���

		gw = num % 10;    //��ȡ���ֵĸ�λ��
		sw = num / 10 % 10;   //��ȡ���ֵ�ʮλ��
		bw = num / 100;   //��ȡ���ֵİ�λ��

		if (gw * gw * gw + sw * sw * sw + bw * bw * bw == num)
		{
			cout << num << endl;
		}

		num++;

	} while (num < 1000);

	system("pause");
	return 0;
}
*/




// Task 30���������̽ṹ - ѭ���ṹ - forѭ��
/*
#include<iostream>;
using namespace std;

int main()
{
	//forѭ��
	//������0 ��ӡ�� ����9

	for (int i = 0; i < 10; i++)
	{
		// int i = 0 ����ִ��;����� i < 10;Ȼ��ִ��forѭ�������� cout << i << endl;���ִ��i++
		cout << i << endl;
	}
	system("pause");
	return 0;
}
*/




// Task 31���������̽ṹ - ѭ���ṹ���� - ������
/*
#include<iostream>
using namespace std;

int main()
{
	//�����Ӱ���
	for (int num = 1; num <= 100; num++)
	{
		//��λ����7�Ĳ��С�ʮλ����7�Ĳ��С���7�ı����Ĳ���
		if (num % 10 == 7 || num / 10 % 10 == 7 || num % 7 == 0)
		{
			cout << "�����ӣ�" << endl;
		}
		else   //�������ֱ��˵����
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}
*/




// Task 32���������̽ṹ - Ƕ��ѭ��
/*
#include<iostream>
using namespace std;

int main()
{
	//����Ƕ��ѭ��ʵ����ͼ

	//��ӡ10*10����ͼ

	//���ִ��һ�Σ��ڲ�ִ��һ��
	//���ѭ��
	for (int i = 0; i < 10; i++)
	{
		//�ڲ�ѭ��
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/




// Task 33���������̽ṹ - Ƕ��ѭ������ - �˷��ھ���
/*
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j <= i)
			{
				cout << j << "��" << i << "=" << (i * j) << "\t";
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 34���������̽ṹ - ��ת��� - break���
/*
#include<iostream>
using namespace std;

int main()
{
	//break���
	//���ã���������ѡ��ṹ����ѭ���ṹ

	//break��ʹ��ʱ��
	//1��������switch��������У���������ֹcase������switch
	//2��������ѭ������У�������������ǰ��ѭ�����
	//3��������Ƕ��ѭ���У�����������ڲ�ѭ�����


	////1��������switch�����
	//cout << "��ѡ�񸱱����Ѷ�" << endl;
	//cout << "1����ͨ" << endl;
	//cout << "2���е�" << endl;
	//cout << "3������" << endl;

	//int select = 0;  //����ѡ�����ı���

	//cin >> select;  //�ȴ��û�����

	//switch (select)
	//{
	//case 1:
	//	cout << "��ѡ�������ͨ�Ѷ�" << endl;
	//	break; //�˳�switch���
	//case 2:
	//	cout << "��ѡ������е��Ѷ�" << endl;
	//	break; //�˳�switch���
	//case 3:
	//	cout << "��ѡ����������Ѷ�" << endl;
	//	break; //�˳�switch���
	//default:
	//	break;
	//}



	////2��������ѭ�������
	//for (int i = 0; i < 10; i++)
	//{
	//	//���i����5���˳�ѭ�������ٴ�ӡ
	//	if (i == 5)
	//	{
	//		break; //�˳�ѭ��
	//	}
	//	cout << i << endl;
	//}



	//3��������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;  //�˳��ڲ�ѭ��
				//�õ�10��5�е���ͼ
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 35���������̽ṹ - ��ת��� - continue���
/*
#include<iostream>
using namespace std;

int main()
{
	//continue���
	//ִ�е����У��Ͳ���ִ�к���Ĵ����ˣ���ִ����һ��ѭ��

	for (int i = 0; i <= 100; i++)
	{
		//��������������ż�������
		if (i % 2 == 0)
		{
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			//����break���˳�ѭ������continue�����
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 36���������̽ṹ - ��ת��� - goto���
/*
#include<iostream>
using namespace std;

int main()
{
	//goto��䣨������ʹ�ã�
	//���ã�������������ת���
	//�����ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��

	cout << "1��xxxx" << endl;

	cout << "2��xxxx" << endl;
	goto FLAG;  //��ת��FALG

	cout << "3��xxxx" << endl;

	cout << "4��xxxx" << endl;
	FLAG:  //�������

	cout << "5��xxxx" << endl;

	system("pause");
	return 0;
}
*/




// Task 37������ - һά���鶨�巽ʽ
/*
#include<iostream>
using namespace std;

int main()
{
	//�����ص㣺����һ���������ڴ�ռ���
	//������ÿ��Ԫ�ض�����ͬ��������

	//1����������  ������[ ���鳤�� ];
	//2����������  ������[ ���鳤�� ] = { ֵ1, ֵ2 ...};
	//3����������  ������[ ] = { ֵ1, ֵ2 ...};


	////1����������  ������[ ���鳤�� ];
	//int arr[5];
	////�������е�Ԫ�ؽ��и�ֵ
	////����Ԫ�ص��±��Ǵ�0��ʼ������
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;

	////��������Ԫ��
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;


	////2����������  ������[ ���鳤�� ] = { ֵ1, ֵ2 ...};
	////����ڳ�ʼ������ʱ��û��ȫ����д�꣬����0���ʣ������
	//int arr2[5] = { 10,20,30,40,50 };

	////cout << arr2[0] << endl;
	////cout << arr2[1] << endl;
	////cout << arr2[2] << endl;
	////cout << arr2[3] << endl;
	////cout << arr2[4] << endl;
	////
	////����ѭ�� ��������е�Ԫ��
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr2[i] << endl;
	//}


	//3����������  ������[ ] = { ֵ1, ֵ2 ...};
	//���������ʱ�򣬱����г�ʼ����
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };

	for (int i = 0; i < 10; i++)
	{
		cout << arr3[i] << endl;
	}


	system("pause");
	return 0;
}
*/




// Task 38������ - һά���� - ������
/*
#include<iostream>
using namespace std;

int main()
{
	//һά����������;��
	//1������������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2�����Ի�ȡ�������ڴ��е��׵�ַ
	cout << "������׵�ַΪ��" << (int)arr << endl;   //int����ת16���Ƶ�ַΪ10����
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;   //�ǵü�"&"����ȡַ
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;   //�ǵü�"&"����ȡַ

	//�������ǳ����������Խ��и�ֵ����
	//arr = 100;

	system("pause");
	return 0;
}
*/




// Task 39������ - һά���鰸�� - ��ֻС�������
/*
#include<iostream>
using namespace std;

int main()
{
	//1��������ֻС�����ص�����
	int arr[5] = { 90,130,100,140,160 };
	//2�����������ҵ����ֵ
	int max = 0;  //���϶�һ�����ֵΪ0


	////lzc˼·��
	//for (int i = 0; i < 4; i++)
	//{
	//	max = arr[i];
	//	if (arr[i] < arr[i + 1])
	//	{
	//		max = arr[i + 1];
	//		cout << "Ŀǰ���ֵ�ǣ�" << max << endl;
	//	}
	//}
	//cout << "���ֵ�����ǣ�" << max << endl;


	//����C++˼·��
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			cout << "Ŀǰ���ֵ�ǣ�" << max << endl;
		}
	}
	cout << "���ֵ�����ǣ�" << max << endl;


	system("pause");
	return 0;
}
*/




// Task 40������ - һά���鰸�� - Ԫ������
/*
#include<iostream>
using namespace std;

int main()
{
	//ʵ������Ԫ������

	//1����������
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2��ʵ������
	//2.1��¼��ʼ�±�λ��
	//2.2��¼�����±�λ��
	//2.3��ʼ�±�������±��Ԫ�ػ���
	//2.4��ʼλ��++   ����λ��--
	//2.5ѭ��ִ��2.1������ֱ����ʼλ�� >= ����λ��

	int start = 0;  //��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;  //�����±��

	while (start < end)
	{
		//ʵ��Ԫ�ػ�����
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;
	}

	//3����ӡ���ú������
	cout << "����Ԫ�����ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 41������ - һά���� - ð������
/*
#include<iostream>
using namespace std;

int main()
{
	//ð������˼·��ע�����������ͶԱȴ����
	int arr[9] = { 1,2,4,3,7,9,8,5,0 };
	int temp = 0;  //������ʱ����
	int time = 1;
	//���������� = Ԫ�ظ��� - 1 ������
	int length = sizeof(arr) / sizeof(arr[0]);
	//�ⲿ��������i
	for (int i = 0; i < length - 1; i++)
	{
		//�ڲ�ѭ���Ա�j
		//ÿ�ֶԱȴ��� = Ԫ�ظ��� - ��ǰ���� - 1 ������
		for (int j = 0; j < length - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			cout << "���ڵ�����˳���ǣ�";
			for (int k = 0; k < 9; k++)
			{
				cout << arr[k];
			}
			cout << endl;
		}
		cout << "���ǵ�" << time << "��ð��" << endl;
		time++;
	}

	system("pause");
	return 0;
}
*/




// Task 42������ - ��ά���鶨�巽ʽ
/*
#include<iostream>
using namespace std;

int main()
{
	//��ά���鶨�巽ʽ

	//1����������  ������[ ���� ][ ���� ];
	//2����������  ������[ ���� ][ ���� ] = { { ����1, ����2 } , { ����3, ����4 } };
	//3����������  ������[ ���� ][ ���� ] = { ����1, ����2, ����3, ����4 };
	//4����������  ������[  ][ ���� ] = { ����1, ����2, ����3, ����4 };


	////1����������  ������[ ���� ][ ���� ];
	//int arr[2][3];
	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[0][2] = 3;
	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;

	////���ѭ����ӡ�������ڲ�ѭ����ӡ����
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr[i][j] << endl;
	//	}
	//}


	////2����������  ������[ ���� ][ ���� ] = { { ����1, ����2 } , { ����3, ����4 } };
	//int arr2[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr2[i][j] << endl;
	//	}
	//}


	////3����������  ������[ ���� ][ ���� ] = { ����1, ����2, ����3, ����4 };
	//int arr3[2][3] = { 1,2,3,4,5,6 };
	//	for (int i = 0; i < 2; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			cout << arr3[i][j] << endl;
	//		}
	//	}


	//4����������  ������[  ][ ���� ] = { ����1, ����2, ����3, ����4 };
	//����ʡȥ�������ǲ���ʡȥ������
	int arr4[][3] = { 1,2,3,4,5,6 };
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << arr4[i][j] << endl;
			}
		}

	system("pause");
	return 0;
}
*/




// Task 43������ - ��ά���� - ������
/*
#include<iostream>
using namespace std;


int main()

{
	//��ά����������;

	//1�����Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//int���� 6*4=24    double���� 6*8=48
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	//int���� 3*4=12
	cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(arr[0]) << endl;
	//int���� 1*4=4
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;

	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


	//2�����Բ鿴��ά������׵�ַ
	//��λ������׵�ַ����һ���׵�ַ����һ��Ԫ�ص�ַ��Ϊͬһ��
	cout << "��ά������׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ��" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;
	//Ԫ�ص��׵�ַ�ǵü�ȡַ����&��
	cout << "��ά�����һ��Ԫ���׵�ַΪ��" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַΪ��" << (int)&arr[0][1] << endl;

	system("pause");
	return 0;
}
*/




// Task 44������ - ��ά���鰸�� - ���Գɼ�ͳ��
/*
#include<iostream>
using namespace std;
#include<string>


int main()

{
	//1��������ά����
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "����","����","����" };

	//2��ͳ��ÿ���˵��ܺͷ���
	//�ⲿѭ��
	for (int i = 0; i < 3; i++)
	{
		//�ڲ�ѭ�� ÿһ�����������
		int grade = 0;

		for (int j = 0; j < 3; j++)
		{
			//grade = grade + score[i][j];
			grade += score[i][j];
		}
		cout << names[i] << "ͬѧ�ķ���Ϊ��" << grade << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 45������ - �����Ķ���
/*
#include<iostream>
using namespace std;

//ʵ��һ���ӷ������������ǣ����������������ݣ�����������ӵĽ�������ҷ���

//1������ֵ����   int
//2��������   add
//3�������б�   (int num1 , int num2)
//4�����������    int sum = num1 + num2;
//5��return���ʽ   return sum;

//�﷨��
//����ֵ���� ������ (�����б�) { ��������� return���ʽ }


int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	cout << add(3, 4) << endl;
	system("pause");
	return 0;

}
*/




// Task 46������ - �����ĵ���
/*
#include<iostream>
using namespace std;

//����ӷ�����
//���������ʱ��num1��num2��û����ʵ���ݣ���ֻ��һ����ʽ�ϵĲ���������β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	//main�����е���add����
	int a = 10;
	int b = 20;

	//���������﷨���������� (����)
	//a��b��Ϊ ʵ�ʲ��������ʵ��
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add(a, b);
	cout << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << c << endl;

	system("pause");
	return 0;
	//�ββ��ܴ���ʵ�Σ���ʵ�ο��Դ��ݸ��β�
}
*/




// Task 47������ - ֵ����
/*
#include<iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н�������

//���һ����������Ҫ����ֵ��������ʱ�����дvoid
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return; ����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//��������ֵ���ݵ�ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��(a��b����)
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
*/




// Task 48������ - ��������ʽ
/*
#include<iostream>
using namespace std;

//�����ĳ�����ʽ
//1���޲��޷�
void test01()
{
	cout << "This is test01!" << endl;
}
//2���в��޷�
void test02(int a)
{
	cout << "This is test02 a = " << a << endl;
}
//3���޲��з�
int test03()
{
	cout << "This is test03" << endl;
	return 100;
}
//4���в��з�
int test04(int a)
{
	cout << "This is test04 a = " << a << endl;
	return a;
}

int main()
{
	//�޲��޷���������
	test01();
	//�в��޷���������
	test02(100);
	//�޲��з���������
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	//�в��з���������
	int num2 = test04(1000);
	cout << "num2 = " << num2 << endl;

	system("pause");
	return 0;
}
*/




// Task 49������ - ����������
/*
#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//��ǰ���߱����������Ĵ��ڣ��������ú���������
//����������(������Ϳ��԰Ѻ�������д��main����֮��)
//��������������д��Σ����Ƕ���ֻ����һ�Ρ�
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}

//����
int max(int a, int b)
{
	return a > b ? a : b;  //��Ŀ�����
}
*/




// Task 50������ - �����ķ��ļ���д
/*
#include<iostream>
using namespace std;
#include"swap.h"

//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���

////����������
//void swep(int a, int b);
////�����Ķ���
//void swep(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1������.h��׺����ͷ�ļ�
//2������.cpp��׺����Դ�ļ�
//3����ͷ�ļ���д����������
//4����Դ�ļ���д�����Ķ���

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}
*/




// Task 51��ָ�� - ָ��Ķ����ʹ��
/*
#include<iostream>
using namespace std;

int main()
{
	//1������ָ��
	int a = 10;
	//ָ�붨����﷨����������* ָ�������:
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;  //������ϵ
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;  //ָ����ǵ�ַ

	//2��ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� *��������ã��ҵ�ָ��ָ����ڴ�

	*p = 1000;  //ָ��ָ����ڴ�(���Է���Ҳ�����޸ġ���������)
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}
*/




// Task 52��ָ�� - ָ����ռ�ڴ�ռ�
/*
#include<iostream>
using namespace std;

int main()
{
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	//int* p;
	//p = &a;
	int* p = &a;  //�������д���Ч��һ��

	//X64����64λ����ϵͳ������ʲô�������ͣ���ռ�ֽھ�Ϊ8������������
	//X86����32λ����ϵͳ������ʲô�������ͣ���ռ�ֽھ�Ϊ4������������
	cout << "sizeof (int *) = " << sizeof(int *) << endl;
	cout << "sizeof (float *) = " << sizeof(float *) << endl;
	cout << "sizeof (double *) = " << sizeof(double *) << endl;
	cout << "sizeof (char *) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}
*/




// Task 53��ָ�� - ��ָ��
/*
#include<iostream>
using namespace std;

int main()
{
	//��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	//1����ָ�����ڳ�ʼ��ָ�����
	int* p = NULL;

	//2����ָ��ָ����ڴ��ǲ����Է��ʵ�
	//cout << *p << endl;
	//*p = 100; 
	//д������Ȩ�޳�ͻ��0~255֮����ڴ�����ϵͳռ�õģ���˲����Է��ʣ�

	system("pause");
	return 0;
}
*/




// Task 54��ָ�� - Ұָ��
/*
#include<iostream>
using namespace std;

int main()
{
	//Ұָ�룺ָ��Ƿ����ڴ�ռ�
	//�ڳ����У������������Ұָ��
	int* p = (int*)0x1100;
	cout << *p << endl;

	system("pause");
	return 0;
	//�ܽ�:��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ����
}
*/





// Task 55��ָ�� - const����ָ��
/*
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	//�����֣�const����ɡ���������p����ɡ�ָ�롱�����Ⱥ�˳�򼴿�
	//���ص㣺const����int������ֵ���ɸģ�ָ��ɸģ�const����p����ָ�򲻿ɸģ���ֵ�ɸ�

	//1��const����ָ�� ���� ����ָ��
	const int* p1 = &a;
	//�ص㣺ָ���ָ������޸ģ�����ָ��ָ���ֵ�����Ը�
	//*p = 30;    //����ָ��ָ���ֵ�����Ը�
	p1 = &b;     //��ȷ��ָ��ָ����Ը�
	cout << *p1 << endl;

	//2��const���γ��� ���� ָ�볣��
	int* const p2 = &a;
	//�ص㣺ָ��ָ���ֵ���Ըģ�����ָ���ָ�򲻿����޸�
	*p2 = 30;    //��ȷ��ָ��ָ���ֵ���Ը�
	//p = &b;     //����ָ��ָ�򲻿��Ը�
	cout << *p2 << endl;

	//3��const������ָ�룬�����γ���
	const int* const p3 = &a;
	//�ص㣺ָ���ָ��ָ��ָ���ֵ�������Ը�
	//*p = 30;    //����ָ��ָ���ֵ�����Ը�
	//p = &b;     //����ָ��ָ�򲻿��Ը�

	system("pause");
	return 0;
}
*/




// Task 56��ָ�� - ָ�������
/*
#include<iostream>
using namespace std;

int main()
{
	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl; //From Task38

	int* p = arr;   //arr���������׵�ַ������

	cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;

	p++;//��ָ�����ƫ��4���ֽڡ�����

	cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;

	cout << "����ָ���������" << endl;

	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}
*/




// Task 57��ָ�� - ָ��ͺ���
/*
#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;  //�βα仯
	cout << "swap01 b = " << b << endl;  //�βα仯
}
void swap02(int* p1, int* p2)  //* p1��ָa�ĵ�ַ��* p2��ָb�ĵ�ַ
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main()
{
	//ָ��ͺ���
	int a = 10;
	int b = 20;

	//1��ֵ���ݲ���ı�ʵ��
	swap01(a, b);	   //ֵ���ݲ���������ʵ��
	
	//2����ַ���ݻ�ı�ʵ��
	swap02(&a, &b);  //����a��b�ĵ�ַ

	cout << "a = " << a << endl;   
	cout << "b = " << b << endl;   

	system("pause");
	return 0;
}
*/




// Task 58��ָ�� - ָ�롢����ͺ�������
/*
#include<iostream>
using namespace std;

//ð��������(From Task41)   ����1 ������׵�ַ   ����2 ���鳤��
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			//���j > j+1��ֵ  ��������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��ӡ����ĺ���
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
	}
}

int main()
{
	//1���ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);  //From Task38

	//2������������ʵ��ð������
	bubbleSort(arr, len);

	//3����ӡ����������
	printArray(arr, len);

	system("pause");
	return 0;
}
*/




// Task 59���ṹ�� - �ṹ�嶨���ʹ��
//�ṹ�������û��Զ������������	�����û��洢��ͬ����������
/*

�ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
�ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
�ܽ�3���ṹ��������ò�����"."���ʳ�Ա

#include<iostream>
using namespace std;
#include<string>

//1������ѧ����������  �� ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨  struct �������� { ��Ա�б� }
struct Student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;	  //����

}s3;   //˳�㴴���ṹ�����2.3

//2��ͨ��ѧ�����ʹ�������ѧ��

int main()
{
	//2.1 struct Student s1
	//struct �ؼ��ֿ���ʡ�ԣ��ṹ���������ʱ��
	struct Student s1;
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "Frank";
	s1.age = 40;
	s1.score = 100;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
	
	//2.2 struct Student s2 = { ... }
	struct Student s2 = { "Fiona",22,99 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
		 
	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����(������ʹ�õ�����)
	s3.name = "lip";
	s3.age = 18;
	s3.score = 110;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;

	system("pause");
	return 0;
}
*/




// Task 60���ṹ�� - �ṹ������
/*
#include<iostream>
using namespace std;
#include<string>

//�ṹ������
//1������ṹ��
struct Student
{
	string name;  //����
	int age;      //����
	int score;    //����
};

int main()
{
	//2�������ṹ������
	struct Student stuArray[8] =
	{
		{"Frank",18,100},
		{"Fiona",28,99},
		{"Lip",38,66}
	};
	
	//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "Steve";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4�������ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << " �����ǣ�" << stuArray[i].name << " �����ǣ�" << stuArray[i].age << " �����ǣ�" << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 61���ṹ�� - �ṹ��ָ��
//�ܽ�:�ṹ��ָ�����ͨ��->������ �����ʽṹ���еĳ�Ա
/*
#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��
//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//1������ѧ���ṹ�����
	//struct student s = { "Frank",18,100 };
	student s = { "Frank",18,100 };   //���Բ���struct

	//2��ͨ��ָ��ָ��ṹ�����
	//struct student* p = &s;
	student* p = &s;   //���Բ���struct

	//3��ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;

	system("pause");
	return 0;
}
*/




// Task 62���ṹ�� - �ṹ��Ƕ�׽ṹ��
//�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������
/*
#include<iostream>
using namespace std;
#include<string>

//����ѧ���ṹ��
struct student
{
	string name; //ѧ������
	int age;     //ѧ������
	int score;   //ѧ���ɼ�
};

//������ʦ�ṹ��
struct teacher
{
	int id;       //��ʦ���
	string name;  //��ʦ����
	int age;      //��ʦ����
	struct student stu;  //������ѧ��
};

int main()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "Lip";
	t.age = 19;
	t.stu.name = "Mandy";
	t.stu.age = 17;
	t.stu.score = 101;

	cout << "��ʦ������" << t.name << "  ��ʦ��ţ�" << t.id << "  ��ʦ���䣺" << t.age << endl;
	cout << "������ѧ��������" << t.stu.name << "  ѧ�����䣺" << t.stu.age << "  ѧ���ɼ���" << t.stu.score << endl;


	system("pause");
	return 0;
}
*/




// Task 63���ṹ�� - �ṹ������������
//�ܽ�:��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����
/*
#include<iostream>
using namespace std;
#include<string>

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ����Ϣ����
//1��ֵ����
void printStudent(struct student s)
{
	//ֵ����ֱ����"."
	s.age = 100;   //ֵ���ݣ��β����ɲ�Ӱ��ʵ��
	cout << "�Ӻ�����  ������" << s.name << "  ���䣺" << s.age << "  ������" << s.score << endl;
}
//2����ַ����
void printStudent2(struct student* p)
{
	//��ַ������Ҫ��"->"
	p->age = 200;   //��ַ���ݣ��βο�������ʵ��
	cout << "�Ӻ���2��  ������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;
}

int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "Frank";
	s.age = 18;
	s.score = 100;

	//printStudent(s);   //ֵ����
	printStudent2(&s); //��ַ����

	cout << "main�����д�ӡ ������" << s.name << "  ���䣺" << s.age << "  ������" << s.score << endl;

	system("pause");
	return 0;
}
*/




// Task 64���ṹ�� - �ṹ����const��ʹ�ó���
/*
#include<iostream>
using namespace std;
#include<string>

//const��ʹ�ó���

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const student* s)//����const��һ�����޸ĵĲ����ͻᱨ���ɷ�ֹ���ǵ������
{
	//s->age = 150;   //ָ�����������������Ϣ
	cout << "������" << s->name << "���䣺" << s->age << "������" << s->score << endl;
}

int main()
{
	//�����ṹ�����
	struct student s = { "Frank",16,70 };

	//ͨ��������ӡ�ṹ�������Ϣ
	printStudent(&s);

	cout << "main��Frank����Ϊ��" << s.age << endl;

	system("pause");
	return 0;
}
*/




// Task 65���ṹ�� - �ṹ�尸��1
/*
#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//ѧ���Ľṹ�嶨��
struct student
{
	string sName;
	int score;
};

//��ʦ�Ľṹ�嶨��
struct teacher
{
	string tName;
	struct student sArray[5];    //�ṹ��Ƕ�׽ṹ�壬�����ǽṹ������
};

//����ʦ��ѧ����ֵ�ĺ���
void allocatespace(struct teacher tArray[], int len) //�˴����������ǵ�ַ
{
	string nameseed = "ABCDE";   //���ڱ�ʾ��������һ��ѧ��
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameseed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameseed[j];

			//����� From Task27
			int random = rand() % 61 + 40;   //  40 ~ 100
			tArray[i].sArray[j].score = random;
		}
	}
}

//��ӡ������Ϣ
void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName << " ���Է�����" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1������3����ʦ������
	struct teacher tArray[3];

	//2��ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	//3����ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}
*/




// Task 66���ṹ�� - �ṹ�尸��2
//C++��� һ��Ҫע�ؽ׶��Դ����������������
/*
#include<iostream>
using namespace std;
#include<string>

//����Ӣ�۵Ľṹ��
struct Hero
{
	string name;   //Ӣ������
	int age;       //Ӣ������
	string sex;    //Ӣ���Ա�
};

//�������Ӣ���б�ĺ���
void printHero(struct Hero HeroArray[], int len)    
{
	for (int i = 0; i < len; i++)
	{
		cout << "��" << i + 1 << "λӢ���ǣ�" << HeroArray[i].name << " ���䣺" << HeroArray[i].age << " �Ա�" << HeroArray[i].sex << endl;
	}

}

//����ð������
//�˴����������ǵ�ַ�����Ϊ��ַ���ݣ������޸������ڲ�������
void bubblesort(struct Hero HeroArray[], int len)   //From Task41
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			//���j�±�Ԫ�ص��������j+1�±�����䣬��������Ԫ��
			if (HeroArray[j].age > HeroArray[j + 1].age)  
			{
				struct Hero temphero = HeroArray[j];   //������ʱHero���ڽ���
				HeroArray[j] = HeroArray[j + 1];
				HeroArray[j + 1] = temphero;
			}
		}
	}
}

int main()
{
	//����������5��Ӣ�ۣ�д��main�������棩
	struct Hero HeroArray[5]
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	
	//�������鳤��
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

	//�������ǰӢ���б�
	cout << "����ǰӢ���б�Ϊ��" << endl;
	printHero(HeroArray, len);

	//ð������
	bubblesort(HeroArray, len);

	//��������Ӣ���б�
	cout << "�����Ӣ���б�Ϊ��" << endl;
	printHero(HeroArray, len);

	cout << "����ս���ɣ����ɽԷ�ǽ" << endl;

	system("pause");
	return 0;
}
*/













