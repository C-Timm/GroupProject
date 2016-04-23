#pragma once

#include <vector>
#include <iostream>
#include <cliext/vector>
#include <string>
#include <fstream>
#include <string>
#include <ctime>
#include "Class.h"
#include "Text.h"



namespace GroupProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;



	/*struct c
	{
	std::string name;
	std::string day;
	int stime;
	int etime;
	int problems;
	std::string work[50];
	bool take;
	};*/

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
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;

	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(724, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 80);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->textBox1->Location = System::Drawing::Point(41, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(389, 200);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(507, 47);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 27);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(76, 336);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(265, 402);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(392, 336);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(268, 402);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Location = System::Drawing::Point(714, 336);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(265, 402);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(507, 80);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 27);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->textBox4->Location = System::Drawing::Point(507, 113);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 27);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(507, 146);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(211, 30);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(507, 182);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(211, 30);
			this->textBox6->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(507, 216);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 30);
			this->textBox7->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(362, 286);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(298, 133);
			this->textBox8->TabIndex = 11;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(1024, 216);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(259, 549);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox5->Location = System::Drawing::Point(884, 58);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(333, 152);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1284, 838);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



		const int totalclassCount = lineCount();
		Drawing::Graphics^ g1;
		Drawing::Graphics^ g2;
		Drawing::Graphics^ g3;
		Drawing::Graphics^ g4;
		/*Bitmap^ bmp = gcnew Bitmap(L"schedule.bmp");*/



		String^ class1;
		String^ class2;
		String^ class3;
		String^ class4;
		String^ class5;
		String^ class6;



		int amountofclass = 0;


	public: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		g1 = pictureBox1->CreateGraphics();
		g2 = pictureBox2->CreateGraphics();
		g3 = pictureBox3->CreateGraphics();
		g4 = pictureBox4->CreateGraphics();

		vector<c> Classarray(totalclassCount);
		readFile(Classarray);
		displayClasses(Classarray);


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{

		class1 = textBox2->Text->ToUpper();
		class2 = textBox3->Text->ToUpper();
		class3 = textBox4->Text->ToUpper();
		class4 = textBox5->Text->ToUpper();
		class5 = textBox6->Text->ToUpper();
		class6 = textBox7->Text->ToUpper();

		if (class1 != "")
		{
			amountofclass++;
		}
		if (class2 != "")
		{
			amountofclass++;
		}
		if (class3 != "")
		{
			amountofclass++;
		}
		if (class4 != "")
		{
			amountofclass++;
		}
		if (class5 != "")
		{
			amountofclass++;
		}
		if (class6 != "")
		{
			amountofclass++;
		}



		/*g4->DrawImage(bmp, 0, 0);*/
		vector<c> mwf0;	vector<c> tth0;
		vector<c> mwf1; vector<c> tth1;
		vector<c> mwf2; vector<c> tth2;
		vector<c> mwf3; vector<c> tth3;
		vector<c> mwf4; vector<c> tth4;
		vector<c> mwf5; vector<c> tth5;


		vector<c> Classesarray(totalclassCount);
		readFile2(Classesarray);

		int y = userlineCount(Classesarray);
		Classesarray.resize(userlineCount(Classesarray));


		int mwfvecSize = MWFcount(Classesarray);
		int tthvecSize = TThcount(Classesarray);

		vector<c> totalm(mwfvecSize);
		vector<c> totalt(tthvecSize);


		//Vector of classes on M,W,F and T,TH 
		vector<c> MWFarray(mwfvecSize);
		vector<c> TTHarray(tthvecSize);

		fillVectors(MWFarray, TTHarray, Classesarray);



		int count2 = 0;
		int mwfnon = numofnames(MWFarray);
		int tthnon = numofnames(TTHarray);


		int x = 0, count;
		if (mwfvecSize > 0)
		{
			while (x <= mwfnon)
			{
				switch (x)
				{
				case 0:
				{
					string mwf0Name = MWFarray[x].name;
					int mwf0Size = classCount(MWFarray, mwf0Name);
					mwf0.resize(mwf0Size);
					init(MWFarray, mwf0, mwf0Name);
					workDefault(mwf0);
					times(mwf0, MWFarray);
					for (int i = 0; i < mwf0Size; i++)
					{
						totalm[count2] = mwf0[i];
						count2++;
					}
					count += mwf0Size;
				}
				break;
				case 1:
				{
					string mwf1Name = MWFarray[count].name;
					int mwf1Size = classCount(MWFarray, mwf1Name);
					mwf1.resize(mwf1Size);
					init(MWFarray, mwf1, mwf1Name);
					workDefault(mwf1);
					times(mwf1, MWFarray);
					for (int i = 0; i < mwf1Size; i++)
					{
						totalm[count2] = mwf1[i];
						count2++;
					}
					count += mwf1Size;
				}
				break;
				case 2:
				{
					string mwf2Name = MWFarray[count].name;
					int mwf2Size = classCount(MWFarray, mwf2Name);
					mwf2.resize(mwf2Size);
					init(MWFarray, mwf2, mwf2Name);
					workDefault(mwf2);
					times(mwf2, MWFarray);
					for (int i = 0; i < mwf2Size; i++)
					{
						totalm[count2] = mwf2[i];
						count2++;
					}
					count += mwf2Size;
				}
				break;
				case 3:
				{
					string mwf3Name = MWFarray[count].name;
					int mwf3Size = classCount(MWFarray, mwf3Name);
					mwf3.resize(mwf3Size);
					init(MWFarray, mwf3, mwf3Name);
					workDefault(mwf3);
					times(mwf3, MWFarray);
					for (int i = 0; i < mwf3Size; i++)
					{
						totalm[count2] = mwf3[i];
						count2++;
					}
					count += mwf3Size;
				}
				break;
				case 4:
				{
					string mwf4Name = MWFarray[count].name;
					int mwf4Size = classCount(MWFarray, mwf4Name);
					mwf4.resize(mwf4Size);
					init(MWFarray, mwf4, mwf4Name);
					workDefault(mwf4);
					times(mwf4, MWFarray);
					for (int i = 0; i < mwf4Size; i++)
					{
						totalm[count2] = mwf4[i];
						count2++;
					}
					count += mwf4Size;
				}
				break;
				case 5:
				{
					string mwf5Name = MWFarray[count].name;
					int mwf5Size = classCount(MWFarray, mwf5Name);
					mwf5.resize(mwf5Size);
					init(MWFarray, mwf5, mwf5Name);
					workDefault(mwf5);
					times(mwf5, MWFarray);
					for (int i = 0; i < mwf5Size; i++)
					{
						totalm[count2] = mwf5[i];
						count2++;
					}
					count += mwf5Size;
				}
				break;
				}
				x++;
			}

		}
		int u = 0, count1 = 0, count3 = 0;

		if (tthvecSize > 0)
		{
			while (u <= tthnon)
			{
				switch (u)
				{
				case 0:
				{
					string tth0Name = TTHarray[u].name;
					int tth0Size = classCount(TTHarray, tth0Name);
					tth0.resize(tth0Size);
					init(TTHarray, tth0, tth0Name);
					workDefault(tth0);
					times(tth0, TTHarray);
					for (int i = 0; i < tth0Size; i++)
					{
						totalt[count3] = tth0[i];
						count3++;
					}
					count1 += tth0Size;
				}
				break;
				case 1:
				{
					string tth1Name = TTHarray[count1].name;
					int tth1Size = classCount(TTHarray, tth1Name);
					tth1.resize(tth1Size);
					init(TTHarray, tth1, tth1Name);
					workDefault(tth1);
					times(tth1, TTHarray);
					for (int i = 0; i < tth1Size; i++)
					{
						totalt[count3] = tth1[i];
						count3++;
					}
					count1 += tth1Size;
				}
				break;
				case 2:
				{
					string tth2Name = TTHarray[count1].name;
					int tth2Size = classCount(TTHarray, tth2Name);
					tth2.resize(tth2Size);
					init(TTHarray, tth2, tth2Name);
					workDefault(tth2);
					times(tth2, TTHarray);
					for (int i = 0; i < tth2Size; i++)
					{
						totalt[count3] = tth2[i];
						count3++;
					}
					count1 += tth2Size;
				}
				break;
				case 3:
				{
					string tth3Name = TTHarray[count1].name;
					int tth3Size = classCount(TTHarray, tth3Name);
					tth3.resize(tth3Size);
					init(TTHarray, tth3, tth3Name);
					workDefault(tth3);
					times(tth3, TTHarray);
					for (int i = 0; i < tth3Size; i++)
					{
						totalt[count3] = tth3[i];
						count2++;
					}
					count1 += tth3Size;
				}
				break;
				case 4:
				{
					string tth4Name = TTHarray[count1].name;
					int tth4Size = classCount(TTHarray, tth4Name);
					tth4.resize(tth4Size);
					init(TTHarray, tth4, tth4Name);
					workDefault(tth4);
					times(tth4, TTHarray);
					for (int i = 0; i < tth4Size; i++)
					{
						totalt[count3] = tth4[i];
						count2++;
					}
					count1 += tth4Size;
				}
				break;
				case 5:
				{
					string tth5Name = TTHarray[count1].name;
					int tth5Size = classCount(TTHarray, tth5Name);
					tth5.resize(tth5Size);
					init(TTHarray, tth5, tth5Name);
					workDefault(tth5);
					times(tth5, TTHarray);
					for (int i = 0; i < tth5Size; i++)
					{
						totalt[count3] = tth5[i];
						count2++;
					}
					count1 += tth5Size;
				}
				break;
				}
				u++;
			}
		}

		int mwf = mwfvecSize + 1;
		int tth = tthvecSize;

		if (tth == 0)
		{
			int Extra = 1;

			vector<vector<c>> finalsched(mwf, vector<c>(Extra));

			int asd = totalm.size();

			sort2(totalm, totalt, finalsched);


			sort3(finalsched, Classesarray, tth, mwf);
			passtoDraw(finalsched, tth, mwf, Classesarray);
		}
		else
		{
			vector<vector<c>> finalsched(mwf, vector<c>(tth));




			sort2(totalm, totalt, finalsched);


			sort3(finalsched, Classesarray, tth, mwf);
			passtoDraw(finalsched, tth, mwf, Classesarray);

		}

	}





			 void passtoDraw(vector<vector<c>> & finals, int tt, int tm, vector<c> & classesArray)
			 {
				 srand(time(NULL));

				 int u = 1;

				 /*while (u <= 3)
				 {*/
				 /*int s = rand() % tt + 0;
				 int v = rand() % tm + 1;*/

				 int s = tt;
				 int v = tm;

				 if (tm == 1)
				 {

					 for (s = 0; s < tt; s++)
					 {
						 if (finals[0][s].take == true)
						 {
							 if (u == 1)
							 {
								 DrawSchedule(finals, s, v, tt, tm, classesArray);

								 u++;

							 }
							 else if (u == 2)
							 {
								 // DrawSchedule2(finals, i, j, classesArray);


								 u++;
							 }
							 else if (u == 3)
							 {
								 // DrawSchedule3(finals, i, j, classesArray);


								 u++;
							 }
						 }
					 }
				 }
				 else if (tt == 0)
				 {
					 s = 0;

					 bool ewrq = finals[0][0].take;
					 for (v = 1; v < tm; v++)
					 {
						 if (finals[v][s].take == true)
						 {
							 if (u == 1)
							 {
								 DrawSchedule(finals, s, v, tt, tm, classesArray);

								 u++;

							 }
							 else if (u == 2)
							 {
								 // DrawSchedule2(finals, i, j, classesArray);


								 u++;
							 }
							 else if (u == 3)
							 {
								 // DrawSchedule3(finals, i, j, classesArray);


								 u++;
							 }
						 }
					 }
				 }
				 else
				 {
					 for (int s = 0; s < tt; s++)
					 {

						 for (int v = 1; v < tm; v++)
						 {



							 if (finals[0][s].take == true && finals[v][s].take == true)
							 {
								 if (u == 1)
								 {
									 DrawSchedule(finals, s, v, tt, tm, classesArray);

									 u++;

								 }
								 else if (u == 2)
								 {
									 // DrawSchedule2(finals, i, j, classesArray);


									 u++;
								 }
								 else if (u == 3)
								 {
									 // DrawSchedule3(finals, i, j, classesArray);


									 u++;
								 }


							 }
							 else
							 {
								 v++;
							 }
						 }
						 /*}*/
					 }
				 }


			 }

			 void sort3(vector<vector<c>> & finals, vector <c> allclas, int tt, int tm)
			 {
				 if (tt != 0)
				 {
					 for (int i = 0; i < tt; i++)
					 {
						 int p = 0;


						 if (classCheck(finals, allclas, i, p) == true)
						 {
							 if (workcheck(finals, allclas, i, p) == true)
							 {
								 finals[p][i].take = true;


								 for (int j = 1; j < tm; j++)
								 {
									 if (classCheck(finals, allclas, i, j) == true)
									 {
										 if (workcheck(finals, allclas, i, j) == true)
										 {
											 finals[j][i].take = true;

										 }
										 else
										 {
											 finals[j][i].take = false;
										 }
									 }
									 else
									 {
										 finals[j][i].take = false;

									 }
								 }
							 }

							 else
							 {
								 finals[p][i].take = false;
							 }

						 }
						 else
						 {
							 finals[p][i].take = false;
						 }
					 }
				 }
				 else
				 {
					 for (int j = 1; j < tm; j++)
					 {
						 if (classCheck(finals, allclas, 0, j) == true)
						 {
							 if (workcheck(finals, allclas, 0, j) == true)
							 {
								 finals[j][0].take = true;

							 }
							 else
							 {
								 finals[j][0].take = false;
							 }
						 }
						 else
						 {
							 finals[j][0].take = false;

						 }
					 }
				 }

			 }
			 bool workcheck(vector<vector<c>> & finals, vector <c> allclass, int i, int j)
			 {

				 int place = 0;

				 int s = 0;
				 for (int t = 0; t < 50; t++)
				 {
					 string uio = finals[0][0].work[t];
					 if (finals[j][i].work[t] != "NULL")
					 {
						 s++;
					 }
				 }

				 vector<c> check(s);
				 for (int q = 0; q < s; q++)
				 {

					 for (int y = 0; y < allclass.size(); y++)
					 {
						 if (finals[j][i].work[q] == allclass[y].name)
						 {
							 check[place] = allclass[y];
							 place++;
						 }
					 }

				 }
				 for (int j = 0; j < check.size(); j++)
				 {
					 int q = 0;
					 for (int i = 0; i < check.size(); i++)
					 {
						 if (i != j && check[i].day == check[j].day)
						 {

							 if (check[j].stime >= check[i].stime
								 && check[j].stime <= check[i].etime)
							 {
								 return false;

							 }
							 else if (check[i].stime >= check[j].stime
								 && check[i].stime <= check[j].etime)
							 {

								 return false;
							 }
							 else if (check[j].stime == check[i].stime
								 || check[j].stime == check[i].etime
								 || check[i].stime == check[j].stime
								 || check[i].stime == check[j].etime)
							 {
								 return false;
							 }

						 }

					 }

				 }
				 return true;
			 }
			 // i	   p
			 bool classCheck(vector<vector<c>> & finals, vector <c> allclass, int j, int i)
			 {
				 /* String^ class1 = textBox2->Text; String^ class2 = textBox3->Text;
				 String^ class3 = textBox4->Text; String^ class4 = textBox5->Text;
				 String^ class5 = textBox6->Text; String^ class6 = textBox7->Text;*/
				 int com = 0;
				 int k = 0;
				 string u = finals[i][j].name;
				 int finCount = worksCounter(finals, i, j);
				 int mclasses = mCount(allclass) - 1;
				 int tclasses = tCount(allclass) - 1;

				 if (finCount == 50)
				 {
					 finals[i][j].take = false;
					 return false;
				 }
				 while (k < finCount)
				 {

					 string c = finals[i][j].work[k];
					 c.resize(5);
					 String^ s = gcnew String(c.c_str());

					 if (s == class1)
					 {
						 com++;
						 k++;
					 }
					 else if (s == class2)
					 {
						 com++;
						 k++;
					 }
					 else if (s == class3)
					 {
						 com++;
						 k++;
					 }
					 else if (s == class4)
					 {
						 com++;
						 k++;
					 }
					 else if (s == class5)
					 {
						 com++;
						 k++;
					 }
					 else if (s == class6)
					 {
						 com++;
						 k++;
					 }

					 else
					 {
						 k++;
					 }
				 }
				 if (com == finCount && (com >= mclasses || com >= tclasses))
				 {

					 return true;
				 }
				 else
				 {
					 return false;
				 }
			 }


			 int worksCounter(vector<vector<c>> & finals, int i, int j)
			 {

				 int count = 0;
				 int x = 0;
				 string s = "NULL";
				 while (x < 50)
				 {
					 string p = finals[i][j].work[x];
					 if (p != s)
					 {
						 count++;
						 x++;
					 }
					 else
					 {
						 x++;
					 }
				 }

				 return count;
			 }

			 int mCount(vector<c> allclass)
			 {
				 /* String^ class1 = textBox2->Text; String^ class2 = textBox3->Text;
				 String^ class3 = textBox4->Text; String^ class4 = textBox5->Text;
				 String^ class5 = textBox6->Text; String^ class6 = textBox7->Text;*/
				 int c1 = 0; int c2 = 0;
				 int c3 = 0; int c4 = 0;
				 int c5 = 0; int c6 = 0;
				 int count;
				 for (int i = 0; i < allclass.size(); i++)
				 {

					 string c = allclass[i].name;
					 c.resize(5);
					 String^ s = gcnew String(c.c_str());

					 if (s == class1 && c1 < 1 && allclass[i].day == "MWF")
					 {
						 c1++;
						 count++;
					 }
					 else if (s == class2 && c2 < 1 && allclass[i].day == "MWF")
					 {
						 c2++;
						 count++;
					 }
					 else if (s == class3 && c3 < 1 && allclass[i].day == "MWF")
					 {
						 c3++;
						 count++;
					 }
					 else if (s == class4 && c4 < 1 && allclass[i].day == "MWF")
					 {
						 c4++;
						 count++;
					 }
					 else if (s == class5 && c5 < 1 && allclass[i].day == "MWF")
					 {
						 c5++;
						 count++;
					 }
					 else if (s == class6 && c6 < 1 && allclass[i].day == "MWF")
					 {
						 c6++;
						 count++;
					 }

				 }

				 return count;
			 }

			 int tCount(vector<c> allclass)
			 {
				 /* String^ class1 = textBox2->Text; String^ class2 = textBox3->Text;
				 String^ class3 = textBox4->Text; String^ class4 = textBox5->Text;
				 String^ class5 = textBox6->Text; String^ class6 = textBox7->Text;*/
				 int c1 = 0; int c2 = 0;
				 int c3 = 0; int c4 = 0;
				 int c5 = 0; int c6 = 0;
				 int count;
				 for (int i = 0; i < allclass.size(); i++)
				 {

					 string c = allclass[i].name;
					 c.resize(5);
					 String^ s = gcnew String(c.c_str());

					 if (s == class1 && c1 < 1 && allclass[i].day == "TTH")
					 {
						 c1++;
						 count++;
					 }
					 else if (s == class2 && c2 < 1 && allclass[i].day == "TTH")
					 {
						 c2++;
						 count++;
					 }
					 else if (s == class3 && c3 < 1 && allclass[i].day == "TTH")
					 {
						 c3++;
						 count++;
					 }
					 else if (s == class4 && c4 < 1 && allclass[i].day == "TTH")
					 {
						 c4++;
						 count++;
					 }
					 else if (s == class5 && c5 < 1 && allclass[i].day == "TTH")
					 {
						 c5++;
						 count++;
					 }
					 else if (s == class6 && c6 < 1 && allclass[i].day == "TTH")
					 {
						 c6++;
						 count++;
					 }

				 }

				 return count;
			 }

			 void sort2(vector<c> & tm, vector<c> & tt, vector<vector<c>> & finals)
			 {

				 for (int i = 0; i < tt.size(); i++)
				 {
					 string y = tt[i].name;
					 finals[0][i] = tt[i];
				 }
				 if (tt.size() != 0)
				 {
					 for (int j = 0; j < tt.size(); j++)
					 {
						 int p = 0;
						 int k = 1;
						 while (p < tm.size())
						 {
							 string h = tm[p].name;
							 finals[k][j] = tm[p];
							 p++;
							 k++;
						 }
					 }
				 }
				 else
				 {
					 for (int j = 0; j < 1; j++)
					 {
						 int p = 0;
						 int k = 1;
						 while (p < tm.size())
						 {
							 string h = tm[p].name;
							 finals[k][j] = tm[p];
							 p++;
							 k++;
						 }
					 }

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
				 int all = allClass.size();
				 int test = testClass.size();
				 for (int j = 0; j < testClass.size(); j++)
				 {
					 int q = 0;
					 for (int i = 0; i < allClass.size(); i++)
					 {
						 std::string testC = testClass[j].name;
						 std::string allC = allClass[i].name;

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
						 else if (testClass[j].stime == allClass[i].stime
							 || testClass[j].stime == allClass[i].etime
							 || allClass[i].stime == testClass[j].stime
							 || allClass[i].stime == testClass[j].etime)
						 {
							 testClass[j].problems++;
						 }
						 else
						 {
							 string h = testClass[j].name;
							 string k = allClass[i].name;
							 bool g = sort1(h, k);
							 if (g == true && k != "")
							 {

								 testClass[j].work[q] = allClass[i].name;
								 q++;
							 }

							 f++;
						 }
					 }

				 }

			 }


			 /*
			 Checks to see if the
			 class name is the same or not
			 and returns false if the class
			 name is the same
			 */
			 bool sort1(string test, string all)
			 {
				 test.resize(5);
				 all.resize(5);
				 if (test == all)
				 {
					 return false;
				 }

				 return true;
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

			 int userlineCount(vector<c> & a)
			 {
				 /*String^ class1 = textBox2->Text; String^ class2 = textBox3->Text;
				 String^ class3 = textBox4->Text; String^ class4 = textBox5->Text;
				 String^ class5 = textBox6->Text; String^ class6 = textBox7->Text;*/

				 int count = 0;
				 for (int i = 0; i < a.size(); i++)
				 {
					 string c = a[i].name;
					 c.resize(5);
					 String^ s = gcnew String(c.c_str());

					 if ((s == class1 || s == class2 || s == class3 || s == class4
						 || s == class5 || s == class6) && s != "")
					 {
						 count++;
					 }
				 }
				 return count;
			 }
			 /*
			 initilizes each class
			 vector with the class
			 */
			 void init(vector<c> & allclass, vector<c> & classnum, string & j)
			 {
				 int q = 0;
				 for (int i = 0; i < allclass.size(); i++)
				 {
					 std::string s = allclass[i].name;
					 s.resize(5);
					 j.resize(5);
					 if (s == j)
					 {
						 classnum[q] = allclass[i];
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

				 }
				 else
				 {
					 MessageBox::Show("File read 1 has failed");
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
					 if (st == className)
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
			 int MWFcount(vector<c> ac)
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
				 int count = 0;
				 int j = 0, i = 0;
				 while (j < qw.size())
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
						 i = j;
					 }


				 }
				 return count;
			 }


			 /*
			 Draws the Schedule
			 takes in the vector of the final
			 schedule and the size of the vector
			 */
			 void DrawSchedule(vector<vector<c>> & finals, int s, int v, int tt, int tm, vector<c> & classesArray) {



				 vector<c> fnsched = finalSort(finals, s, v, tt, tm, classesArray);

				 Bitmap^ bmp = gcnew Bitmap(L"schedule.bmp");
				 Drawing::Icon^ clas = gcnew System::Drawing::Icon("class.ico");
				 for (int g = 0; g < fnsched.size(); g++)
				 {
					 string s = fnsched[g].name;

					 String^ hola = gcnew String(s.c_str());
					 textBox8->Text = textBox8->Text + hola + "\r\n";
				 }

				 int y;
				 int b, h;
				 int x1, x2, x3;
				 for (int i = 0; i < fnsched.size(); i++)
				 {
					 h = (fnsched[i].etime - fnsched[i].stime) / 2;
					 b = 130;
					 y = (fnsched[i].stime - 500) / 3;
					 if (fnsched[i].day == "MWF")
					 {
						 x1 = -40;
						 x2 = 70;
						 x3 = 180;
						 Rectangle gridRect1 = Rectangle(x1, y, b, h);
						 Rectangle gridRect2 = Rectangle(x2, y, b, h);
						 Rectangle gridRect3 = Rectangle(x3, y, b, h);
						 g1->DrawIcon(clas, gridRect1);
						 g1->DrawIcon(clas, gridRect2);
						 g1->DrawIcon(clas, gridRect3);
					 }
					 else
					 {
						 x1 = 15;
						 x2 = 125;
						 Rectangle gridRect4 = Rectangle(x1, y, b, h);
						 Rectangle gridRect5 = Rectangle(x2, y, b, h);
						 g1->DrawIcon(clas, gridRect4);
						 g1->DrawIcon(clas, gridRect5);
					 }
				 }

			 }

			 vector<c> finalSort(vector<vector<c>> & finals, int & s, int & v, int tt, int tm, vector<c> & classesArray)
			 {
				 /* String^ class1 = textBox2->Text; String^ class2 = textBox3->Text;
				 String^ class3 = textBox4->Text; String^ class4 = textBox5->Text;
				 String^ class5 = textBox6->Text; String^ class6 = textBox7->Text;*/
				 vector<string> pass(amountofclass);

				 string n = "NULL";
				 int y = 0;	 int c1 = 0;
				 int c2 = 0; int c3 = 0;
				 int c4 = 0; int c5 = 0;
				 int i = 0;	 int c6 = 0;

				 int jk = s;
				 if (tt != 0)
				 {
					 string c0 = finals[0][s].name;
					 c0.resize(5);
					 String^ k = gcnew String(c0.c_str());
					 while (finals[0][s].work[i] != n)
					 {
						 string k = finals[0][s].work[i];
						 i++;
					 }

					 for (int p = 0; p < 1; p++)
					 {
						 if (k == class1 && c1 < 1)
						 {
							 pass[y] = finals[0][s].name;
							 c1++;
							 y++;
						 }
						 else if (k == class2 && c2 < 1)
						 {
							 pass[y] = finals[0][s].name;
							 c2++;
							 y++;

						 }
						 else if (k == class3 && c3 < 1)
						 {
							 pass[y] = finals[0][s].name;
							 c3++;
							 y++;
						 }
						 else if (k == class4 && c4 < 1)
						 {
							 pass[y] = finals[0][s].name;
							 c4++;
							 y++;
						 }
						 else if (k == class5 && c5 < 1)
						 {
							 pass[y] = finals[0][s].name;
							 c5++;
							 y++;
						 }
						 else if (k == class6 && c6 < 1)
						 {
							 pass[y] = finals[0][s].name;
							 c6++;
							 y++;
						 }

					 }

					 int e = 0;


					 for (int z = 0; z < i; z++)
					 {
						 string w = finals[0][s].work[e];
						 w.resize(5);
						 String^ t = gcnew String(w.c_str());

						 if (t == class1 && c1 < 1)
						 {
							 pass[y] = finals[0][s].work[e];
							 c1++;
							 e++;
							 y++;
						 }
						 else if (t == class2 && c2 < 1)
						 {
							 pass[y] = finals[0][s].work[e];
							 c2++;
							 e++;
							 y++;
						 }
						 else if (t == class3 && c3 < 1)
						 {
							 pass[y] = finals[0][s].work[e];
							 c3++;
							 e++;
							 y++;
						 }
						 else if (t == class4 && c4 < 1)
						 {
							 pass[y] = finals[0][s].work[e];
							 c4++;
							 e++;
							 y++;
						 }
						 else if (t == class5 && c5 < 1)
						 {
							 pass[y] = finals[0][s].work[e];
							 c5++;
							 e++;
							 y++;
						 }
						 else if (t == class6 && c6 < 1)
						 {
							 pass[y] = finals[0][s].work[e];
							 c6++;
							 e++;
							 y++;
						 }

					 }

				 }
				 if (tm != 1)
				 {
					 int ewr = v;
					 //FOR MWF
					 string cu = finals[v][s].name;
					 cu.resize(5);

					 String^ s1 = gcnew String(cu.c_str());
					 int i1 = 0;
					 while (finals[v][s].work[i1] != n)
					 {
						 string io = finals[v][s].work[i1];
						 i1++;
					 }
					 for (int p1 = 0; p1 < 1; p1++)
					 {
						 if (s1 == class1 && c1 < 1)
						 {
							 pass[y] = finals[v][s].name;
							 c1++;
							 y++;
						 }
						 else if (s1 == class2 && c2 < 1)
						 {
							 pass[y] = finals[v][s].name;
							 c2++;
							 y++;

						 }
						 else if (s1 == class3 && c3 < 1)
						 {
							 pass[y] = finals[v][s].name;
							 c3++;
							 y++;
						 }
						 else if (s1 == class4 && c4 < 1)
						 {
							 pass[y] = finals[v][s].name;
							 c4++;
							 y++;
						 }
						 else if (s1 == class5 && c5 < 1)
						 {
							 pass[y] = finals[v][s].name;
							 c5++;
							 y++;
						 }
						 else if (s1 == class6 && c6 < 1)
						 {
							 pass[y] = finals[v][s].name;
							 c6++;
							 y++;
						 }
					 }

					 int d = 0;

					 for (int x = 0; x < i1; x++)
					 {

						 string w = finals[v][s].work[d];
						 w.resize(5);
						 String^ t = gcnew String(w.c_str());

						 if (t == class1 && c1 < 1)
						 {
							 pass[y] = finals[v][s].work[d];
							 c1++;
							 d++;
							 y++;
						 }
						 else if (t == class2 && c2 < 1)
						 {
							 pass[y] = finals[v][s].work[d];
							 c2++;
							 d++;
							 y++;

						 }
						 else if (t == class3 && c3 < 1)
						 {
							 pass[y] = finals[v][s].work[d];
							 c3++;
							 d++;
							 y++;
						 }
						 else if (t == class4 && c4 < 1)
						 {
							 pass[y] = finals[v][s].work[d];
							 c4++;
							 d++;
							 y++;
						 }
						 else if (t == class5 && c5 < 1)
						 {
							 pass[y] = finals[v][s].work[d];
							 c5++;
							 d++;
							 y++;
						 }
						 else if (t == class6 && c6 < 1)
						 {
							 pass[y] = finals[v][s].work[d];
							 c6++;
							 d++;
							 y++;
						 }
						 else
						 {
							 d++;
						 }
					 }


				 }

				 vector<c> lastSched(pass.size());
				 int b = 0;
				 int q = 0;
				 int t = 0;
				 while (b < classesArray.size())
				 {
					 int u = 0;
					 q = 0;
					 while (u < pass.size())
					 {
						 string lk = classesArray[b].name;
						 string ggl = pass[u];
						 if (classesArray[b].name == pass[q])
						 {
							 lastSched[t] = classesArray[b];
							 q++;
							 t++;

						 }
						 else
						 {
							 q++;
						 }
						 u++;
					 }
					 b++;
				 }


				 return lastSched;

			 }


			 void displayClasses(vector<c> all)
			 {



				 int j = 0, i = 0;

				 for (int cl = 0; cl < all.size(); cl++)
				 {
					 for (int cl1 = 0; cl1 < all.size(); cl1++)
					 {

						 int u = all.size();
						 string r = all[cl].name;
						 string r1 = all[cl1].name;
						 r.resize(5);
						 r1.resize(5);

						 if (r != r1 || cl1 == 0)
						 {

							 String^ hola = gcnew String(r1.c_str());
							 textBox1->Text = textBox1->Text + hola + "\r\n";
							 cl = cl1;

						 }
						 else
						 {

							 j++;
						 }
					 }
				 }
			 }

			 void readFile2(vector<c> & allc)
			 {
				 /* String^ class1 = textBox2->Text; String^ class2 = textBox3->Text;
				 String^ class3 = textBox4->Text; String^ class4 = textBox5->Text;
				 String^ class5 = textBox6->Text; String^ class6 = textBox7->Text;*/

				 int place = 0;
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
							 string p = line;
							 p.resize(5);
							 String^ s = gcnew String(p.c_str());

							 if (s == class1 || s == class2 || s == class3 ||
								 s == class4 || s == class5 || s == class6)
							 {
								 allc[place].name = line;
								 in >> line;

								 allc[place].day = line;
								 in >> line;

								 allc[place].stime = stoi(line);
								 in >> line;

								 allc[place].etime = stoi(line);
								 in >> line;

								 allc[place].problems = 0;

								 place++;
							 }
							 else
							 {
								 in >> line;
								 in >> line;
								 in >> line;
								 in >> line;
							 }
							 index++;
						 }

					 }
					 in.close();

				 }
				 else
				 {
					 MessageBox::Show("File read 1 has failed");
				 }

			 }


			 void workDefault(vector<c> & clas)
			 {

				 string s = "NULL";
				 for (int i = 0; i < clas.size(); i++)
				 {
					 int j = 0;
					 while (j < 50)
					 {
						 string h = clas[i].name;
						 clas[i].work[j] = s;
						 j++;
					 }

				 }

			 }


			 /*
			 Fills M,W,F and T,TH
			 vectors with classes on respective days
			 */
			 void fillVectors(vector<c> &  MWFarray, vector<c> & TTHarray, vector<c> Classesarray)
			 {
				 int j = 0, h = 0;
				 for (int i = 0; i < Classesarray.size(); i++)
				 {
					 if (Classesarray[i].day == "MWF")
					 {
						 string g = Classesarray[i].name;
						 MWFarray[j] = Classesarray[i];
						 j++;
					 }
					 else if (h < TTHarray.size() && Classesarray[i].day == "TTH")
					 {
						 string p = Classesarray[i].name;
						 TTHarray[h] = Classesarray[i];
						 h++;

					 }
				 }
			 }




			 //-------------------------------------Notes----------------------------------------------\\
			 			 			 			 	
/*	Thing to do
------------Display CLass doesnt display the last calss-----------

1.Start making the fails safe
2.Make DrawSchedule2 and DrawSchedule3
3.Finsh user imput
4.implyment updated graphics
5. add comments
*/

//========================================================================================\\

//-------------------------------------Graveyard------------------------------------------\\	
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
//I was just trying to see if I could get it to display the name in a textbox
//Because I have not found an easy way to do it with a variable
//It kinda works
//Passes in the vector of al the classes on either TTh or MWF "k"
//and the vector of the test class "classnum" and te place holder "j"
void Try(vector<c> k, vector<c> & classnum, int j)
{
int q = 1;
for (int qw = 0; qw < j; qw++)
{
if (q == 1)
{
//ignore the hola i copied it from online
String^ hola = gcnew String(k[qw].name.c_str());
textBox1->Text = hola;
}
}
}
*/

//========================================================================================\\









	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

