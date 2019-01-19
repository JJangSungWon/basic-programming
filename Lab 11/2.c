#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<math.h>

typedef double Vec3D[3];
int isEqualVec(Vec3D v1, Vec3D v2);
double norm(Vec3D v);
double inner(Vec3D v1, Vec3D v2);
double angle(Vec3D v1, Vec3D v2);
void project(Vec3D v1, Vec3D v2, Vec3D v3);
void addVec(Vec3D v1, Vec3D v2, Vec3D v3);
void multScalarToVec(Vec3D v1, double scalar, Vec3D v2);
void print(Vec3D v1, Vec3D v2);

int main(void)
{
	Vec3D v1, v2, v3;
	int n;
	double result;

	printf("�� ���͸� �Է��ϼ��� : ");
	scanf("%lf %lf %lf %lf %lf %lf", &v1[0], &v1[1], &v1[2], &v2[0], &v2[1], &v2[2]);
	print(v1, v2);

	n = isEqualVec(v1, v2);
	if (n == 0)
		puts("�Էµ� �� ���ʹ� �ٸ� ���� �Դϴ�.\n");
	else
		puts("�Էµ� �� ��Ʈ�� ���� ���� �Դϴ�.\n");

	addVec(v1, v2, v3);
	printf("�� ������ �� v3 = [%.2f %.2f %.2f]�Դϴ�.\n", v3[0], v3[1], v3[2]);

	result = inner(v1, v2);
	printf("�� ������ ������ %.2f �Դϴ�\n", result);

	result = angle(v1, v2);
	printf("�� ������ ������ %.2f�� �Դϴ�.\n", result);

	project(v1, v2, v3);
	printf("���� v1�� ����v2�� ������ ���� v3 = [%.2f %.2f %.2f]\n", v3[0], v3[1], v3[2]);

	return 0;
}

int isEqualVec(Vec3D v1, Vec3D v2) //���� �� 
{
	double n1, n2, n3;
	n1 = v1[0] - v2[0];
	n2 = v1[1] - v2[1];
	n3 = v1[2] - v2[2];

	if (n1 == n2)
		if (n2 == n3)
			return 1;

	return 0;
}

double norm(Vec3D v) //ũ��
{
	double result;
	result = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
	return result;
}

double inner(Vec3D v1, Vec3D v2) //���� 
{
	double result;
	result = (v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2]);
	return result;
}

double angle(Vec3D v1, Vec3D v2) //���� 
{
	double result;
	double n1, n2;

	n1 = norm(v1);
	n2 = norm(v2);

	result = acos(inner(v1, v2) / n1 * n2);
	
	return (180 * result) / acos(-1.0);
}

void project(Vec3D v1, Vec3D v2, Vec3D v3) //����
{
	double temp;
	double n1, n2;
	temp = angle(v1, v2);

	
	n1 = abs(norm(v1)) * inner(v1, v2); // ���������� ����
	n2 = norm(v2) / abs(v2); //��������

	temp = n1 * n2;
	v3[0] = v2[0];
	v3[1] = v2[1];
	v3[2] = v2[2];

	v3[0] = temp * v3[0];
	v3[1] = temp * v3[1];
	v3[2] = temp * v3[2];
}

void addVec(Vec3D v1, Vec3D v2, Vec3D v3) //��
{
	v3[0] = v1[0] + v2[0];
	v3[1] = v1[1] + v2[1];
	v3[2] = v1[2] + v2[2];
}

void multScalarToVec(Vec3D v1, double scalar, Vec3D v2) //��
{
	v2[0] = v1[0] * scalar;
	v2[1] = v1[1] * scalar;
	v2[2] = v1[2] * scalar;
}

void print(Vec3D v1, Vec3D v2)
{
	printf("�Էµ� �� ���ʹ� v1 = [%.2f %.2f %.2f], v2 = [%.2f %.2f %.2f]�Դϴ�.\n",
		v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);

}