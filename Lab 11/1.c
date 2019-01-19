#define _CRT_SECURE_NO_WARNINGS

//2015117800 장성원
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
			printf("두 점을 입력하세요 : ");
			scanf("%lf %lf %lf %lf", &p1[0], &p1[1], &p2[0], &p2[1]);
			calLineEquation(p1, p2, l1);
			printf("두 점 (%.2lf %.2lf), (%.2lf, %.2lf)을 지나는 직선의 방정식은 %.2lfx + (%.2lfy) + %.2lf = 0입니다\n",
				p1[0], p1[1], p2[0], p2[1], l1[0], l1[1], l1[2]);
			continue;
		}
		else if (n == 2)
		{
			printf("점과 직선을 입력하세요 : ");
			scanf("%lf %lf %lf %lf %lf", &p1[0], &p1[1], &l1[0], &l1[1], &l1[2]);
			result = getDistance(p1, l1);
			printf("점 (%.2lf %.2lf)과 직선 %.2lfx + (%.2lfy) + (%.2lf) = 0 사이의 거리는 %.2lf입니다.\n",
				p1[0], p1[1], l1[0], l1[1], l1[2], result);
		}
		else if (n == 3)
		{
			printf("두 직선의 방정식을 입력하세요 : ");
			scanf("%lf %lf %lf %lf %lf %lf", &l1[0], &l1[1], &l1[2], &l2[0], &l2[1], &l2[2]);
			calIntersectionPoint(l1, l2, p1);
			printf("직선 %.2lfx + (%.2lfy) + (%.2lf) = 0 과 직선 %.2lfx + (%.2lfy) + (%.2lf) = 0 의 교점은 (%.2f, %.2lf)입니다.\n",
				l1[0], l1[1], l1[2], l2[0], l2[1], l2[2] , p1[0], p1[1]);
		}
		else if (n == 4)
			break;

	}

	return 0;
}


void print()
{
	puts("1. 직선의 방정식 구하기");
	puts("2. 직선과 점의 거리 구하기");
	puts("3. 직선의 교점 구하기");
	puts("4. 종료하기");
	printf("메뉴를 입력하세요: ");
}

void calLineEquation(Point2D pt1, Point2D pt2, Line2D l)
{
	double slope, yintercept;

	slope = (pt1[1] - pt2[1]) / (pt1[0] - pt2[0]); // 기울기
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
