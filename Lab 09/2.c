#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
	char name[30]; //�̸�
	char address[100]; //�ּ�
};

struct employee {
	struct person p;
	int num; //���
	int pay; //����
	double in; //�μ�Ƽ��� double��
};



int main(void)
{
	struct employee mem[4];
	int i;
	double year_pay[4];
	char name1[10] = "������", name2[10] = "���ڰ�", name3[10] = "������", name4[10] = "���¿�";
	char address1[30] = "����� ���α� ��ô��";
	char address2[30] = "��⵵ �Ⱦ�� ��굿";
	char address3[30] = "��õ������ ������";
	char address4[30] = "��⵵ �ϻ�� ȭ�";

	//1
	mem[0].num = 20123478;
	strcpy(mem[0].p.name, name1);
	strcpy(mem[0].p.address, address1);
	mem[0].pay = 1200000;
	mem[0].in = 120.0; //double������ �Է�.

	//2
	mem[1].num = 20123479;
	strcpy(mem[1].p.name, name2);
	strcpy(mem[1].p.address, address2);
	mem[1].pay = 1500000;
	mem[1].in = 150.0;//double������ �Է�.

	//3
	mem[2].num = 20123480;
	strcpy(mem[2].p.name, name3);
	strcpy(mem[2].p.address, address3);
	mem[2].pay = 1800000;
	mem[2].in = 180.0;//double������ �Է�.

	//4
	mem[3].num = 20123481;
	strcpy(mem[3].p.name, name4);
	strcpy(mem[3].p.address, address4);
	mem[3].pay = 2200000;
	mem[3].in = 250.0;//double������ �Է�.




	//�������
	for (i = 0; i < 4; i++)
		year_pay[i] = mem[i].pay * (12 + (0.01 * mem[i].in));

	//print
	printf("  �� ��\t   �� ��\t�� ��\t\t    �� ��   �μ�Ƽ��\t ����\n");
	for (i = 0; i < 4; i++)
	{
		printf("%8d   %3s   %-20s   %7d   %5.0f%%   %10.1f\n", mem[i].num, mem[i].p.name, mem[i].p.address, mem[i].pay, mem[i].in, year_pay[i]);
	}

	return 0;
}