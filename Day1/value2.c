#include <stdio.h>

int main()
{
								// signed : ���� ����� �����Ѵ�. ��������
	signed char ch = 0;			// -128 ~ 127(����ڸ��� 0�� ����������, 0�� ������ ����� �ƴ�)
	unsigned char ch2 = 0;		// 0 ~ 255 unsigned�� ����ϸ� ����� ����

	unsigned int num;
	num = 123456;
	printf("num: %d\n", num);
	num = -1;
	printf("num: %d\n", num);
	printf("num: %u\n", num);

	return 0;
}