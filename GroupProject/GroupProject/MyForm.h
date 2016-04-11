#pragma once

#include <vector>
#include <iostream>
#include <cliext/vector>

#include <iostream>
#include <vector>
#include <string>
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

		const int period1 = 800;
		const int period2 = 1100;
		const int period3 = 1400;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{

		ifstream in("InputFile.txt");

		string line;
		int tLines = classCount();

		vector<c> Classesarray(tLines);



		if (in.is_open())
		{
			while (!in.eof())
			{
				in >> line;
				int index = 0;

				while (index < tLines)
				{
					Classesarray[index].name = line;
					in >> line;

					Classesarray[index].day = line;
					in >> line;

					Classesarray[index].stime = stoi(line);
					in >> line;

					Classesarray[index].etime = stoi(line);
					in >> line;

					Classesarray[index].problems = 0;

					index++;
				}

			}
			in.close();

		}
		else
		{
			MessageBox::Show("fail");
		}

		

		// counts how many class are M,W,F and T,TH
		int mwfcount = 0, tthcount = 0;
		for (int q = 0; q < Classesarray.size(); q++)
		{
			if (Classesarray[q].day == "MWF")
			{
				mwfcount++;

			}
			else
			{
				tthcount++;
			}
		}

		//Vector of classes on M,W,F and T,TH 
		vector<c> MWFarray(mwfcount);
		vector<c> TTHarray(tthcount);


		//Fills M,W,F and T,TH vectors with classes on respective days
		int j = 0, h = 0;
		for (int i = 0; i < Classesarray.size(); i++)
		{
			if (Classesarray[i].day == "MWF")
			{
				MWFarray[j] = Classesarray[i];
				j++;
			}
			else
			{
				TTHarray[h] = Classesarray[i];
				h++;
			}
		}

		periodInti(MWFarray);
		periodInti(TTHarray);


		
		for (int y = 0; y < MWFarray.size(); y++)
		{
			
			string clas = MWFarray[y].name;
			int vectsize = countofeachClass(MWFarray, clas);
			int j = 0;
			while (j <= MWFarray.size())
			{
				switch (j)
				{
				case 0:
				{
				  vector<c> mwf0(vectsize);
				  init(MWFarray, mwf0, j);
				  Try(MWFarray, mwf0, vectsize);
				  times(mwf0, MWFarray);
				}
				break;	
				case 1:
				{
				vector<c> mwf1(vectsize);
				init(MWFarray, mwf1, j);
				Try(MWFarray, mwf1, vectsize);
				times(mwf1, MWFarray);
				}
				break;
				case 2:
				{
				vector<c> mwf2(vectsize);
				init(MWFarray, mwf2, j);
				Try(MWFarray, mwf2, vectsize);
				times(mwf2, MWFarray);
				}
				break;
				case 3:
				{
				vector<c> mwf3(vectsize);
				init(MWFarray, mwf3, j);
				Try(MWFarray, mwf3, vectsize);
				times(mwf3, MWFarray);
				}
				break;
				case 4:
				{
				vector<c> mwf4(vectsize);
				init(MWFarray, mwf4, j);
				Try(MWFarray, mwf4, vectsize);
				times(mwf4, MWFarray);
				}
				break;
				case 5:
				{
				vector<c> mwf5(vectsize);
				init(MWFarray, mwf5, j);
				Try(MWFarray, mwf5, vectsize);
				times(mwf5, MWFarray);
				}
				break;
				}
				j++;
			}


				
		}
		
		for (int y = 0; y < TTHarray.size(); y++)
		{
			
			string clas = TTHarray[y].name;
			int vectsize = countofeachClass(TTHarray, clas);
			int j = 0;
			while (j <= TTHarray.size())
			{
				switch (j)
				{
				case 0:
				{
					vector<c> tth0(vectsize);
					init(TTHarray, tth0, j);
					Try(TTHarray, tth0, vectsize);
					times(tth0, TTHarray);
					
				}
				break;
				case 1:
				{
					vector<c> tth1(vectsize);
					init(TTHarray, tth1, j);
					Try(TTHarray, tth1, vectsize);
					times(tth1, TTHarray);
				}
				break;
				case 2:
				{
					vector<c> tth2(vectsize);
					init(TTHarray, tth2, j);
					Try(TTHarray, tth2, vectsize);
					times(tth2, TTHarray);
				}
				break;
				case 3:
				{
					vector<c> tth3(vectsize);
					init(TTHarray, tth3, j);
					Try(TTHarray, tth3, vectsize);
					times(tth3, TTHarray);
				}
				break;
				case 4:
				{
					vector<c> tth4(vectsize);
					init(TTHarray, tth4, j);
					Try(TTHarray, tth4, vectsize);
					times(tth4, TTHarray);
				}
				break;
				case 5:
				{
					vector<c> tth5(vectsize);
					init(TTHarray, tth5, j);
					Try(TTHarray, tth5, vectsize);
					times(tth5, TTHarray);
				}
				break;
				}
				j++;
			}



		}
		
		
	}

	//Method that checks if times of classes overlap or not 
	void times(vector<c> & testClass, vector<c> allClass)
	{					 			
		for (int j = 0; j <testClass.size(); j++)
		{
			for (int i = 1; i < allClass.size(); i++)
			{

				if (testClass[j].name != allClass[i].name)
				{
					if (testClass[j].period == allClass[i].period)
					{
						if (testClass[j].stime >= allClass[i].stime && testClass[j].stime <= allClass[i].etime)
						{
							testClass[j].problems++;
							//MessageBox::Show("Time1 is in time2");
						}
						else if (allClass[i].stime >= testClass[j].stime && allClass[i].stime <= testClass[j].etime)
						{
							testClass[j].problems++;
							//MessageBox::Show("Time2 is in Time1");
						}
					}
					
				}
			}
		}
	}

	//Counts number of lines
	int classCount()
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


	int countofeachClass(vector<c> a,string c)
	{
		int count = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].name == c)
			{
				count++;
			}
		}
		return count;

	}

	//fill initilizes each class vector with the class
	void init(vector<c> k, vector<c> & classnum, int j)
	{
		std::string t = k[j].name;
		for (int i = 0; i < k.size(); i++)
		{
			if (k[i].name == t)
			{
				classnum[i] = k[i];

			}
		}


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

	}




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

	//This is Zach's
	//I was just trying to see if I could get it to display the name in a textbox
	//Because I have not found an easy way to do it with a variable
	//It kinda works
	//it says that the vector is out of range
	
	void Try(vector<c> k, vector<c> & classnum, int j)
	{
		int q = 1;
		
		for (int qw = 0; qw < j; qw++)
		{
			if (q == 1)
			{
				//ignore the hola i copied it from online
				String^ hola = gcnew String(k[qw].name.c_str());
				textBox1->Text =hola;
			}
		}




	}



	
	











	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
