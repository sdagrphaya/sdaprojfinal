#include "Main.h"
#pragma once
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <stdlib.h>
#include <string.h>
namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserHomePage
	/// </summary>
	public ref class UserHomePage : public System::Windows::Forms::Form
	{
	public:
		UserHomePage(void)
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
		~UserHomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ LoadChart;
	private: System::Windows::Forms::Button^ logout;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ dailyMileage;
	private: System::Windows::Forms::Button^ projectedMileage;




	private: System::Windows::Forms::TextBox^ currentMileage;
	private: System::Windows::Forms::ComboBox^ DateBox1;
	private: System::Windows::Forms::ComboBox^ monthBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ serviceButton;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ appointment;
	private: System::Windows::Forms::Button^ payment;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ monthAppointment;
	private: System::Windows::Forms::ComboBox^ dateAppointment;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ timeAppointment;

	private: System::Windows::Forms::Label^ label14;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserHomePage::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LoadChart = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dailyMileage = (gcnew System::Windows::Forms::Button());
			this->projectedMileage = (gcnew System::Windows::Forms::Button());
			this->currentMileage = (gcnew System::Windows::Forms::TextBox());
			this->DateBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->monthBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->serviceButton = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->appointment = (gcnew System::Windows::Forms::Button());
			this->payment = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->monthAppointment = (gcnew System::Windows::Forms::ComboBox());
			this->dateAppointment = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->timeAppointment = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 141);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(65, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"User Dashboard";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 269);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Mileage: ";
			this->label2->Click += gcnew System::EventHandler(this, &UserHomePage::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(445, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 4;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(937, 425);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Time";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(349, 203);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(1062, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Mileage Graph";
			this->label4->Click += gcnew System::EventHandler(this, &UserHomePage::label4_Click);
			// 
			// LoadChart
			// 
			this->LoadChart->Location = System::Drawing::Point(1076, 646);
			this->LoadChart->Name = L"LoadChart";
			this->LoadChart->Size = System::Drawing::Size(102, 34);
			this->LoadChart->TabIndex = 7;
			this->LoadChart->Text = L"Load Chart";
			this->LoadChart->UseVisualStyleBackColor = true;
			this->LoadChart->Click += gcnew System::EventHandler(this, &UserHomePage::LoadChart_Click);
			// 
			// logout
			// 
			this->logout->Location = System::Drawing::Point(352, 12);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(102, 34);
			this->logout->TabIndex = 8;
			this->logout->Text = L"Log Out";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &UserHomePage::logout_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(75, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Date";
			this->label5->Click += gcnew System::EventHandler(this, &UserHomePage::label5_Click);
			// 
			// dailyMileage
			// 
			this->dailyMileage->Location = System::Drawing::Point(189, 372);
			this->dailyMileage->Name = L"dailyMileage";
			this->dailyMileage->Size = System::Drawing::Size(232, 34);
			this->dailyMileage->TabIndex = 11;
			this->dailyMileage->Text = L"Compute Daily Mileage";
			this->dailyMileage->UseVisualStyleBackColor = true;
			this->dailyMileage->Click += gcnew System::EventHandler(this, &UserHomePage::dailyMileage_Click);
			// 
			// projectedMileage
			// 
			this->projectedMileage->Location = System::Drawing::Point(198, 507);
			this->projectedMileage->Name = L"projectedMileage";
			this->projectedMileage->Size = System::Drawing::Size(232, 34);
			this->projectedMileage->TabIndex = 12;
			this->projectedMileage->Text = L"Compute Projected Mileage";
			this->projectedMileage->UseVisualStyleBackColor = true;
			this->projectedMileage->Click += gcnew System::EventHandler(this, &UserHomePage::projectedMileage_Click);
			// 
			// currentMileage
			// 
			this->currentMileage->Location = System::Drawing::Point(189, 269);
			this->currentMileage->Name = L"currentMileage";
			this->currentMileage->Size = System::Drawing::Size(232, 26);
			this->currentMileage->TabIndex = 14;
			// 
			// DateBox1
			// 
			this->DateBox1->FormattingEnabled = true;
			this->DateBox1->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30"
			});
			this->DateBox1->Location = System::Drawing::Point(167, 324);
			this->DateBox1->Name = L"DateBox1";
			this->DateBox1->Size = System::Drawing::Size(121, 28);
			this->DateBox1->TabIndex = 15;
			// 
			// monthBox2
			// 
			this->monthBox2->FormattingEnabled = true;
			this->monthBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->monthBox2->Location = System::Drawing::Point(422, 323);
			this->monthBox2->Name = L"monthBox2";
			this->monthBox2->Size = System::Drawing::Size(121, 28);
			this->monthBox2->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(319, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Month";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(329, 457);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 25);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Month";
			this->label8->Click += gcnew System::EventHandler(this, &UserHomePage::label8_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox1->Location = System::Drawing::Point(422, 454);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 21;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30"
			});
			this->comboBox2->Location = System::Drawing::Point(167, 454);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(75, 457);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Date";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(454, 480);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 18;
			// 
			// serviceButton
			// 
			this->serviceButton->Location = System::Drawing::Point(198, 594);
			this->serviceButton->Name = L"serviceButton";
			this->serviceButton->Size = System::Drawing::Size(232, 34);
			this->serviceButton->TabIndex = 23;
			this->serviceButton->Text = L"Suggest Service Levels";
			this->serviceButton->UseVisualStyleBackColor = true;
			this->serviceButton->Click += gcnew System::EventHandler(this, &UserHomePage::serviceButton_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"General checkup", L"Change engine oil",
					L"Change tyres", L"Replace fuel filter", L"Change air filter"
			});
			this->checkedListBox1->Location = System::Drawing::Point(937, 43);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(282, 119);
			this->checkedListBox1->TabIndex = 24;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserHomePage::checkedListBox1_SelectedIndexChanged);
			// 
			// appointment
			// 
			this->appointment->Location = System::Drawing::Point(1077, 309);
			this->appointment->Name = L"appointment";
			this->appointment->Size = System::Drawing::Size(232, 34);
			this->appointment->TabIndex = 25;
			this->appointment->Text = L"Book Appointment";
			this->appointment->UseVisualStyleBackColor = true;
			this->appointment->Click += gcnew System::EventHandler(this, &UserHomePage::appointment_Click);
			// 
			// payment
			// 
			this->payment->Location = System::Drawing::Point(961, 180);
			this->payment->Name = L"payment";
			this->payment->Size = System::Drawing::Size(232, 34);
			this->payment->TabIndex = 26;
			this->payment->Text = L"Total Service Cost";
			this->payment->UseVisualStyleBackColor = true;
			this->payment->Click += gcnew System::EventHandler(this, &UserHomePage::payment_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1063, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 25);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Month";
			// 
			// monthAppointment
			// 
			this->monthAppointment->FormattingEnabled = true;
			this->monthAppointment->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->monthAppointment->Location = System::Drawing::Point(1166, 248);
			this->monthAppointment->Name = L"monthAppointment";
			this->monthAppointment->Size = System::Drawing::Size(121, 28);
			this->monthAppointment->TabIndex = 30;
			// 
			// dateAppointment
			// 
			this->dateAppointment->FormattingEnabled = true;
			this->dateAppointment->Items->AddRange(gcnew cli::array< System::Object^  >(30) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30"
			});
			this->dateAppointment->Location = System::Drawing::Point(911, 249);
			this->dateAppointment->Name = L"dateAppointment";
			this->dateAppointment->Size = System::Drawing::Size(121, 28);
			this->dateAppointment->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(819, 252);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 25);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Date";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1189, 236);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 20);
			this->label12->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(819, 313);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 25);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Time";
			this->label13->Click += gcnew System::EventHandler(this, &UserHomePage::label13_Click);
			// 
			// timeAppointment
			// 
			this->timeAppointment->FormattingEnabled = true;
			this->timeAppointment->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"10 am - 11 am", L"11 am - 12 pm", L"12 pm - 1 pm",
					L"1 pm - 2 pm", L"2 pm - 3 pm", L"3 pm - 4 pm", L"4 pm - 5 pm", L"5 pm - 6 pm"
			});
			this->timeAppointment->Location = System::Drawing::Point(911, 313);
			this->timeAppointment->Name = L"timeAppointment";
			this->timeAppointment->Size = System::Drawing::Size(121, 28);
			this->timeAppointment->TabIndex = 33;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1230, 235);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 20);
			this->label14->TabIndex = 32;
			// 
			// UserHomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1349, 720);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->timeAppointment);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->monthAppointment);
			this->Controls->Add(this->dateAppointment);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->payment);
			this->Controls->Add(this->appointment);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->serviceButton);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->monthBox2);
			this->Controls->Add(this->DateBox1);
			this->Controls->Add(this->currentMileage);
			this->Controls->Add(this->projectedMileage);
			this->Controls->Add(this->dailyMileage);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->LoadChart);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UserHomePage";
			this->Text = L"UserHomePage";
			this->Load += gcnew System::EventHandler(this, &UserHomePage::UserHomePage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void LoadChart_Click(System::Object^ sender, System::EventArgs^ e) {
		this->chart1->Series["Time"]->Points->AddXY(1, 80);
		this->chart1->Series["Time"]->Points->AddXY(2, 97);
		this->chart1->Series["Time"]->Points->AddXY(3, 52);
		this->chart1->Series["Time"]->Points->AddXY(4, 66);
	}

private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
	//storeDetails();
	int in[12][30];
	float mon[12][30];
	string str;
	ifstream cData;
	cData.open("CurrentData.txt");
	cData >> str;
	cData.close();

	ofstream currentUserFile;
	currentUserFile.open("Current User.txt", ios::app);
	currentUserFile << str<< "\n";
	currentuser.getmileage()->getIndex(in);
	currentuser.getmileage()->getMonthlyMileage(mon);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			currentUserFile << in[i][j] << "\n";
		}
	}
	currentUserFile << "Mileage\n";
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			currentUserFile << mon[i][j] << "\n";
		}
	}
	currentUserFile << "\n";
	currentUserFile.close();


	ofstream currentElectricianFile, currentDenterFile, currentTechnicianFile, currentMechanicFile, currentTyreTechnicianFile;
	currentElectricianFile.open("Current Electrician.txt");
	currentDenterFile.open("Current Denter.txt");
	currentTechnicianFile.open("Current Technician.txt");
	currentMechanicFile.open("Current Mechanic.txt");
	currentTyreTechnicianFile.open("Current Tyre Technician.txt");
	

	bool s[12][30][8] = { 0 };
	currentElectrician.getSchedule(s);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentElectricianFile << s[i][j][k] << "\n";
			}
		}
	}
	currentDenter.getSchedule(s);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentDenterFile << s[i][j][k] << "\n";
			}
		}
	}
	currentTechnician.getSchedule(s);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentTechnicianFile << s[i][j][k] << "\n";
			}
		}
	}
	currentTyreTechnician.getSchedule(s);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentTyreTechnicianFile << s[i][j][k] << "\n";
			}
		}
	}
	currentMechanic.getSchedule(s);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentMechanicFile << s[i][j][k] << "\n";
			}
		}
	}
	/*int in[12][30];
	float mon[12][30];
	currentUserFile << currentuser.getemail();
	currentuser.getmileage()->getIndex(in);
	currentuser.getmileage()->getMonthlyMileage(mon);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			currentUserFile << in[i][j] << "\n";
		}
	}
	currentUserFile << "Mileage\n";
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			currentUserFile << mon[i][j] << "\n";
		}
	}
	currentUserFile << "\n";*/

	currentElectricianFile.close();
	currentDenterFile.close();
	currentTechnicianFile.close();
	currentMechanicFile.close();
	currentTyreTechnicianFile.close();
	




	this->Hide();
	MessageBox::Show("Successfully Logged Out!");
	Application::Exit();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dailyMileage_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ mil = currentMileage->Text;
	String^ day = DateBox1->SelectedItem->ToString();
	String^ mont = monthBox2->SelectedItem->ToString();

	std::string mileage = msclr::interop::marshal_as<std::string>(mil);
	std::string date = msclr::interop::marshal_as<std::string>(day);
	std::string month = msclr::interop::marshal_as<std::string>(mont);

	int m = stoi(month);
	int d = stoi(date);
	float mils = stof(mileage);
	string ret = to_string(currentuser.computeDailyMileage(m, d, mils));
	String^ ms;
	ms = msclr::interop::marshal_as<String^>(ret);
	MessageBox::Show(ms);
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void Result1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void projectedMileage_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ day = comboBox2->SelectedItem->ToString();
	String^ mont = comboBox1->SelectedItem->ToString();

	std::string date = msclr::interop::marshal_as<std::string>(day);
	std::string month = msclr::interop::marshal_as<std::string>(mont);

	int m = stoi(month);
	int d = stoi(date);
	string ret = to_string(currentuser.computeProjectedMileage(m, d));
	String^ ms;
	ms = msclr::interop::marshal_as<String^>(ret);
	MessageBox::Show(ms);
}
private: System::Void UserHomePage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void serviceButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//string n = currentuser.getName();
	//string details[50];
	//int i = readuserdetails(details);
	//for (int j = 0; j < i; j++)
	//{
	//	if (details[j] == n)
	//		t = stoi(details[j + 1]);

	//}
	string ret;
	int t;
	string str;
	ifstream cData;
	cData.open("CurrentData.txt");
	cData >> str;
	cData >> t;
	float s = currentuser.getTotalVehicleMileage();
	if (t == 1) {
		Mercedes m;
		Vehicle* v = &m;
		ret = v->SuggestServiceLevel(s);
	}
	else if (t == 2) {
		BMW b;
		Vehicle* v = &b;
		ret = v->SuggestServiceLevel(s);
	}
	else if (t == 3) {
		Mehran me;
		Vehicle* v = &me;
		ret = v->SuggestServiceLevel(s);
	}
	else {
		Audi a;
		Vehicle* v = &a;
		ret = v->SuggestServiceLevel(s);
	}
	
	String^ ms;
	ms = msclr::interop::marshal_as<String^>(ret);
	MessageBox::Show(ms);
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void payment_Click(System::Object^ sender, System::EventArgs^ e) {
	ifstream in;
	int vt;
	in.open("CurrentData.txt");
	string x;
	in >> x;
	in >> vt;
	int t[5];	
	//currentuser.getVehicleType(vt);
	int c = checkedListBox1->CheckedItems->Count;
	float cost = 0;
	for (int x = 0; x <c ; x++)
	{
		std::string s = msclr::interop::marshal_as<std::string>(checkedListBox1->CheckedItems[x]->ToString());
		if (s == "General checkup")
			t[x] = 1;
		else if (s == "Change engine oil")
			t[x] = 2;
		else if (s == "Change tyres")
			t[x] = 3;
		else if (s == "Replace fuel filter")
			t[x] = 4;
		else
			t[x] = 5;
		cost = cost + currentuser.ServiceCharges(t[x], vt);
	}
	string s;
	float taxcost = cost * 1.17;
	s ="Your Service Charges are " + to_string(cost) + ".\n" +
		"Charges with tax are " + to_string(taxcost) + ".\n" +
		"Please Book an appointment to have your car serviced";
	String^ ms;
	ms = msclr::interop::marshal_as<String^>(s);
	MessageBox::Show(ms);
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void appointment_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ day = dateAppointment->SelectedItem->ToString();
	String^ mont = monthAppointment->SelectedItem->ToString();
	String^ tim = timeAppointment->SelectedItem->ToString();

	std::string date = msclr::interop::marshal_as<std::string>(day);
	std::string month = msclr::interop::marshal_as<std::string>(mont);
	std::string time = msclr::interop::marshal_as<std::string>(tim);
	/*ifstream currentElectricianFile, currentDenterFile, currentTechnicianFile, currentMechanicFile, currentTyreTechnicianFile;
	currentElectricianFile.open("Current Electrician.txt");
	currentDenterFile.open("Current Denter.txt");
	currentTechnicianFile.open("Current Technician.txt");
	currentMechanicFile.open("Current Mechanic.txt");
	currentTyreTechnicianFile.open("Current Tyre Technician.txt");
	
	bool s[12][30][8] = { 0 };
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentElectricianFile >> s[i][j][k];
			}
		}
	}
	currentElectrician.setSchedule(s);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentDenterFile >> s[i][j][k];
			}
		}
	}
	currentDenter.setSchedule(s);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentTechnicianFile >> s[i][j][k];
			}
		}
	}
	currentTechnician.setSchedule(s);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentTyreTechnicianFile >> s[i][j][k];
			}
		}
	}
	currentTyreTechnician.setSchedule(s);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentMechanicFile >> s[i][j][k];
			}
		}
	}
	currentMechanic.setSchedule(s);

	currentElectricianFile.close();
	currentDenterFile.close();
	currentTechnicianFile.close();
	currentMechanicFile.close();
	currentTyreTechnicianFile.close();*/
	
	int t = 0;

	if (time == "10 am - 11 am")
		t = 0;
	else if (time == "11 am - 12 pm")
		t = 1;
	else if (time == "12 pm - 1 pm")
		t = 2;
	else if (time == "1 pm - 2 pm")
		t = 3;
	else if (time == "2 pm - 3 pm")
		t = 4;
	else if (time == "3 pm - 4 pm")
		t = 5;
	else if (time == "4 pm - 5 pm")
		t = 6;
	else if (time == "5 pm - 6 pm")
		t = 7;

	int m = stoi(month);
	int d = stoi(date);
	bool booked;
	WorkStaff* w;
	int c = checkedListBox1->CheckedItems->Count;
	for (int x = 0; x < c; x++)
	{
		std::string s = msclr::interop::marshal_as<std::string>(checkedListBox1->CheckedItems[x]->ToString());
		if (s == "General checkup") {
			w = &currentTechnician;
			booked = w->bookAppointment(m, d, t);
			if (booked)
				MessageBox::Show("General checkup appointment made.");
			else
				MessageBox::Show("Staff not available for general checkup.");
		}
		else if (s == "Change engine oil") {
			w = &currentMechanic;
			booked = w->bookAppointment(m, d, t);
			if (booked)
				MessageBox::Show("Change engine oil appointment made.");
			else
				MessageBox::Show("Staff not available for changing of engine oil.");
		}
		else if (s == "Change tyres") {
			w = &currentTyreTechnician;
			booked = w->bookAppointment(m, d, t);
			if (booked)
				MessageBox::Show("Change tyres appointment made.");
			else
				MessageBox::Show("Staff not available for changing of tyres.");
		}
		else if (s == "Replace fuel filter") {
			w = &currentElectrician;
			booked = w->bookAppointment(m, d, t);
			if (booked)
				MessageBox::Show("Replace fuel filter appointment made.");
			else
				MessageBox::Show("Staff not available for replacement of fuel filter.");
		}
		else {
			w = &currentDenter;
			booked = w->bookAppointment(m, d, t);
			if (booked)
				MessageBox::Show("Change air filter appointment made.");
			else
				MessageBox::Show("Staff not available for changing of air filter.");
		}
	}
	
}
};
}

