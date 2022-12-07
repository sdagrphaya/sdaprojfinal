#include "Main.h"
#pragma once
#include <msclr\marshal_cppstd.h>

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StaffDashboard
	/// </summary>
	public ref class StaffDashboard : public System::Windows::Forms::Form
	{
	public:
		StaffDashboard(void)
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
		~StaffDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ checkIn;
	private: System::Windows::Forms::Button^ checkOut;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StaffDashboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkIn = (gcnew System::Windows::Forms::Button());
			this->checkOut = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(917, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log Out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StaffDashboard::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(268, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(481, 187);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StaffDashboard::pictureBox1_Click);
			// 
			// checkIn
			// 
			this->checkIn->Location = System::Drawing::Point(116, 365);
			this->checkIn->Name = L"checkIn";
			this->checkIn->Size = System::Drawing::Size(349, 108);
			this->checkIn->TabIndex = 2;
			this->checkIn->Text = L"Check In";
			this->checkIn->UseVisualStyleBackColor = true;
			this->checkIn->Click += gcnew System::EventHandler(this, &StaffDashboard::checkIn_Click);
			// 
			// checkOut
			// 
			this->checkOut->Location = System::Drawing::Point(564, 365);
			this->checkOut->Name = L"checkOut";
			this->checkOut->Size = System::Drawing::Size(349, 108);
			this->checkOut->TabIndex = 3;
			this->checkOut->Text = L"Check Out";
			this->checkOut->UseVisualStyleBackColor = true;
			this->checkOut->Click += gcnew System::EventHandler(this, &StaffDashboard::checkOut_Click);
			// 
			// StaffDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1059, 609);
			this->Controls->Add(this->checkOut);
			this->Controls->Add(this->checkIn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"StaffDashboard";
			this->Text = L"StaffDashboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkIn_Click(System::Object^ sender, System::EventArgs^ e) {
		Time t = currentStaff.MarkAttendance("checkin");
		Time base(0, 0, 0);
		if (t == base) {
			MessageBox::Show("You have already checked in.");
		}
		else {
			string s = t.getTime();
			string display = "You checked in at " + s;
			String^ ms;
			ms = msclr::interop::marshal_as<String^>(display);
			MessageBox::Show(ms);
		}
	}
private: System::Void checkOut_Click(System::Object^ sender, System::EventArgs^ e) {
	Time t = currentStaff.MarkAttendance("checkout");
	Time base(0, 0, 0);
	if (t == base) {
		MessageBox::Show("You have not checked in today or have already checked out.");
	}
	else{
		string s = t.getTime();
		string display = "You worked a total of " + s + " time.";
		String^ ms;
		ms = msclr::interop::marshal_as<String^>(display);
		MessageBox::Show(ms);
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MessageBox::Show("Successfully Logged Out!");
	Application::Exit();
}
    };
}
