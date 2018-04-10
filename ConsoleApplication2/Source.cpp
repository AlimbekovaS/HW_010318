#include<iostream>
#include<stdio.h>
#include<string.h>
#include<time.h>
using namespace std;
unsigned short int z;

void main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "\nКакое задание?";
		cin >> z;
		if (z == 0)
		{
			break;
		}
		else if (z == 1)
		{
			//1.	Даны две фамилии. Определить, какая из них длиннее.
			char fa[20], fa1[20];

			cout << "Введите первую фамилию: ";
			cin >> fa;
			cout << "Введите второую фамилию: ";
			cin >> fa1;
			if (strlen(fa) > strlen(fa1))
				cout << "Фамилия " << fa << " длинее на " << strlen(fa) - strlen(fa1) << " букв";
			else
				cout << "Фамилия " << fa1 << " длинее на " << strlen(fa1) - strlen(fa) << " букв";

		}
		else if (z == 2)
		{
			//2.Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.
			int len1, len2, len3, max;
			char city1[50] = "Almaty";
			char city2[50] = "Karaganda";
			char city3[50] = "Semipalatinsk";
			if ((strlen(city1) > strlen(city2)) && (strlen(city1) > strlen(city3)))
				printf("самое длинное название - %s\n", city1);
			if ((strlen(city2) > strlen(city1)) && (strlen(city2) > strlen(city3)))
				printf("самое длинное название  - %s\n", city2);
			if ((strlen(city3) > strlen(city2)) && (strlen(city3) > strlen(city1)))
				printf("самое длинное название  - %s\n", city3);
			if ((strlen(city1) < strlen(city2)) && (strlen(city1) < strlen(city3)))
				printf("самое короткое название - %s\n", city1);
			if ((strlen(city2) < strlen(city1)) && (strlen(city2) < strlen(city3)))
				printf("самое короткое название - %s\n", city2);
			if ((strlen(city3) < strlen(city1)) && (strlen(city3) < strlen(city2)))
				printf("самое короткое название - %s\n", city3);
		}
		else if (z == 3)
		{
			cout << "3.Дано слово. Вывести на экран его третий символ\n";
			char word[20];
			printf("Введите слово= ");
			scanf("%s", word);
			printf("третий символ= %c\n", word[2]);
		}
		else if (z == 4)
		{
			printf("4.Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'\n");
			char s[12] = "jr4rg5gr6a4";
			for (int i = 0; i < strlen(s); i++)
			{
				int code = (int)s[i];
				if (code >= 48 && code <= 57)
					s[i] = '!';
			}
			printf("текст: %s\n\n", s);
		}
		else if (z == 5)
		{
			cout << "5.Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы +, -, *.\n";

			char Mass[2][6];
			int Nam = 0;
			// 43 = "+"
			// 45 = "-"
			// 42 = "*"
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					*(*(Mass + i) + j) = 40 + rand() % (64 - 40);
					printf("%c ", *(*(Mass + i) + j));

					if ((int)*(*(Mass + i) + j) == 43 || (int)*(*(Mass + i) + j) == 45 || (int)*(*(Mass + i) + j) == 42)
						Nam++;
				}
				printf("\n");
			}

			printf("встречаются символы \"+\", \"-\", \"*\" = %d  \n", Nam);

		}
		else if (z == 6)
		{
			cout << "6.Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.\n";
			char Mass[15];
			int Num = 0;
			int Vib = 0;
			/*for (int i = 0; i <= 256; i++)
			{
			printf("%d - %c\n", i, i);
			}
			*/
			for (int i = 0; i < 15; i++)
			{
				Vib = 192 + rand() % (256 - 192);
				*(Mass + i) = Vib;
				printf("%c   ", *(Mass + i));
				switch (Vib)
				{
				case 192:
				case 197:
				case 200:
				case 206:
				case 211:
				case 219:
				case 221:
				case 222:
				case 223:
				case (192 + 32):
				case (197 + 32):
				case (200 + 32):
				case (206 + 32):
				case (211 + 32):
				case (219 + 32):
				case (221 + 32):
				case (222 + 32):
				case (223 + 32):
				{
					Num++;
					break;
				}
				default:
					break;
				}
			}
			printf("\nколичество гласных русских букв Num = %d\n", Num);
		}
		else if (z == 7)
		{
			cout << "7.Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует.\n";
			char Mass[] = "gjjhr:nkj:ihjnk";
			char key = ':';
			int count = 0;
			for (int i = 0; i < strlen(Mass); i++)
			{
				if (Mass[i] != key)
					count += 1;
				else
					break;
			}
			cout << "\n" << count << " символов ему предшествует";
		}
		else if (z == 8)
		{
			cout << "8.Дан массив символов. Определить, сколько раз входит в него группа букв abc.";
			char Mass[] = "gjjhr:nkj:ihjnkabckjaclkcxc";
			char key[] = "abc";
			int count = 0;
			for (int i = 0; i < strlen(key); i++)
			{
				for (int j = 0; j < strlen(Mass); j++)
				{
					if ( key[i]==Mass[j])
						count += 1;
				}
			}
			cout <<"\nгруппа букв abc входит в него "<< count<<" раз";
		}
		else if (z == 9)
		{
			cout << "9.Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.\n";
			for (int i = 0; i <= 256; i++)
			{
				printf("%d - %c\n", i, i);
			}
			char mas1[10];
			char mas2[10], mas3[10];
			int count = 0;
			for (int i = 0;i < 10;i++)
			{
				mas1[i] = 65 + rand() % (90 - 65);
				cout << mas1[i] << " ";
			}
			cout << endl;
			for (int i = 0;i < 10;i++)
			{
				mas2[i] = 65 + rand() % (90 - 65);
				cout << mas2[i] << " ";
			}
			for (int j = 0;j < 10;j++)
			{
				for (int i = 0; i < 10;i++)
				{
					char temp;
					for (int k = 0;k < 10;k++)
					{
						if (mas1[i] != mas2[k])
						{
							temp = mas1[i];
						}
						else
						{
							temp = NULL;
							break;
						}
					}
					mas3[j] = temp;
					if (mas3[j] != NULL)
					{
						j++;
					}
				}
			}
				
				cout << mas3;
				cout << endl;
		}
	}
	system("pause");
}
