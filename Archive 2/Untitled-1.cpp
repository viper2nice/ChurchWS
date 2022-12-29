#include <iostream>
using namespace std;

int main()
{

    cout << "how is your day today" << endl;
    system("pause");
    return 0;
}

int sumSq(int n)
{
	int answer = 0;

	for (int i = 1; i <= n; i++)
	{
		answer = answer + i * i;
	}
	return answer;
}

bool isNegative(double A[], int size)
{
	bool isNegative = true;

	for (int i = 0; i <= size; i++)
	{
		if (A[i] > 0)
		{
			isNegative = false;
			return false;
		}
	}
	return isNegative;
}

void addScalar(double A[], double x, int size)
{
	for (int i = 0; i < size; i++)
	{
		A[i] += x;
	}
}
void printaddScalar(double A[], double x, int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << endl;
}


double smallestPos(double A[], int size)
{
	double smallestNum = 500000;


	for (int i = 0; i < size; i++)
	{

		if (smallestNum > A[i] && A[i] > 0)
			smallestNum = A[i];

	}
	if (smallestNum == 500000)
		return -1;
	return smallestNum;
}

double getRange(double A[], int size)
{
	double highVal = 0;
	double lowVal = 0;
	double answer = 0;

	for (int i = 0; i < size; i++)
	{
		if (highVal < A[i])
			highVal = A[i];
		if (lowVal > A[i])
			lowVal = A[i];
	}
	answer = highVal - lowVal;
	return answer;
}

void fillArray(double A[], int n)
{
	for (int i = 0; i < n; i++)
		A[i] = rand() % 101;
}
void printArray(double A[], int n)
{
	cout << "{";
	for (int i = 0; i < n; i++)
		cout << A[i] << ", ";
	cout << "}" << endl;
}
void sortArray(double A[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int mini = i;
		for (int j = i + 1; j < size; j++)
			if (A[j] < A[mini])
				mini = j;
		if (mini != i)
		{
			double temp = A[i];
			A[i] = A[mini];
			A[mini] = temp;
		}
	}
}

bool isSorted(int A[], int size)
{
	bool isSorted = true;
		for (int i = 0; i < size; i++)
		{
			if (A[i] > A[i + 1])
			{
				isSorted = false;
				return false;
			}
		}
		return isSorted;
}



