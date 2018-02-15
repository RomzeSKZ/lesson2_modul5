#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int zadanie;
	do
	{
		cout << "Ââåäèòå íîìåð çàäàíèÿ: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "Çàäàíèå 1." << endl;
			cout << "Ìàññèâ ïðåäíàçíà÷åí äëÿ õðàíåíèÿ çíà÷åíèé âåñîâ äâàäöàòè ÷åëîâåê. Ñ ïîìîùüþ äàò÷èêà ñëó÷àéíûõ ÷èñåë çàïîëíèòü ìàññèâ öåëûìè çíà÷åíèÿìè, ëåæàùèìè â äèàïàçîíå îò 50 äî 100 âêëþ÷èòåëüíî." << endl;
			cout << "Ðåøåíèå:" << endl;
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 50 + rand() % 51;
				cout << i + 1 << " ÷åë. - " << a[i] << " êã." << endl;;
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Çàäàíèå 2." << endl;
			cout << "Çàïîëíèòü ìàññèâ èç âîñüìè ýëåìåíòîâ òàêèì îáðàçîì, ÷òîáû çíà÷åíèÿ ýëåìåíòîâ ïðè ïðîñìîòðå ìàññèâà ñëåâà íàïðàâî îáðàçîâûâàëè: " << endl;
			cout << "a.	óáûâàþùóþ ïîñëåäîâàòåëüíîñòü;" << endl;
			cout << "b.	âîçðàñòàþùóþ ïîñëåäîâàòåëüíîñòü." << endl;
			cout << "Ðåøåíèå:" << endl;
			int a[8], tmp, flag = 0, min, max;
			cout << "Èñõîäíûé ìàññèâ: ";
			for (int i = 0; i < 8; i++)
			{
				do
				{
					tmp = 1 + rand() % 8;
					flag = 1;
					for (int j = 0; j < i; j++)
					{
						if (a[j] == tmp)
						{
							flag = 0;
							break;
						}
					}
				} while (flag == 0);
				a[i] = tmp;
				cout << a[i] << " ";
			}
			cout << endl << "Ïî óáûâàíèþ: ";
			for (int i = 0; i < 7; i++)
			{
				max = i;
				for (int j = i + 1; j < 8; j++)
				{
					if (a[j] > a[max])
						max = j;
				}
				tmp = a[i];
				a[i] = a[max];
				a[max] = tmp;
			}
			for (int i = 0; i < 8; i++)
				cout << a[i] << " ";
			cout << endl << "Ïî âîçðàñòàíèþ: ";
			for (int i = 0; i < 7; i++)
			{
				min = i;
				for (int j = i + 1; j < 8; j++)
				{
					if (a[j] < a[min])
						min = j;
				}
				tmp = a[i];
				a[i] = a[min];
				a[min] = tmp;
			}
			for (int i = 0; i < 8; i++)
				cout << a[i] << " ";
			cout << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Çàäàíèå 3." << endl;
			cout << "Ââåñòè öåëî÷èñëåííûé ìàññèâ, ñîñòîÿùèé èç 10 ýëåìåíòîâ. Ïîìåíÿòü ìåñòàìè ìàêñèìàëüíûé è ïåðâûé ýëåìåíòû." << endl;
			cout << "Ðåøåíèå:" << endl;
			int a[10], tmp, flag = 0, max = 0, maxi, a0;
			cout << "Èñõîäíûé ìàññèâ: ";
			for (int i = 0; i < 10; i++)
			{
				do
				{
					tmp = 1 + rand() % 10;
					flag = 1;
					for (int j = 0; j < i; j++)
					{
						if (a[j] == tmp)
						{
							flag = 0;
							break;
						}
					}
				} while (flag == 0);
				a[i] = tmp;
				if (a[i] > max)
				{
					max = a[i];
					maxi = i;
				}
				cout << a[i] << " ";
			}
			cout << endl << "Ìàêñèìàëüíîå çíà÷åíèå = " << max << endl;
			tmp = a[maxi];
			a[maxi] = a[0];
			a[0] = tmp;
			cout << "Èçìåíåííûé ìàññèâ: ";
			for (int i = 0; i < 10; i++)
				cout << a[i] << " ";
			cout << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Çàäàíèå 4." << endl;
			cout << "Çàäàí ìàññèâ, ñîñòîÿùèé èç 15 ýëåìåíòîâ âåùåñòâåííîãî òèïà. Îïðåäåëèòü êîëè÷åñòâî ýëåìåíòîâ, çíà÷åíèÿ êîòîðûõ áîëüøå ïåðâîãî ýëåìåíòà." << endl;
			cout << "Ðåøåíèå:" << endl;
			double a[15];
			int k = 0;
			cout.precision(3);
			for (int i = 0; i < 15; i++)
			{
				a[i] = (double)(rand() % 1000) / (rand() % 1000);
				cout << "|" << a[i];
			}
			cout << endl;
			for (int i = 1; i < 15; i++)
			{
				if (a[i] > a[0])
					k++;
			}
			cout << "Êîë-âî ýëåìåíòîâ áîëüøèõ ïåðâîãî çíà÷åíèÿ - " << k << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Çàäàíèå 5." << endl;
			cout << "Ââåñòè öåëî÷èñëåííûé ìàññèâ, ñîñòîÿùèé èç 15 ýëåìåíòîâ. Îïðåäåëèòü ñóììó è ðàçíîñòü ìàêñèìàëüíîãî è ìèíèìàëüíîãî  ýëåìåíòîâ." << endl;
			cout << "Ðåøåíèå:" << endl;
			int a[15], tmp, flag = 0, max = 0, min;
			cout << "Èñõîäíûé ìàññèâ: ";
			for (int i = 0; i < 15; i++)
			{
				do
				{
					tmp = 1 + rand() % 15;
					flag = 1;
					for (int j = 0; j < i; j++)
					{
						if (a[j] == tmp)
						{
							flag = 0;
							break;
						}
					}
				} while (flag == 0);
				a[i] = tmp;
				if (a[i] > max)
					max = a[i];
				cout << a[i] << " ";
				min = a[0];
			}
			for (int i = 1; i < 15; i++)
			{
				if (a[i] < min)
					min = a[i];
			}
			cout << endl << "Ñóììà ìàêñ. è ìèí. çíà÷åíèé =  " << max + min << endl;
			cout << "Ðàçíîñòü ìàêñ. è ìèí. çíà÷åíèé =  " << max - min << endl;
			break;
		}
		default:
			cout << "Íåâåðíûé íîìåð çàäàíèÿ." << endl;
			break;
		}
	} while (zadanie > 0);
}