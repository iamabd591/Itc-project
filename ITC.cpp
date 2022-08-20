#include<iostream>
using namespace std;
int main()
{
	int rollno[100], Carray[100], midmarks[100], finalmarks[100];
	int trollno[100], tCarray[100], tmidmarks[100], tfinalmarks[100];
	int count = 50, option = 0, temp = 0, rol = 0, mid = 0, fin = 0, cl = 0, tcount = 0;
	char G = '\0', g = '\0';
	for (int i = 0; i < count; i++)
	{
		rollno[i] = i + 1;
		Carray[i] = (rand() % 10) + 1;
		midmarks[i] = (rand() % 100) + 1;
		finalmarks[i] = (rand() % 100) + 1;
	}
	do
	{
		cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "\t\t\t|Press [1]  For Display All Student Data                                                                             |" << endl;
		cout << "\t\t\t|Press [2]  For Sort and display all records in Ascending  order based on  roll number wise                          |" << endl;
		cout << "\t\t\t|Press [3]  For Sort and display all records in Descending order based on  roll number wise                          |" << endl;
		cout << "\t\t\t|Press [4]  For Sort and display all records in Ascending  order based on marks in Midterm                           |" << endl;
		cout << "\t\t\t|Press [5]  For Sort and display all records in Descending order based on marks in Midterm                           |" << endl;
		cout << "\t\t\t|Press [6]  For Sort and display all records in Ascending  order based on marks in Final                             |" << endl;
		cout << "\t\t\t|Press [7]  For Sort and display all records in Descending order based on marks in Final                             |" << endl;
		cout << "\t\t\t|Press [8]  For Sort and display all records in Ascending  order based on Grade                                      |" << endl;
		cout << "\t\t\t|Press [9]  For Sort and display all records in Descending order based on Grade                                      |" << endl;
		cout << "\t\t\t|Press [10] For Add a new record  of a student                                                                       |" << endl;
		cout << "\t\t\t|Press [11] For Delete a student record based on his roll number                                                     |" << endl;
		cout << "\t\t\t|Press [12] For Display record of all the students greater than X marks in final exam in Descending order            |" << endl;
		cout << "\t\t\t|Press [13] For Display record of all the students greater than X marks in final exam in Aescending order            |" << endl;
		cout << "\t\t\t|Press [14] For Display record of all the students less than or equal to X marks in final exam in Descending order   |" << endl;
		cout << "\t\t\t|Press [15] For Display record of all the students less than or equal to X marks in final exam in Aescending order   |" << endl;
		cout << "\t\t\t|Press [16] For Display record of all the students greater than X grade in Descending order                          |" << endl;
		cout << "\t\t\t|Press [17] For Display record of all the students greater than X grade in Aescending order                          |" << endl;
		cout << "\t\t\t|Press [18] For Display record of all the students less than or equal to X grade in Descending order                 |" << endl;
		cout << "\t\t\t|Press [19] For Display record of all the students less than or equal to X grade in Aescending order                 |" << endl;
		cout << "\t\t\t|Press [20] For Exixt                                                                                                |" << endl;
		cout << "\t\t\t---------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "\t\t\t\t\t"; cin >> option;

		switch (option)
		{
		case 1:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t[Student Data Sheet]" << endl;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 2:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 2]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (rollno[i] > rollno[j])
					{
						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;

						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;


						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 3:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 3]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (rollno[i] < rollno[j])
					{
						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;

						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;


						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;
		case 4:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 4]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (midmarks[i] > midmarks[j])
					{
						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;

						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;

						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 5:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 5]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (midmarks[i] < midmarks[j])
					{
						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;

						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;

						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 6:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 6]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (finalmarks[i] > finalmarks[j])
					{
						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;


						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;

						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 7:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 7]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (finalmarks[i] < finalmarks[j])
					{
						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;


						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;

						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;


		case 8:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 8]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (finalmarks[i] > finalmarks[j])
					{
						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;


						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;

						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;


		case 9:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 9]" << endl;
			for (int i = 0; i < count; i++)
			{
				for (int j = i + 1; j < count; j++)
				{
					if (finalmarks[i] < finalmarks[j])
					{
						temp = finalmarks[i];
						finalmarks[i] = finalmarks[j];
						finalmarks[j] = temp;


						temp = midmarks[i];
						midmarks[i] = midmarks[j];
						midmarks[j] = temp;

						temp = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = temp;

						temp = Carray[i];
						Carray[i] = Carray[j];
						Carray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << "\t\t|Roll no: " << rollno[i] << "\t";
				cout << "\t\t|Class: " << Carray[i] << "\t";
				cout << "\t\t|Mid Marks: " << midmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << finalmarks[i] << "\t";
				if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					G = 'A';
				else if (finalmarks[i] >= 75 && finalmarks[i] <= 84)
					G = 'B';
				else if (finalmarks[i] >= 65 && finalmarks[i] <= 74)
					G = 'C';
				else if (finalmarks[i] >= 55 && finalmarks[i] <= 64)
					G = 'D';
				else if (finalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 10:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 10]" << endl;
			if (count >= 100)
			{
				cout << "\t\t\t\t\t[NO More Record is Entered]" << endl;
			}
			else
			{
				count++;
			A: cout << "\t\t\t\t\t[Entered the roll number:]";
				cout << "\t\t\t\t\t"; cin >> rol;
				cout << "\t\t\t\t\t[Entered the Class:]";
				cout << "\t\t\t\t\t\t"; cin >> cl;
				for (int i = 0; i < count; i++)
				{
					if (rol == rollno[i] && cl == Carray[i])
					{
						cout << "\t\t\t\t\t[Record With this roll no is already exixt]" << endl;
						goto A;
					}
				}
				cout << "\t\t\t\t\t[Entered the Mids Marks:]";
				cout << "\t\t\t\t\t"; cin >> mid;
				cout << "\t\t\t\t\t[Entered the Final Marks:]";
				cout << "\t\t\t\t\t"; cin >> fin;
				for (int i = 0; i < count; i++)
				{
					if (i == count - 1)
					{
						rollno[i] = rol;
						Carray[i] = cl;
						midmarks[i] = mid;
						finalmarks[i] = fin;
					}
				}
				cout << "\t\t\t\t\t[!!! Congrulation Record is Entered Successfully !!!]" << endl;
				cout << "\t\t\t\t\t[Press 1 to checked it out]" << endl;
				break;
			}
		case 11:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 11]" << endl;
			cout << "\t\t\t\t\t[Entered the roll number:]";
			cout << "\t\t\t\t\t"; cin >> rol;
			for (int j = 0; j < count; j++)
			{
				if (rollno[j] == rol)
				{
					cout << "\t\t\t\t\t[Record is Found & It is Deleted]" << endl;
					for (int i = j; i < count - 1; i++)
					{
						rollno[i] = rollno[i + 1];
						Carray[i] = Carray[i + 1];
						midmarks[i] = midmarks[i + 1];
						finalmarks[i] = finalmarks[i + 1];
					}
					count--;
				}
			}
			break;


		case 12:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 12]" << endl;
			cout << "\t\t\t\t\t[Entered the Final Marks:]";
			cout << "\t\t\t\t\t"; cin >> fin;
			for (int i = 0; i < count; i++)
			{
				if (finalmarks[i] > fin)
				{
					trollno[tcount] = rollno[i];
					tCarray[tcount] = Carray[i];
					tmidmarks[tcount] = midmarks[i];
					tfinalmarks[tcount] = finalmarks[i];
					tcount++;
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] < tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}

			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 13:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 13]" << endl;
			cout << "\t\t\t\t\t[Entered the Final Marks:]";
			cout << "\t\t\t\t\t"; cin >> fin;
			for (int i = 0; i < count; i++)
			{
				if (finalmarks[i] > fin)
				{
					trollno[tcount] = rollno[i];
					tCarray[tcount] = Carray[i];
					tmidmarks[tcount] = midmarks[i];
					tfinalmarks[tcount] = finalmarks[i];
					tcount++;
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] > tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}

			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 14:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 14]" << endl;
			cout << "\t\t\t\t\t[Entered the Final Marks:]";
			cout << "\t\t\t\t\t"; cin >> fin;
			for (int i = 0; i < count; i++)
			{
				if (finalmarks[i] <= fin)
				{
					trollno[tcount] = rollno[i];
					tCarray[tcount] = Carray[i];
					tmidmarks[tcount] = midmarks[i];
					tfinalmarks[tcount] = finalmarks[i];
					tcount++;
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] < tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}

			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 15:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 15]" << endl;
			cout << "\t\t\t\t\t[Entered the Final Marks:]";
			cout << "\t\t\t\t\t"; cin >> fin;
			for (int i = 0; i < count; i++)
			{
				if (finalmarks[i] <= fin)
				{
					trollno[tcount] = rollno[i];
					tCarray[tcount] = Carray[i];
					tmidmarks[tcount] = midmarks[i];
					tfinalmarks[tcount] = finalmarks[i];
					tcount++;
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] > tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}

			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 16:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 16]" << endl;
			cout << "\t\t\t\t\t[Entered the Grade:]";
			cout << "\t\t\t\t\t"; cin >> g;
			if (g == 'A')
			{

				cout << "\t\t\t\t\t\t\t\t[No Grade Greater than A]" << endl;
				tcount = 0;
				break;
			}
			if (g == 'B')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}
			else if (g == 'C')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] >= 75 && finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'D')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] >= 65 && finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'F')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] > 55)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] < tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;


		case 17:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 17]" << endl;
			cout << "\t\t\t\t\t[Entered the Grade:]";
			cout << "\t\t\t\t\t"; cin >> g;
			if (g == 'A')
			{

				cout << "\t\t\t\t\t\t\t\t[No Grade Greater than A]" << endl;
				tcount = 0;
				break;
			}
			if (g == 'B')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] >= 85 && finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}
			else if (g == 'C')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] >= 75 && finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'D')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] >= 65 && finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'F')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] > 55)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] > tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;


		case 18:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 18]" << endl;
			cout << "\t\t\t\t\t[Entered the Grade:]";
			cout << "\t\t\t\t\t"; cin >> g;
			if (g == 'A')
			{

				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}
			if (g == 'B')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 84)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}
			else if (g == 'C')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 74)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'D')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 64)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'F')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 50)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] < tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;


		case 19:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t    [CASE 19]" << endl;
			cout << "\t\t\t\t\t[Entered the Grade:]";
			cout << "\t\t\t\t\t"; cin >> g;
			if (g == 'A')
			{

				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 100)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}
			if (g == 'B')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 84)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}
			else if (g == 'C')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 74)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'D')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 64)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			else if (g == 'F')
			{
				for (int i = 0; i < count; i++)
				{

					if (finalmarks[i] <= 50)
					{
						trollno[tcount] = rollno[i];
						tCarray[tcount] = Carray[i];
						tmidmarks[tcount] = midmarks[i];
						tfinalmarks[tcount] = finalmarks[i];
						tcount++;
					}
				}
			}

			for (int i = 0; i < tcount; i++)
			{
				for (int j = i + 1; j < tcount; j++)
				{
					if (tfinalmarks[i] > tfinalmarks[j])
					{
						temp = tfinalmarks[i];
						tfinalmarks[i] = tfinalmarks[j];
						tfinalmarks[j] = temp;


						temp = tmidmarks[i];
						tmidmarks[i] = tmidmarks[j];
						tmidmarks[j] = temp;

						temp = trollno[i];
						trollno[i] = trollno[j];
						trollno[j] = temp;

						temp = tCarray[i];
						tCarray[i] = tCarray[j];
						tCarray[j] = temp;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < tcount; i++)
			{
				cout << "\t\t|Roll no: " << trollno[i] << "\t";
				cout << "\t\t|Class: " << tCarray[i] << "\t";
				cout << "\t\t|Mid Marks: " << tmidmarks[i] << "\t";
				cout << "\t\t|Final Marks:" << tfinalmarks[i] << "\t";
				if (tfinalmarks[i] >= 85 && tfinalmarks[i] <= 100)
					G = 'A';
				else if (tfinalmarks[i] >= 75 && tfinalmarks[i] <= 84)
					G = 'B';
				else if (tfinalmarks[i] >= 65 && tfinalmarks[i] <= 74)
					G = 'C';
				else if (tfinalmarks[i] >= 55 && tfinalmarks[i] <= 64)
					G = 'D';
				else if (tfinalmarks[i] <= 50)
					G = 'F';
				cout << "\t|Grade:" << G << "\t|" << endl;
			}
			tcount = 0;
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
			break;

		case 20:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t----------------------" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[       THANK YOU    ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[           .        ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[           .        ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[           .        ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[           .        ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[           .        ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t[PROGRAM COMES TO END]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t----------------------" << endl;
			exit(0);

		default:
			cout << "\t\t\t\t\t\t\t\t\t[INVALID INPUT]" << endl;
			break;
		}
	}

	while (1);
	return 0;
}