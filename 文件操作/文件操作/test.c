#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, fp);
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	/*fputc('a', stdout);*/
//	//fputc('b', pf);
//	//fputc('c', pf);
//	char ch = fgetc(pf);
//	printf("%c",ch);
//	fclose(pf);
////	pf = NULL;
//
//
//
////	return 0;
////}



//int main()
//{
//	FILE* pf = fopen("terc.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("abc", pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("terc.txt", "r");
//	char ch[1024] = { 0 };
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(ch, 1024, pf);
//	printf("%s", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("terc.txt", "r");
//	char ch[1024] = { 0 };
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(stdout, 1024, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};



int main()
{
	struct S s = { 100,3.14,"hello" };
	FILE* pf = fopen("ttt.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	fprintf(pf, "%d %lf %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
 }