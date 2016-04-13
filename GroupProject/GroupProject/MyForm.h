#pragma once

#include <vector>
#include <iostream>
#include <cliext/vector>
#include <fstream>
#include <string>



namespace GroupProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;




	struct c
	{
		std::string name;
		std::string day;
		int stime;
		int etime;
		int period;
		int problems;
		std::string work[120];
	};





	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 226);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 50);
			this->textBox1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 345);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:

		const int totalclassCount = lineCount();
		Drawing::Graphics^ g1;
		Drawing::Graphics^ g2;
		Drawing::Graphics^ g3;
		
		
	public: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g1 = pictureBox1->CreateGraphics();
		g2 = pictureBox2->CreateGraphics();
		g3 = pictureBox3->CreateGraphics();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		vector<c> Classesarray(totalclassCount);
		readFile(Classesarray);


		int mwfvecSize = MWFcount(Classesarray);
		int tthvecSize = TThcount(Classesarray);
		int r = Classesarray.size();
		DrawSchedule(Classesarray, r);

		//Vector of classes on M,W,F and T,TH 
		vector<c> MWFarray(mwfvecSize);
		vector<c> TTHarray(tthvecSize);


		//Fills M,W,F and T,TH vectors with classes on respective days
		int j = 0, h = 0;
		for (int i = 0; i < Classesarray.size(); i++)
		{
			if (Classesarray[i].day == "MWF")
			{
				MWFarray[j] = Classesarray[i];
				j++;
			}
			else if (h < TTHarray.size())
			{
				TTHarray[h] = Classesarray[i];
				h++;

			}
		}


		int mwfnon= numofnames(MWFarray);
		int tthnon= numofnames(TTHarray);

		int x = 0, count;
		while (x <= mwfnon)
		{
			switch (x)
			{
			case 0:
			{
				string mwf0Name = MWFarray[x].name;
				int mwf0Size = classCount(MWFarray, mwf0Name);
				vector<c> mwf0(mwf0Size);
				init(MWFarray, mwf0,mwf0Name);
				Try(MWFarray, mwf0, mwf0Size);
				times(mwf0, MWFarray);
				count += mwf0Size;
			}
			break;
			case 1:
			{
				string mwf1Name = MWFarray[count].name;
				int mwf1Size = classCount(MWFarray, mwf1Name);
				vector<c> mwf1(mwf1Size);
				init(MWFarray, mwf1,mwf1Name);
				Try(MWFarray, mwf1, mwf1Size);
				times(mwf1, MWFarray);
				count += mwf1Size;
			}
			break;
			case 2:
			{
				string mwf2Name = MWFarray[count].name;
				int mwf2Size = classCount(MWFarray, mwf2Name);
				vector<c> mwf2(mwf2Size);
				init(MWFarray, mwf2,mwf2Name);
				Try(MWFarray, mwf2, mwf2Size);
				times(mwf2, MWFarray);
				count += mwf2Size;
			}
			break;
			case 3:
			{
				string mwf3Name = MWFarray[count].name;
				int mwf3Size = classCount(MWFarray, mwf3Name);
				vector<c> mwf3(mwf3Size);
				init(MWFarray, mwf3,mwf3Name);
				Try(MWFarray, mwf3, mwf3Size);
				times(mwf3, MWFarray);
				count += mwf3Size;
			}
			break;
			case 4:
			{
				string mwf4Name = MWFarray[count].name;
				int mwf4Size = classCount(MWFarray, mwf4Name);
				vector<c> mwf4(mwf4Size);
				init(MWFarray, mwf4,mwf4Name);
				Try(MWFarray, mwf4, mwf4Size);
				times(mwf4, MWFarray);
				count += mwf4Size;
			}
			break;
			case 5:
			{
				string mwf5Name = MWFarray[count].name;
				int mwf5Size = classCount(MWFarray, mwf5Name);
				vector<c> mwf5(mwf5Size);
				init(MWFarray, mwf5,mwf5Name);
				Try(MWFarray, mwf5, mwf5Size);
				times(mwf5, MWFarray);
				count += mwf5Size;
			}
			break;
			}
			x++;
		}


		int u = 0,count1 = 0;
		while (u <= tthnon)
		{
			switch (u)
			{
			case 0:
			{
				string tth0Name = TTHarray[u].name;

				int tth0Size = classCount(TTHarray, tth0Name);
				vector<c> tth0(tth0Size);
				init(TTHarray, tth0, tth0Name);
				Try(TTHarray, tth0, tth0Size);
				times(tth0, TTHarray);
				count1 += tth0Size;
			}
			break;
			case 1:
			{
				string tth1Name = TTHarray[count1].name;
				int tth1Size = classCount(TTHarray, tth1Name);
				vector<c> tth1(tth1Size);
				init(TTHarray, tth1,tth1Name);
				Try(TTHarray, tth1, tth1Size);
				times(tth1, TTHarray);
				count1 += tth1Size;
			}
			break;
			case 2:
			{
				string tth2Name = TTHarray[count1].name;
				int tth2Size = classCount(TTHarray, tth2Name);
				vector<c> tth2(tth2Size);
				init(TTHarray, tth2,tth2Name);
				Try(TTHarray, tth2, tth2Size);
				times(tth2, TTHarray);
				count1 += tth2Size;
			}
			break;
			case 3:
			{
				string tth3Name = TTHarray[count1].name;
				int tth3Size = classCount(TTHarray, tth3Name);
				vector<c> tth3(tth3Size);
				init(TTHarray, tth3,tth3Name);
				Try(TTHarray, tth3, tth3Size);
				times(tth3, TTHarray);
				count1 += tth3Size;
			}
			break;
			case 4:
			{
				string tth4Name = TTHarray[count1].name;
				int tth4Size = classCount(TTHarray, tth4Name);
				vector<c> tth4(tth4Size);
				init(TTHarray, tth4,tth4Name);
				Try(TTHarray, tth4, tth4Size);
				times(tth4, TTHarray);
				count1 += tth4Size;
			}
			break;
			case 5:
			{
				string tth5Name = TTHarray[count1].name;
				int tth5Size = classCount(TTHarray, tth5Name);
				vector<c> tth5(tth5Size);
				init(TTHarray, tth5,tth5Name);
				Try(TTHarray, tth5, tth5Size);
				times(tth5, TTHarray);
				count1 += tth5Size;
			}
			break;
			}
			u++;
		}
	
}

			 /*
			 Method that checks if times of classes overlap or not
			 and fills the array that holds all the classes that
			 DO NOT conflict with the test class
			 */
			 void times(vector<c> & testClass, vector<c> allClass)
			 {
				 int f = 0;
				 for (int j = 0; j <testClass.size(); j++)
				 {
					 for (int i = 1; i < allClass.size(); i++)
					 {
						 std::string testC = testClass[j].name;
						 std::string allC = allClass[i].name;
						 testC.resize(5);
						 allC.resize(5);

						 if (testC != allC)
						 {
							 if (testClass[j].stime >= allClass[i].stime
								 && testClass[j].stime <= allClass[i].etime)
							 {
								 testClass[j].problems++;

							 }
							 else if (allClass[i].stime >= testClass[j].stime
								 && allClass[i].stime <= testClass[j].etime)
							 {
								 testClass[j].problems++;

							 }
							 else
							 {
								 testClass[j].work[f] = allClass[i].name;
								 f++;
							 }
						 }
					 }
				 }
			 }

			 /*
			 Counts number of lines  int the file
			 */
			 int lineCount()
			 {
				 ifstream in("InputFile.txt");
				 int numlines = 0;
				 string line;

				 if (in.is_open())
				 {
					 while (!in.eof())
					 {
						 getline(in, line);
						 numlines++;
					 }
				 }
				 return numlines;
			 }

			 /*
			 initilizes each class
			 vector with the class
			 */
			 void init(vector<c> k, vector<c> & classnum,string j)
			 {
				 int q=0;
				 for (int i = 0; i < k.size(); i++)
				 {
					 std::string s = k[i].name;
					 s.resize(5);
					 j.resize(5);
					 if (s == j)
					 {
						 classnum[q] = k[i];
						 q++;

					 }
				 }
			 }

			 /*
			 Reads in the text file of classes
			 assigns all the classes to the array
			 of all the Classes
			 */
			 void readFile(vector<c> & classes)
			 {
				 ifstream in("InputFile.txt");

				 string line;
				 int totalLines = lineCount();

				 if (in.is_open())
				 {
					 while (!in.eof())
					 {
						 in >> line;
						 int index = 0;

						 while (index < totalLines)
						 {
							 classes[index].name = line;
							 in >> line;

							 classes[index].day = line;
							 in >> line;

							 classes[index].stime = stoi(line);
							 in >> line;

							 classes[index].etime = stoi(line);
							 in >> line;

							 classes[index].problems = 0;

							 index++;
						 }

					 }
					 in.close();

				 }
				 else
				 {
					 MessageBox::Show("fail");
				 }
			 }

			 /*
			 Returns the count of sections offered for a class
			 which is used to initlize that class vector
			 */
			 int classCount(vector<c> & classVec, string className)
			 {
				 int count = 0;
				 className.resize(5);
				 for (int i = 0; i < classVec.size(); i++)
				 {
					 string st = classVec[i].name;
					 st.resize(5);
					 if ( st == className)
					 {
						 count++;
					 }
				 }
				 return count;
			 }


			 /*
			 returns the counts the number of all the
			 class on Monday, Wednesday, and Friday
			 for the size of the mmwf vector
			 */
			 int MWFcount(vector<c> & ac)
			 {
				 int count = 0;
				 for (int q = 0; q < ac.size(); q++)
				 {
					 if (ac[q].day == "MWF" || ac[q].day == "M" ||
						 ac[q].day == "W" || ac[q].day == "F")
					 {
						 count++;

					 }
				 }
				 return count;
			 }

			 /*
			 returns the counts the number of all the
			 class on Tuesday and Thursday
			 for the size of the tth vector
			 */
			 int TThcount(vector<c> & ac)
			 {
				 int count = 0;
				 for (int q = 0; q < ac.size(); q++)
				 {
					 if (ac[q].day == "TTH" || ac[q].day == "T" ||
						 ac[q].day == "TH")
					 {
						 count++;
					 }
				 }
				 return count;

			 }

			 /*
			 to count the number of each
			 type of classes on MWF and TTH
			 
			 */
			 int numofnames(vector<c> & qw)
			 {
				 int count=0;
				 int j = 0,i=0;
				 while ( j < qw.size())
				 {

				
					 string r = qw[j].name;
					 string r1 = qw[i].name;
					 r.resize(5);
					 r1.resize(5);
					 if (r == r1)
					 {
						 
						 j++;
					 }
					 else
					 {
						count++;
						i=j;
					 }

				 
				}
				 return count;
			 }

			//graphically displays schedule and classes according to class day, time, and length

			void DrawSchedule(vector<c> & dayArray, int j) {
				Bitmap^ bmp = gcnew Bitmap(L"schedule.bmp");
				Drawing::Icon^ clas = gcnew System::Drawing::Icon("class.ico");
				/*g1->DrawImage(bmp, 0, 0);
				g2->DrawImage(bmp, 0, 0);
				g3->DrawImage(bmp, 0, 0);*/
	
				int x;
				int b, h;
				int y1, y2, y3;
				for (int i = 0; i < j; i++)
				{
					b = (dayArray[i].etime - dayArray[i].stime) / 2;
					h = 72;
					x = (dayArray[i].stime - 500) / 6;
					if (dayArray[i].day == "MWF")
					{
						y1 = 0;
						y2 = 144;
						y3 = 288;
						Rectangle gridRect1 = Rectangle(x, y1, b, h);
						Rectangle gridRect2 = Rectangle(x, y2, b, h);
						Rectangle gridRect3 = Rectangle(x, y3, b, h);
						g1->DrawIcon(clas, gridRect1);
						g1->DrawIcon(clas, gridRect2);
						g1->DrawIcon(clas, gridRect3);
					}
					else
					{
						y1 = 72;
						y2 = 216;
						Rectangle gridRect4 = Rectangle(x, y1, b, h);
						Rectangle gridRect5 = Rectangle(x, y2, b, h);
						g1->DrawIcon(clas, gridRect4);
						g1->DrawIcon(clas, gridRect5);
					}
				}
			}

			 //This is Zach's
			 //I was just trying to see if I could get it to display the name in a textbox
			 //Because I have not found an easy way to do it with a variable
			 //It kinda works
			 //it says that the vector is out of range

			 void Try(vector<c> k, vector<c> & classnum, int j)
			 {
				 //int q = 1;
				 //
				 //for (int qw = 0; qw < j; qw++)
				 //{
				 //	if (q == 1)
				 //	{
				 //		//ignore the hola i copied it from online
				 //		String^ hola = gcnew String(k[qw].name.c_str());
				 //		textBox1->Text = hola;
				 //	}
				 //}
			 }

			 //-------------------------------------Notes----------------------------------------------\\

			 /*
			 Left off at the problem in the "init" function it stays the vector is out out range
			 When it hits the case 1.
			 --Chris--


			 Can't Figure out how to use the Classesarray in the button push while it is in
			 forum load. --Chris--









			 */

			 //========================================================================================\\
			 //-------------------------------------Old Stuff------------------------------------------\\	

/*


//Method that assigned each class a Period
void periodInti(vector<c> & dayArray)
{

for (int j = 0; j < dayArray.size(); j++)
{
if (dayArray[j].stime < period2)
{
dayArray[j].period = 1;
}
else if (dayArray[j].stime < period3)
{
dayArray[j].period = 2;
}
else
dayArray[j].period = 3;
}
}



//From Init Method that assigned the peroids to the classes
for (int j = 0; j < classnum.size(); j++)
{
if (classnum[j].stime < period2)
{
classnum[j].period = 1;
}
else if (classnum[j].stime < period3)
{
classnum[j].period = 2;
}
else
classnum[j].period = 3;
}


//Periods
const int period1 = 800;
const int period2 = 1100;
const int period3 = 1400;









*/

//========================================================================================\\









	};
}
