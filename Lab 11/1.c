#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<math.h>

typedef double Point2D[2]; 
typedef double Line2D[3];

void print();
void calIntersectionPoint(Line2D l1, Line2D l2, Point2D pt);
double getDistance(Point2D pt, Line2D l);
void calLineEquation(Point2D pt1, Point2D pt2, Line2D l);

int main(void)
{
	int n;
	double result;
	Point2D p1, p2;
	Line2D l1,l2;

	while (1)
	{
		print();
		scanf("%d", &n);
		if (n == 1)
		{
			printf("�� ���� �Է��ϼ��� : ");
			scanf("%lf %lf %lf %lf", &p1[0], &p1[1], &p2[0], &p2[1]);
			calLineEquation(p1, p2, l1);
			printf("�� �� (%.2lf %.2lf), (%.2lf, %.2lf)�� ������ ������ �������� %.2lfx + (%.2lfy) + %.2lf = 0�Դϴ�\n",
				p1[0], p1[1], p2[0], p2[1], l1[0], l1[1], l1[2]);
			continue;
		}
		else if (n == 2)
		{
			printf("���� ������ �Է��ϼ��� : ");
			scanf("%lf %lf %lf %lf %lf", &p1[0], &p1[1], &l1[0], &l1[1], &l1[2]);
			result = getDistance(p1, l1);
			printf("�� (%.2lf %.2lf)�� ���� %.2lfx + (%.2lfy) + (%.2lf) = 0 ������ �Ÿ��� %.2lf�Դϴ�.\n",
				p1[0], p1[1], l1[0], l1[1], l1[2], result);
		}
		else if (n == 3)
		{
			printf("�� ������ �������� �Է��ϼ��� : ");
			scanf("%lf %lf %lf %lf %lf %lf", &l1[0], &l1[1], &l1[2], &l2[0], &l2[1], &l2[2]);
			calIntersectionPoint(l1, l2, p1);
			printf("���� %.2lfx + (%.2lfy) + (%.2lf) = 0 �� ���� %.2lfx + (%.2lfy) + (%.2lf) = 0 �� ������ (%.2f, %.2lf)�Դϴ�.\n",
				l1[0], l1[1], l1[2], l2[0], l2[1], l2[2] , p1[0], p1[1]);
		}
		else if (n == 4)
			break;

	}

	return 0;
}


void print()
{
	puts("1. ������ ������ ���ϱ�");
	puts("2. ������ ���� �Ÿ� ���ϱ�");
	puts("3. ������ ���� ���ϱ�");
	puts("4. �����ϱ�");
	printf("�޴��� �Է��ϼ���: ");
}

void calLineEquation(Point2D pt1, Point2D pt2, Line2D l)
{
	double slope, yintercept;

	slope = (pt1[1] - pt2[1]) / (pt1[0] - pt2[0]); // ����
	yintercept = pt1[1] - slope * pt1[0];
	l[2] = -yintercept;
	l[1] = 1;
	l[0] = -slope;
}

double getDistance(Point2D pt, Line2D l)
{
	double result;

	result = ((l[0] * pt[0] + l[1] * pt[1] + l[2]) / sqrt((pt[0] * pt[0]) + (pt[1] * pt[1])));
	return result;
}

void calIntersectionPoint(Line2D l1, Line2D l2, Point2D pt)
{
	pt[0] = ((-l2[2] / l2[1] - (-l1[2] / l1[1])) / ((-l1[0] / l1[1]) - (l1[0] / l1[1])));
	pt[1] = (-l1[0]/l1[1] * pt[0]) + (-(l1[2] / l1[1]));
}
