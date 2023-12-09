//Лабораторна 15
// Завдання 1
//#include <stdio.h>
//#include <windows.h>
//
//int main() {
//	SetConsoleOutputCP(1251);
//	int a, b;
//	printf("Введіть числa а та b\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b){
//		printf("Результат %d", a);
//    }
//	else {
//		printf("Результат %d %d", a, b);
//	}
//	return 0;
//}
                                                 //// Завдання 2
//#include <stdio.h>
//#include <Windows.h>
//
//int main() {
//    SetConsoleOutputCP(1251);
//    int a, b, c;
//    printf("Введіть три числа: \n");
//    scanf_s("%d %d %d", &a, &b, &c);
//    int min = a;
//    if (b < min) {
//        min = b;
//    }
//    if (c < min) {
//        min = c;
//    }
//    printf("Мінімальне число: %d\n", min);
//    return 0;
//}
                                                //// Завдання 3
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() 
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("Введіть розмір масиву\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("Помилка виділення пам'яті\n");
//		return 1;
//		}
//       srand(time(NULL));
//	 for (int i = 0; i < n; ++i) {
//		 arr[i] = rand() % 501;
//	}
//	printf("Випадкові елементи масиву\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d Елемент= %d\n",i, arr[i]);
//		
//	}
//	for (int i = 0; i < n; ++i) {
//		if (arr[i]%2==0)
//		arr[i] = 0;
//	}
//	printf("кінцевий масив\n");
//	for (int i = 0; i < n; ++i) {
//		printf("%d  ", arr[i]);
//	}
//	free(arr);
//	return 0;
//}
                                                 //// Завдання 4
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>

//int main()
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("Введіть розмір масиву\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("Помилка виділення пам'яті\n");
//		return 1;
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i) {
//		arr[i] = rand() % 501;
//	}
//	printf("Випадкові елементи масиву\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d Елемент= %d\n", i, arr[i]);
//	}
//	int suma = 0;
//	for (int i = 0; i < n; ++i) {
//		suma += arr[i];
//	}
//	printf("Сума елементів масиву: %d\n", suma);
//	free(arr);
//	return 0;
//}
//                                                          //Завдання 5
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
//	printf("Введіть розмір масиву\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("Помилка виділення пам'яті\n");
//		return 1;
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i) {
//		arr[i] = rand() % 501;
//	}
//	printf("Випадкові елементи масиву\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d Елемент= %d\n", i, arr[i]);
//	}
//	printf("\nЕлементи масиву в зворотньому порядку\n");
//	for (int i = n - 1; i >= 0; --i) {
//		printf("%d Елемент= %d\n",n-i,  arr[i]);
//	}
//
//	free(arr);
//	return 0;
//}
//                                                         // Завдання 6
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("Введіть розмір масиву\n");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("Помилка виділення пам'яті\n");
//		return 0;
//	}
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i) {
//		arr[i] = rand() % 501;
//	}
//	printf("Випадкові елементи масиву\n");
//	for (int i = 0; i < n; ++i) {
//		printf(" %d Елемент= %d\n", i, arr[i]);
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
//	printf("Максимальне значення= %d\n", arr[max]);
//	printf("Мінімальне значення= %d\n", arr[min]);
//	free(arr);
//	return 0;
//	}

