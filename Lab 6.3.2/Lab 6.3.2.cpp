#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void Create(int* a, const int size, const int Low, const int High,int i);
void Cout(int* a, const int size,int i);
int Condition(int* a, const int size);

int main()
{
	srand((unsigned)time(NULL));
	const int size = 10;
	int a[size];

	int Low = -10;
	int High = 10;

	Create(a, size, Low, High,0);

	cout << "Masyv:" << endl;
	Cout(a, size,0);
	cout << endl;

	Condition(a, size);

	cout << "Vporyadkovano za zrostannyam:" << endl;
	Cout(a, size,0);

	return 0;

}
void Create(int* a, const int size, const int Low, const int High,int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
	    Create(a, size, Low, High, i+1);
		
}
void Cout(int* a, const int size,int i)
{
	cout << setw(5) << a[i];
	if (i < size - 1)
		Cout(a, size, i + 1);
	else;
}
int Condition(int* a, const int size)
{
	int j = 0;
	int t = 0;
	int k = 0;

	for (int i = 0;i < size;i++)
	{
		j = i;
		for (t = i;t < size;t++)
		{
			if (a[j] > a[t])
			{
				j = t;
			}
		}
		swap(a[i], a[j]);
	}
	return 0;
}