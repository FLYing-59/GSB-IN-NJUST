#include<iostream>
using namespace std;

int main()
{
	double score;
	cout << "���������ĸ߿�������" << endl;
	cin >> score;
	cout << "���ķ���Ϊ��" << score << endl;

	if (score > 750 ||score < 0)
	{
		cout << "���Ͱ��ͣ��ټ��һ�¡�������TM��ĶԲ���" << endl;
	}
	else
	{
		if (score > 699)
			printf("��ϲ����������");
		else if (score > 625)
			printf("��ϲ�������˾�����");
		else if (score > 600)
			printf("��ϲ�������˶�����");
		else if (score > 500)
			printf("��ϲ�������˂���");
		else if (score > 400)
			printf("��ϲ�������˴�ש");
		else if (score > 0)
			printf("��");
		else if (score == 0)
			printf("�ð�Ŷ������������");
	}

	return 0;
}
