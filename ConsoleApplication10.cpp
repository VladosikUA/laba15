//����������� 15
// �������� 1
//#include <stdio.h>
//#include <windows.h>
//
//int main() {
//	SetConsoleOutputCP(1251);
//	int a, b;
//	printf("������ ����a � �� b\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b){
//		printf("��������� %d", a);
//    }
//	else {
//		printf("��������� %d %d", a, b);
//	}
//	return 0;
//}
                                                 //// �������� 2
//#include <stdio.h>
//#include <Windows.h>
//
//int main() {
//    SetConsoleOutputCP(1251);
//    int a, b, c;
//    printf("������ ��� �����: \n");
//    scanf_s("%d %d %d", &a, &b, &c);
//    int min = a;
//    if (b < min) {
//        min = b;
//    }
//    if (c < min) {
//        min = c;
//    }
//    printf("̳������� �����: %d\n", min);
//    return 0;
//}
                                                //// �������� 3
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() 
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("������ ����� ������\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("������� �������� ���'��\n");
//		return 1;
//		}
//       srand(time(NULL));
//	 for (int i = 0; i < n; ++i) {
//		 arr[i] = rand() % 501;
//	}
//	printf("�������� �������� ������\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d �������= %d\n",i, arr[i]);
//		
//	}
//	for (int i = 0; i < n; ++i) {
//		if (arr[i]%2==0)
//		arr[i] = 0;
//	}
//	printf("������� �����\n");
//	for (int i = 0; i < n; ++i) {
//		printf("%d  ", arr[i]);
//	}
//	free(arr);
//	return 0;
//}
                                                 //// �������� 4
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>

//int main()
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("������ ����� ������\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("������� �������� ���'��\n");
//		return 1;
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i) {
//		arr[i] = rand() % 501;
//	}
//	printf("�������� �������� ������\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d �������= %d\n", i, arr[i]);
//	}
//	int suma = 0;
//	for (int i = 0; i < n; ++i) {
//		suma += arr[i];
//	}
//	printf("���� �������� ������: %d\n", suma);
//	free(arr);
//	return 0;
//}
//                                                          //�������� 5
//
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("������ ����� ������\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("������� �������� ���'��\n");
//		return 1;
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i) {
//		arr[i] = rand() % 501;
//	}
//	printf("�������� �������� ������\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d �������= %d\n", i, arr[i]);
//	}
//	printf("\n�������� ������ � ����������� �������\n");
//	for (int i = n - 1; i >= 0; --i) {
//		printf("%d �������= %d\n",n-i,  arr[i]);
//	}
//
//	free(arr);
//	return 0;
//}
//                                                         // �������� 6
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("������ ����� ������\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("������� �������� ���'��\n");
//		return 0;
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i) {
//		arr[i] = rand() % 501;
//	}
//	printf("�������� �������� ������\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d �������= %d\n", i, arr[i]);
//	}
//	int min = 0, max = 0;
//	for (int i=1; i<n; ++i){
//		if (arr[i] < arr[min]) {
//			min = i;
//		}
//		else if (arr[i] > arr[max]) {
//			max = i;
//		}
//	   }
//	printf("����������� ��������= %d\n", arr[max]);
//	printf("̳������� ��������= %d\n", arr[min]);
//	free(arr);
//	return 0;
//	}
