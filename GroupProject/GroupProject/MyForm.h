#pragma once
#include <string>

namespace GroupProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	struct c
	{
		 char name;
		char day;
		int stime;
		int etime;
	};
	void times(c []);




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
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
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
		
		array<char>^ tueThurs = gcnew array<char>(100);
		array<Int32,2>^ tueThurstime = gcnew array<Int32,2>(100,100);
		array<char>^ MWF = gcnew array<char>(100);
		array<Int32, 2>^ MWFtime = gcnew array<Int32, 2>(100, 100);

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		c Classesarray[100];
		Classesarray[0] ={ 114,1 , 1230, 1400 };
		Classesarray[1] = { 115, 1 , 1300, 1600 };

		Classesarray[2] = { 112,0 , 1230, 1400 };
		Classesarray[3] = { 115, 0 , 1500, 1600 };
		int mwfcount = 0, tthcount = 0;
		for (int q = 0; q < 100; q++)
		{
			if (Classesarray[q].day == 0)
			{
				mwfcount++;

			}
			else
			{
				tthcount++;
			}
		}
		
		const int mwftotal = mwfcount;
		const int tthtotal = tthcount;

		c MWFarray[100], TTHarray[100];
		 
		
		/*delete[] MWFarray;*/
		int j = 0, h = 0;
		for (int i = 0; i < 4; i++)
		{
			if (Classesarray[i].day == 0)
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
		/*if (class1.day == 1)
		{
			tueThurs[0] = Classesarray[0].name;
			tueThurs[1] = class2.name;

			tueThurstime[0,0] = class1.stime;
			tueThurstime[1,0] = class2.stime;
			tueThurstime[0, 1] = class1.etime;
			tueThurstime[1, 1] = class2.etime;

			
		}
		else
		{

			MWF[0] = class3.name;
			MWF[1] = class4.name;

			MWFtime[0, 0] = class3.stime;
			MWFtime[1, 0] = class4.stime;
			MWFtime[0, 1] = class3.etime;
			MWFtime[1, 1] = class4.etime;

			

		}*/
		
		/*times(MWF, MWFtime);*/
	}
	};


	
	

	void times(c a[])
	{
		int x = a[2].name;
		for (int j = 0; j < sizeof(a); j++)
		{

		
		for (int i = 0; i < sizeof(a); i++)
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
	
}
