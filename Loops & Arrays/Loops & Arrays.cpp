#include <iostream>
using namespace std;

//int main()
//{
//    for (int i = 10; i >= 2; i--)
//    {
//        cout << i << endl;
//    }
//}

//int main()
//{
//	float gradeScoreTotal = 0.0f;
//	for (int grades = 1; grades <= 6; grades++)
//	{
//		int gradeScore;
//		
//		cout << "What did you achieve in module " << grades << endl;
//		cin >> gradeScore;
//		if (gradeScore < 40)
//		{
//			cout << "You have failed." << endl;
//		}
//
//		gradeScoreTotal += gradeScore;
//		if (grades == 6)
//		{
//			gradeScoreTotal /= 6;
//			cout << gradeScoreTotal << endl;
//		}
//		
//	}
//
//	if (gradeScoreTotal > 39)
//			{
//				if (gradeScoreTotal > 49 && gradeScoreTotal < 60)
//				{
//					cout << "Your grade is C, and you have passed." << endl;
//				}
//				else if (gradeScoreTotal > 59 && gradeScoreTotal < 70)
//				{
//					cout << "Your grade is B, and you have passed." << endl;
//				}
//				else if (gradeScoreTotal > 69 && gradeScoreTotal < 85)
//				{
//					cout << "Your grade is A, and you have passed." << endl;
//				}
//				else if (gradeScoreTotal > 84)
//				{
//					cout << "Your grade is A*, and you have passed." << endl;
//				}
//				else
//				{
//					cout << "Your grade is D, and you have passed." << endl;
//				}
//			}
//			else
//			{
//				if (gradeScoreTotal < 30)
//				{
//					cout << "Your grade is F, and you have failed." << endl;
//				}
//				else
//				{
//					cout << "Your grade is E, and you have failed." << endl;
//				}
//			}
//
//}

//int main()
//{
//	int ages[10] = { 29,34,21,19,16,45,34,57,99,40 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << ages[i] << endl;
//	}
//
//	for (int i = 9; i > 0; i--)
//	{
//		cout << ages[i] << endl;
//	}
//}

//int main()
//{
//	int squaredValues[19];
//	for (int i = 0; i < 19; i++)
//	{
//		squaredValues[i] = i * i;
//	}
//
//	for (int i = 18; i >= 0; i--)
//	{
//		cout << squaredValues[i] << endl;
//	}
//}

//int main()
//{
//	float valueOne = 0.0f;
//	cout << "Input your first value." << endl;
//	cin >> valueOne;
//	float valueTwo = 0.0f;
//	cout << "Input your second value." << endl;
//	cin >> valueTwo;
//
//	char menuOption = ' ';
//
//	bool closeMenu = true;
//	while (closeMenu)
//	{
//		cout << "Do you want to: 1 - Add, 2 - Multiply, 3 - Divide, Q - Exit" << endl;
//		cin >> menuOption;
//
//		float calcValue = 0.0f;
//		if (menuOption == '1')
//		{
//			calcValue = valueOne + valueTwo;
//			cout << calcValue << endl;
//		}
//		else if (menuOption == '2')
//		{
//			calcValue = valueOne * valueTwo;
//			cout << calcValue << endl;
//		}
//		else if (menuOption == '3')
//		{
//			calcValue = valueOne / valueTwo;
//			cout << calcValue << endl;
//		}
//		else if (menuOption == 'q' || menuOption == 'Q')
//		{
//			closeMenu = false;
//		}
//	}
//}

int main()
{
	int evenMirroredArray[10];

	// Goes through half the array
	for (int i = 9; i > 4; i--) 
	{
		evenMirroredArray[i] = i;

		evenMirroredArray[9 - i] = i; // Replaces the other half of the array with the first half, effectively mirroring it
	}

	// Outputs the array once its been mirrored
	for (int i = 0; i < 10; i++) 
	{
		cout << evenMirroredArray[i] << endl;
	}

	cout << " " << endl;

	int oddMirroredArray[11];

	for (int i = 10; i > 4; i--)
	{
		oddMirroredArray[i] = i;

		oddMirroredArray[10 - i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << oddMirroredArray[i] << endl;
	}
	cout << oddMirroredArray[0] << endl;
}

//int main()
//{
//	int checkSize = 0;
//	cout << "How many values do you want to check?" << endl;
//	cin >> checkSize;
//	bool keepChecking = true;
//	int i = 1;
//	
//	while (keepChecking)
//	{
//		i++;
//		if (i > checkSize)
//		{
//			keepChecking = false;
//		}
//
//		int input = 0;
//		cout << "Input a value to be checked" << endl;
//		cin >> input;
//
//		if (input % 2 != 0)
//		{
//			cout << "Your input was odd" << endl;
//			bool isPrime = false;
//
//			for (int primeCheck = 2; primeCheck < input; primeCheck++)
//			{
//				
//				if (input % primeCheck == 0)
//				{
//					isPrime = false;
//					break;
//				}
//				else
//				{
//					isPrime = true;
//				}
//
//				
//			}
//			if (isPrime)
//			{
//				cout << "Your input was prime" << endl;
//			}
//
//		}
//		else if (input == 2)
//		{
//			cout << "Your input was prime" << endl;
//		}
//	}
//}