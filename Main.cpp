#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <cmath>
#include <conio.h>
#include <time.h>
#include "Main.h"
using namespace std;
Electrician currentElectrician;
Denter currentDenter;
Technician currentTechnician;
Mechanic currentMechanic;
TyreTechnician currentTyreTechnician;

Date::	Date() { date = month = year = 0; }
Date::Date(int d, int m, int y) { setDate(d, m, y); }
Date::Date(const Date& d) {
	date = d.date;
	month = d.month;
	year = d.year;
}
void Date::setDate(int d, int m, int y) {
	date = d;
	month = m;
	year = y;
}
Date Date::getDate() { return *this; }
bool Date::operator == (Date d) {
	if (this->date == d.date)
		if (this->month == d.month)
			if (this->year == d.year)
				return true;
	return false;
}
void Date::PrintDate() { cout << date << "/" << month << "/" << year; }

Time::Time() { hour = minutes = seconds = 0; }
Time::Time(int h, int m, int s) { setTime(h, m, s); }
Time::Time(const Time& t) {
	hour = t.hour;
	minutes = t.minutes;
	seconds = t.seconds;
}
void Time::setTime(int h, int m, int s) {
	hour = h;
	minutes = m;
	seconds = s;
}
string Time::getTime() { 
	string s;
	s = s + to_string(this->hour) + ":" + to_string(this->minutes) + ":" + to_string(this->seconds);
	return s;
}
bool Time::operator == (Time d) {
	if (this->hour == d.hour)
		if (this->minutes == d.minutes)
			if (this->seconds == d.seconds)
				return true;
	return false;
}
Time Time::operator - (Time d) {
	Time ret;
	int checkoutseconds, checkinseconds;
	checkoutseconds = checkinseconds = 0;
	checkoutseconds = (this->hour * 3600) + (this->minutes * 60) + (this->seconds);
	checkinseconds = (d.hour * 3600) + (d.minutes * 60) + (d.seconds);
	int diff = 0;
	diff = checkoutseconds - checkinseconds;
	int mins = 0, sec = 0, h = 0;
	h = diff / 3600;
	diff = diff % 3600;
	mins = diff / 60;
	sec = diff % 60;
	ret.setTime(h, mins, sec);
	return ret;
}
void Time::PrintTime() { cout << hour << ":" << minutes << ":" << seconds; }

WorkingShift::WorkingShift() { ID = 0; }
WorkingShift::WorkingShift(int i, Time St, Time Et) {
	ID = i;
	StartingTime = St;
	EndingTime = Et;
}
void WorkingShift::SetStartTime(Time st) { StartingTime = st; }
void WorkingShift::setendtime(Time et) { EndingTime = et; }
void WorkingShift::setId(int i) { ID = i; }
int WorkingShift::getid() { return ID; }
Time WorkingShift::getstarttime() { return StartingTime; }
Time WorkingShift::getendtime() { return EndingTime; }

Schedule::Schedule() {
	ID = 0;
	shift = nullptr;
}
Schedule::Schedule(int i, WorkingShift* s) {
	setID(i);
	setshift(s);
}
int Schedule::getid() { return ID; }
void Schedule::setID(int i) { ID = i; }
void Schedule::setshift(WorkingShift* sh) { shift = sh; }

Attendance::Attendance() {
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < 30; j++) {
			checkin[i][j].setTime(0, 0, 0);
			checkout[i][j].setTime(0, 0, 0);
		}
	}
}

Staff::Staff() {
	ID = 0;
	name = "";
	address = " ";
	phoneno = "";
	designation = " ";
	dailyAttendance = new Attendance();
}
Staff::Staff(int i, string a, string ph, string d, string s, Time av, Schedule* sc, Attendance* at) {
	ID = i;
	address = a;
	phoneno = ph;
	designation = d;
	dailyAttendance = at;
}
void Staff::setID(int i) { ID = i; }
void Staff::setName(string n) { name = n; }
void Staff::setaddress(string a) { address = a; }
void Staff::setphoneno(string p) { phoneno = p; }
void Staff::setdesignation(string d) { designation = d; }
int Staff::getID() { return ID; }
string Staff::getName() { return name; }
string Staff::getaddress() { return address; }
string Staff::getphoneno() { return phoneno; }
string Staff::getdesignation() { return designation; }

User::User() {
	name = "";
	address = " ";
	email = "";
	password = " ";
	phoneno = " ";
	UserVehicleType = 0;
	m = new Mileage();
}
User::User(string a, string ph, string e, string p, int vl) {
	address = a;
	phoneno = ph;
	email = e;
	password = p;
	UserVehicleType = vl;
	m = new Mileage();
}
void User::setName(string n) { name = n; }
void User::setaddress(string a) { address = a; }
void User::setphoneno(string p) { phoneno = p; }
void User::setpassword(string d) { password = d; }
void User::setemail(string e) { this->email = e; }
string User::getName() { return name; }
string User::getaddress() { return address; }
string User::getphoneno() { return phoneno; }
string User::getpassword() { return password; }
string User::getemail() { return this->email; }
Mileage* User::getmileage() { return m; }
void User::getVehicleType(int& t) { t = this->UserVehicleType; }
bool User::SignIn(string id, string password) {
	string userID, userPass, word;
	ifstream userfile;
	bool userLogin = false;
	userID = id;
	userPass = password;
	userfile.open("UserCredentials.txt");
	while (!userfile.eof()) {
		userfile >> word;
		if (word == userID) {
			userfile >> word;
			if (word == userPass) {
				userLogin = true;
			}
		}
		else {
			userfile >> word;
		}
	}
	userfile.close();
	if (userLogin == true) {
		return true;
	}
	else {
		return false;
	}
}
bool User::Signup(string n, string a, string pno, string id, string password, int type) {
	ofstream userfile, userfile2,cData;
	ifstream readUserFile;
	bool existingUserName;
	string userID, userPass, word, fileread;
	userID = id;
	userPass = password;
	//check existing username
	readUserFile.open("UserCredentials.txt");
	while (!readUserFile.eof()) {
		readUserFile >> fileread;
		if (fileread == id) {
			return false;
		}
		readUserFile >> fileread;
	}
	readUserFile.close();
	//store user details
	userfile.open("UserCredentials.txt", ios::app);
	userfile2.open("UserDetails.txt",ios::app);
	cData.open("CurrentData.txt");
	userfile << userID;
	userfile << "\n";
	userfile << userPass << "\n";
	this->name = n;
	this->address = a;
	this->phoneno = pno;
	this->email = id;
	this->password = password;
	this->UserVehicleType = type;

	userfile2 << userID << "\n" << n << "\n" << a << "\n" << pno << "\n" << type << "\n";
	cData << userID << "\n" << type;
	cData.close();
		userfile.close();
	userfile2.close();
	return true;
}

OutletAdmin::OutletAdmin() {
	OutletID = 0;
	userlist = nullptr;
}
OutletAdmin::OutletAdmin(int id, User** ul) {
	OutletID = id;
	userlist = ul;
}
OutletAdmin::~OutletAdmin() { userlist = nullptr; }

bool Staff::SignIn(string id, string password) {
	string adminID, adminPass, word;

	ifstream adminfile;
	bool adminLogin = false;

	adminID = id;

	adminPass = password;
	adminfile.open("AdminCredentials.txt");
	while (!adminfile.eof()) {
		adminfile >> word;
		if (word == adminID) {
			adminfile >> word;
			if (word == adminPass) {
				adminLogin = true;
			}
		}
		else {
			adminfile >> word;
		}
	}
	adminfile.close();
	if (adminLogin == true) {
		return true;
	}
	else {
		cout << "Wrong Admin credentials\n";
		return false;
	}
}
bool Staff::Signup(string n, string a, string pno, string d, string id, string password) {
	ofstream adminfile, adminfile2;
	string adminID, adminPass, word;
	adminID = id;
	adminPass = password;
	adminfile.open("AdminCredentials.txt",ios::app);
	adminfile2.open("AdminDetails.txt",ios::app);
	adminfile << adminID;
	adminfile << "\n";
	adminfile << adminPass << "\n";
	this->name = n;
	this->address = a;
	this->phoneno = pno;
	this->designation = d;
	this->email = id;
	this->password = password;
	adminfile2 << n << "\n" << a << "\n" << pno << "\n" << d << "\n";
	adminfile.close();
	adminfile2.close();
	return true;
}

InventoryManager::InventoryManager() { Staff(); }

WorkshopManager::WorkshopManager() {
	Staff();
	workschedule = nullptr;
}

FloorManager::FloorManager() { Staff(); }

Outlet::Outlet(int i, string c) {
	OutletID = i;
	Location = c;
}
void Outlet::setOutletID(int i) { OutletID = i; }
void Outlet::setLocation(string s) { Location = s; }

SystemSJ::SystemSJ() {
	outletlist = nullptr;
	stafflist = nullptr;
}

Mileage::Mileage() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			index[i][j] = 0;
			monthlyMileage[i][j] = 0.0;
		}
	}
}
float Mileage::dailyMileage(int m, int d, float mileage) {
	m--;
	d--;
	if (index[m][d] == 0) {
		index[m][d]++;
		monthlyMileage[m][d] = mileage;
	}
	else {
		float sum = index[m][d] * monthlyMileage[m][d];
		sum = sum + mileage;
		index[m][d]++;
		float avg = sum / index[m][d];
		monthlyMileage[m][d] = avg;
	}
	return monthlyMileage[m][d];
}
float Mileage::projectMileage(int m, int d) {
	m--;
	d--;
	int division = 0;
	int mon = m, day = d;
	float sum = 0;
	int y = 0, z = 0;
	if (day > 5) {
		for (int i = day; i >= day - 6; i--) {
			if (monthlyMileage[mon][i] != 0) {
				sum = sum + monthlyMileage[mon][i];
				division++;
			}
		}
	}
	else {
		y = day;
		while (day >= 0) {
			if (monthlyMileage[mon][y] != 0) {
				sum = sum + monthlyMileage[mon][y];
				y--;
				z++;
				division++;
			}
		}
		y = 29;
		mon--;
		while (z < 7) {
			if (monthlyMileage[mon][y] != 0) {
				sum = sum + monthlyMileage[mon][y];
				y--;
				z++;
				division++;
			}
		}
	}
	if (division > 0)
		return sum / division;
	else
		return 0.0;
}
float Mileage::GetTotalMileage() {
	float sum = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			sum = sum + monthlyMileage[i][j];
	    }
	}
	return sum;
}
float User::computeDailyMileage(int mon, int d, float mileage) {
	return m->dailyMileage(mon, d, mileage);
}
float User::computeProjectedMileage(int mon, int d) {
	return m->projectMileage(mon, d);
}
float User::getTotalVehicleMileage() {
	return m->GetTotalMileage();
}

float User::ServiceCharges(int st, int t)
{
	Vehicle* v;
	if (t == 1) {
		Mercedes m;
		 v = &m;
		return v->ComputeServiceCost(st);
	}
	else if (t == 2) {
		BMW b;
		 v = &b;
		 return v->ComputeServiceCost(st);
	}
	else if (t == 3) {
		Mehran me;
		 v = &me;
		 return v->ComputeServiceCost(st);
	}
	else {
		Audi a;
		 v = &a;
		 return v->ComputeServiceCost(st);
	}
}
Time Staff::MarkAttendance(string type) {
	if (type == "checkin") {
		return dailyAttendance->checkInFunc();
	}
	else {
		return dailyAttendance->checkOutFunc();
	}
}

Time Attendance::checkInFunc() {
	int month, date, hour, mins, sec;
	getCurrentTime(month, date, hour, mins, sec);
	Time base(0, 0, 0);
	if (checkin[month-1][date-1] == base) {
		Time currentTime(hour, mins, sec);
		checkin[month - 1][date - 1] = currentTime;
		return currentTime;
	}
	else {
		return base;
	}
}
Time Attendance::checkOutFunc() {
	int month, date, hour, mins, sec;
	getCurrentTime(month, date, hour, mins, sec);
	Time base,ret;
	if (checkout[month-1][date-1] == base) {
		if (checkin[month-1][date-1] == base) {
			return base;
		}
		else {
			Time currentTime(hour, mins, sec);
			checkout[month - 1][date - 1] = currentTime;
			ret = checkout[month - 1][date-1] - checkin[month - 1][date - 1];
			return ret;
		}
	}
	else {
		return base;
	}
}
void getCurrentTime(int& month, int& date, int& hour, int& min, int& sec) {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	month = 1 + ltm->tm_mon;
	date = ltm->tm_mday;
	hour = ltm->tm_hour;
	min = ltm->tm_min;
	sec = ltm->tm_sec;	
}
string Mehran::SuggestServiceLevel(float m) {
	string msg;
	
	if (m< 3000)
	{
		msg = "The car does not require service";
	}
	else if (m >= 3000 && m < 5000)
	{
		  msg = "Change engine oil and check tyre pressure";
	}
	else
	{
		msg = "Book Appointment with our mechanic for general checkup";
	}
	return msg;
}
string Mercedes::SuggestServiceLevel(float m) {
	string msg;
	
	if (m < 3000)
	{
		msg = "The car does not require service";
	}
	else if (m >= 3000 && m < 5000)
	{
		msg = "Change engine oil and check tyre pressure";
	}
	else
	{
		msg = "Book Appointment with our mechanic for general checkup";
	}
	return msg;
}
string BMW::SuggestServiceLevel(float m) {
	string msg;
	
	if (m< 3000)
	{
		msg = "The car does not require service";
	}
	else if (m >= 3000 && m < 5000)
	{
		msg = "Change engine oil and check tyre pressure";
	}
	else
	{
		msg = "Book Appointment with our mechanic for general checkup";
	}
	return msg;
}
string Audi::SuggestServiceLevel(float m) {
	string msg;
	
	if (m < 3000)
	{
		msg = "The car does not require service";
	}
	else if (m >= 3000 && m < 5000)
	{
		msg = "Change engine oil and check tyre pressure";
	}
	else
	{
		msg = "Book Appointment with our mechanic for general checkup";
	}
	return msg;
}
float Mehran::ComputeServiceCost(int st) {
	float cost;
	if (st == 1)
		cost = 1500;
	else if (st == 2)
		cost = 2000;
	else if (st == 3)
		cost = 1000;
	else if (st == 4)
		cost = 1500;
	else
		cost = 500;

	return cost;
}
float Mercedes::ComputeServiceCost(int st) {
	float cost;
	if (st == 1)
		cost = 1500;
	else if (st == 2)
		cost = 5000;
	else if (st == 3)
		cost = 3000;
	else if (st == 4)
		cost = 4500;
	else
		cost = 2000;

	return cost;
}
float BMW::ComputeServiceCost(int st) {
	float cost;
	if (st == 1)
		cost = 1500;
	else if (st == 2)
		cost = 4000;
	else if (st == 3)
		cost = 2500;
	else if (st == 4)
		cost = 4000;
	else
		cost = 2200;

	return cost;
}
float Audi::ComputeServiceCost(int st) {
	float cost;
	if (st == 1)
		cost = 1500;
	else if (st == 2)
		cost = 5000;
	else if (st == 3)
		cost = 2000;
	else if (st == 4)
		cost = 4500;
	else
		cost = 4000;

	return cost;
}

Technician::Technician() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				schedule[i][j][k] = 0;
			}
		}
	}
}
Denter::Denter() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				schedule[i][j][k] = 0;
			}
		}
	}
}
Electrician::Electrician() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				schedule[i][j][k] = 0;
			}
		}
	}
}
Mechanic::Mechanic() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				schedule[i][j][k] = 0;
			}
		}
	}
}
TyreTechnician::TyreTechnician() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				schedule[i][j][k] = 0;
			}
		}
	}
}
bool TyreTechnician::bookAppointment(int m, int d, int t) {
	m--;
	d--;
	t--;
	if (schedule[m][d][t] == 1)
		return false;
	else {
		schedule[m][d][t] = 1;
		return true;
	}
}
bool Technician:: bookAppointment(int m, int d, int t) {
	m--;
	d--;
	t--;
	if (schedule[m][d][t] == 1)
		return false;
	else {
		schedule[m][d][t] = 1;
		return true;
	}
}
bool Denter::bookAppointment(int m, int d, int t) {
	m--;
	d--;
	t--;
	if (schedule[m][d][t] == 1)
		return false;
	else {
		schedule[m][d][t] = 1;
		return true;
	}
}
bool Electrician::bookAppointment(int m, int d, int t) {
	m--;
	d--;
	t--;
	if (schedule[m][d][t] == 1)
		return false;
	else {
		schedule[m][d][t] = 1;
		return true;
	}
}
bool Mechanic::bookAppointment(int m, int d, int t) {
	m--;
	d--;
	t--;
	if (schedule[m][d][t] == 1)
		return false;
	else {
		schedule[m][d][t] = 1;
		return true;
	}
}

void Electrician::getSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				s[i][j][k] = schedule[i][j][k];
			}
		}
	}
}
void TyreTechnician::getSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				s[i][j][k] = schedule[i][j][k];
			}
		}
	}
}
void Technician::getSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				s[i][j][k] = schedule[i][j][k];
			}
		}
	}
}
void Denter::getSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				s[i][j][k] = schedule[i][j][k];
			}
		}
	}
}
void Mechanic::getSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				s[i][j][k] = schedule[i][j][k];
			}
		}
	}
}

void storeDetails() {
	ofstream currentElectricianFile, currentDenterFile, currentTechnicianFile, currentMechanicFile, currentTyreTechnicianFile, currentUserFile;
	currentElectricianFile.open("Current Electrician.txt");
	currentDenterFile.open("Current Denter.txt");
	currentTechnicianFile.open("Current Technician.txt");
	currentMechanicFile.open("Current Mechanic.txt");
	currentTyreTechnicianFile.open("Current Tyre Technician.txt");
	currentUserFile.open("Current User.txt", ios::app);

	bool s[12][30][8] = { 0 };
	currentElectrician.getSchedule(s);
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				currentElectricianFile << s[i][j][k]<<"\n";
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
	currentUserFile.close();
}
Mileage::Mileage(const Mileage& m) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			this->index[i][j] = m.index[i][j];
			this->monthlyMileage[i][j] = m.monthlyMileage[i][j];
		}
	}
}
void Mileage::getIndex(int i[12][30]) {
	for (int k = 0; k < 12; k++) {
		for (int j = 0; j < 30; j++) {
			i[k][j] = this->index[k][j];
		}
	}
}

void Mileage::getMonthlyMileage(float m[12][30]) {
	for (int k = 0; k < 12; k++) {
		for (int j = 0; j < 30; j++) {
			m[k][j] = this->monthlyMileage[k][j];
		}
	}
}

void Technician::setSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				this->schedule[i][j][k] = s[i][j][k];
			}
		}
	}
}
void TyreTechnician::setSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				this->schedule[i][j][k] = s[i][j][k];
			}
		}
	}
}
void Mechanic::setSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				this->schedule[i][j][k] = s[i][j][k];
			}
		}
	}
}
void Denter::setSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				this->schedule[i][j][k] = s[i][j][k];
			}
		}
	}
}
void Electrician::setSchedule(bool s[12][30][8]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 8; k++) {
				this->schedule[i][j][k] = s[i][j][k];
			}
		}
	}
}

void Mileage::setIndex(int i[12][30]) {
	for (int k = 0; k < 12; k++) {
		for (int j = 0; j < 30; j++) {
				this->index[k][j] = i[k][j];
		}
	}
}
void Mileage::setMonthlyMileage(float m[12][30]) {
	for (int k = 0; k < 12; k++) {
		for (int j = 0; j < 30; j++) {
			this->monthlyMileage[k][j] = m[k][j];
		}
	}
}
void User::setType(int t) { this->UserVehicleType = t; }

