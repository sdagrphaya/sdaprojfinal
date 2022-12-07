#include "Main.h"
#pragma once
#include "UserHomePage.h"
#include <msclr\marshal_cppstd.h>

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ UserUserName;

	private: System::Windows::Forms::TextBox^ UserPassword;
	private: System::Windows::Forms::Button^ UserLoginButton;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UserUserName = (gcnew System::Windows::Forms::TextBox());
			this->UserPassword = (gcnew System::Windows::Forms::TextBox());
			this->UserLoginButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(389, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(196, 172);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(147, 238);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(147, 314);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// UserUserName
			// 
			this->UserUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->UserUserName->Location = System::Drawing::Point(351, 238);
			this->UserUserName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->UserUserName->Name = L"UserUserName";
			this->UserUserName->Size = System::Drawing::Size(316, 39);
			this->UserUserName->TabIndex = 3;
			this->UserUserName->TextChanged += gcnew System::EventHandler(this, &LoginForm::UserName_TextChanged);
			// 
			// UserPassword
			// 
			this->UserPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->UserPassword->Location = System::Drawing::Point(351, 320);
			this->UserPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->UserPassword->Name = L"UserPassword";
			this->UserPassword->PasswordChar = '*';
			this->UserPassword->Size = System::Drawing::Size(316, 39);
			this->UserPassword->TabIndex = 4;
			// 
			// UserLoginButton
			// 
			this->UserLoginButton->BackColor = System::Drawing::Color::DarkRed;
			this->UserLoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->UserLoginButton->Location = System::Drawing::Point(110, 402);
			this->UserLoginButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->UserLoginButton->Name = L"UserLoginButton";
			this->UserLoginButton->Size = System::Drawing::Size(738, 77);
			this->UserLoginButton->TabIndex = 5;
			this->UserLoginButton->Text = L"Login";
			this->UserLoginButton->UseVisualStyleBackColor = false;
			this->UserLoginButton->Click += gcnew System::EventHandler(this, &LoginForm::UserLoginButton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(991, 525);
			this->Controls->Add(this->UserLoginButton);
			this->Controls->Add(this->UserPassword);
			this->Controls->Add(this->UserUserName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void UserLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	    UserHomePage obj;
		String^ uname = UserUserName->Text;
		String^ upass = UserPassword->Text;
		std::string userName = msclr::interop::marshal_as<std::string>(uname);
		std::string userPassword = msclr::interop::marshal_as<std::string>(upass);
		if (currentuser.SignIn(userName, userPassword)) {
			this->Hide();
			MessageBox::Show("Login Successful");
			//restore details
			ofstream cData;
			ifstream currentUserDetails, currentElectricianFile, currentUserFile, currentDenterFile, currentTechnicianFile, currentMechanicFile, currentTyreTechnicianFile;
			currentElectricianFile.open("Current Electrician.txt");
			currentDenterFile.open("Current Denter.txt");
			currentTechnicianFile.open("Current Technician.txt");
			currentMechanicFile.open("Current Mechanic.txt");
			currentTyreTechnicianFile.open("Current Tyre Technician.txt");
			currentUserFile.open("Current User.txt");
			currentUserDetails.open("UserDetails.txt");
			cData.open("CurrentData.txt");

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

			int in[12][30];
			float mon[12][30];
			string userEmail;
			cData << userName << "\n";
			while (1) {
				currentUserFile >> userEmail;
				if (userEmail == userName) {
					currentuser.setemail(userEmail);

					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 30; j++) {
							currentUserFile >> in[i][j];
						}
					}
					currentUserFile >> userEmail;
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 30; j++) {
							currentUserFile >> mon[i][j];
						}
					}
					currentuser.getmileage()->setIndex(in);
					currentuser.getmileage()->setMonthlyMileage(mon);
					break;
				}
			}

			string n, a, pno, word;
			int type;
			currentUserDetails >> word;
			while (1) {
				if (userName == word) {
					currentUserDetails >> n;
					currentUserDetails >> a;
					currentUserDetails >> pno;
					currentUserDetails >> type;
					cData << type << "\n";
					currentuser.setName(n);
					currentuser.setaddress(a);
					currentuser.setphoneno(pno);
					currentuser.setType(type);
					break;
				}
				else {
					currentUserDetails >> n;
					currentUserDetails >> a;
					currentUserDetails >> pno;
					currentUserDetails >> type;
				}
				currentUserDetails >> word;
			}
			cData.close();
			currentElectricianFile.close();
			currentDenterFile.close();
			currentTechnicianFile.close();
			currentMechanicFile.close();
			currentTyreTechnicianFile.close();
			currentUserFile.close();
			currentUserDetails.close();

			obj.ShowDialog();
		}
		else {
			MessageBox::Show("Login Unsuccessful");
		}
    }
};
}