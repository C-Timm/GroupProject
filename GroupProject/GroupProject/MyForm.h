#pragma once

#include <vector>
#include <iostream>
#include <cliext/vector>
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 345);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		vector<c> Classesarray(4);

		Classesarray[0] = { "CS114" , "T,Th" , 1230, 1400 };
		Classesarray[1] = { "PY115", "T,Th" , 1300, 1600 };

		Classesarray[2] = { "CS112", "M,W,F", 1230, 1400 };
		Classesarray[3] = { "MA116", "M,W,F", 1500, 1600 };
		

		// counts how many class are M,W,F and T,TH
		int mwfcount = 0, tthcount = 0;
		for (int q = 0; q < Classesarray.size(); q++)
		{
			if (Classesarray[q].day == "M,W,F")
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
			if (Classesarray[i].day == "M,W,F")
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
		
		times(MWFarray);
		times(TTHarray);
	}

	//Method that checks if times of classes overlap or not 
	void times(vector<c> a)
	{
			
		for (int j = 0; j < a.size(); j++)
		{
			for (int i = 0; i < a.size(); i++)
			{

				if (a[j].stime >= a[i].stime && a[j].stime <= a[i].etime)
				{
					MessageBox::Show("Time1 is in time2");
				}
				else if (a[i].stime >= a[j].stime && a[i].stime <= a[j].etime)
				{
					MessageBox::Show("Time2 is in Time1");
				}
				else
				{
					MessageBox::Show("Different");
				}
			}
		}
	}





	};
}
