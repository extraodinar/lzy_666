#include <stdio.h>
#include <string.h>
#include <assert.h>
#define CRT_SECURE_NO_WARNINGS
//int main()
//{
//	char arr1[30] = "abcdefghikbng";
//	char arr2[] = "abcdefghijkl";
//	strncpy_s(arr1,30, arr2,15);
//	printf("%s", arr1);
//	return 0;
//}
//模拟实现strncpy函数
//void my_strncpy(char* p1, char* p2,int k)
//{
//	while (k && (* p1++ = *p2++))
//	{
//		k--;
//		if (k == 0)
//			*p1 = 0;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcd";
//	char arr2[] = "abcdefghij";
//	my_strncpy(arr1, arr2,8);
//	printf("%s", arr1);
//}
//void my_strncat(char* p1, char* p2, int k)
//{
//	while (*p1 != 0)
//		p1++;
//	while ((*p1++ = *p2++) && k)
//	{
//		--k;
//	}
//}
//int main()
//{
//	char arr1[20] = "I ";
//	char arr2[] = "love you,baby";
//	my_strncat(arr1, arr2, 7);
//	printf("%s", arr1);
//		return 0;
//}
// strcat是从\0处开始追加
// 模拟实现strncmp函数
//int my_strncmp(const char* p1, const char* p2, int k)
//{
//	assert(*p1 && *p2);
//	while (*p1++ == *p2++ && --k);
//	return (*p1 - *p2);
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdef";
//	int ret=my_strncmp(arr1, arr2, 5);
//	printf("%d", ret);
//	return 0;
//}
//模拟实现strstr
int my_strstr(const char* p1, const char* p2)
{
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s1 != *s2)
		{
			s1++;
		}
		while (*s1 == *s2 && *s1 != 0)
		{
			s1++;
			s2++;
		}
		cur++;
	}
	if (*s2==0)
		return 1;
	else
		return 0;
}
int main()
{
	char arr1[] = "abbbcdef";  //"Iloveyoubaby";
	char arr2[] = "bbc";
	int ret=my_strstr(arr1, arr2);
	printf("%d", ret);
	return 0;
}