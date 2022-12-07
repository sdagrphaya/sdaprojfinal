#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <cmath>
#include <conio.h>
#include <time.h>
using namespace std;

class Date {
	int date;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	Date(const Date& d);
	void setDate(int d, int m, int y);
	Date getDate();
	bool operator == (Date d);
	void PrintDate();
};

class Time {
	int hour;
	int minutes;
	int seconds;
public:
	Time();
	Time(int h, int m, int s);
	Time(const Time& t);
	void setTime(int h, int m, int s);
	string getTime();
	bool operator == (Time d);
	Time operator - (Time d);
	void PrintTime();
};

class WorkingShift
{
	int ID;
	Time StartingTime;
	Time EndingTime;
public:
	WorkingShift();
	WorkingShift(int i, Time St, Time Et);
	void SetStartTime(Time st);
	void setendtime(Time et);
	void setId(int i);
	int getid();
	Time getstarttime();
	Time getendtime();
	void modifyworkingshift();

};

class Schedule
{
	int ID;
	WorkingShift* shift;
public:
	Schedule();
	Schedule(int i, WorkingShift* s);
	int getid();
	void setID(int i);
	void setshift(WorkingShift* sh);
	void createschedule();
	void modifyschedule();


};

class Attendance
{
	Time checkin[12][30];
	Time checkout[12][30];

public:
	Attendance();
	Time checkInFunc();
	Time checkOutFunc();
};

void getCurrentTime(int& month, int& date, int& hour, int& min, int& sec);

class Staff
{
	int ID;
	string name;
	string address;
	string phoneno;
	string designation;
	string email;
	string password;
	Attendance* dailyAttendance;

public:
	Staff();
	Staff(int i, string a, string ph, string d, string s, Time av, Schedule* sc, Attendance* at);
	void setID(int i);
	void setName(string n);
	void setaddress(string a);
	void setphoneno(string p);
	void setdesignation(string d);
	void setAvgTime(Time t);
	void setStatus(string s);
	int getID();
	string getName();
	string getaddress();
	string getphoneno();
	string getdesignation();
	string getstatus();
	Time getAvgTime();
	bool SignIn(string id, string password);
	bool Signup(string n, string a, string pno, string d, string id, string password);
	Time MarkAttendance(string type);
};

static Staff currentStaff;

class Mileage {
	float monthlyMileage[12][30];
	int index[12][30];
public:
	Mileage();
	Mileage(const Mileage& m);
	void setIndex(int i[12][30]);
	void setMonthlyMileage(float m[12][30]);
	void getIndex(int i[12][30]);
	void getMonthlyMileage(float m[12][30]);
	float dailyMileage(int m, int d, float mileage);
	float projectMileage(int m, int d);
	float GetTotalMileage();
};

class User{
	string name;
	string address;
	string phoneno;
	string email;
	string password;
	int UserVehicleType;
	Mileage* m;
public:
	User();
	User(string a, string ph, string e, string p, int type);
	float computeDailyMileage(int m, int d, float mileage);
	float computeProjectedMileage(int m, int d);
	void setName(string n);
	void setaddress(string a);
	void setphoneno(string p);
	void setpassword(string d);
	void setemail(string e);
	void setType(int t);
	string getName();
	string getaddress();
	string getphoneno();
	string getpassword();
	string getemail();
	Mileage* getmileage();
	void getVehicleType(int& t);
	float getTotalVehicleMileage();
	float ServiceCharges(int st, int vt);
	bool SignIn(string id, string password);
	bool Signup(string n, string a, string pno, string id, string password, int type);
};

static User currentuser;

class OutletAdmin : public Staff
{
	int OutletID;
	User** userlist;

public:
	OutletAdmin();
	OutletAdmin(int id, User** ul);
	void createoutlets();
	void updateoutlets();
	void  blockoullets();
	void deleteoullets();
	void deactivaleaccount();
	void terminateomployee();
	void transferemployee();
	void transferuser();
	~OutletAdmin();
};

class InventoryManager : public Staff
{
public:
	InventoryManager();
	void allocateinventory();
	void definereorderlevel();
	void changereorderlevel();
};

class WorkshopManager : public Staff
{
	Schedule* workschedule;
public:
	WorkshopManager();
	void manageschedules();
	void approveleaves();
	void addleavequotas();
	void runmonthlyreports();
	void runannualreports();
	void viewpredictedjobs();
};

class FloorManager : public Staff
{
public:
	FloorManager();
	bool returnitems();
	void viewjobs();
	void runreports();
};

class Outlet
{
	int OutletID;
	string Location;
	Staff** StaffList;

public:
	Outlet(int i, string c);
	void NotifyCustomerVisit();
	void setOutletID(int i);
	void setLocation(string s);
};

class SystemSJ
{
	Outlet** outletlist;
	Staff** stafflist;
public:
	SystemSJ();
	void notifynnewcustomers();
	void sendotp();
	void computedailyavgmilage();
	void computeprojectedmilage();
	void predictcost();
};

class Vehicle	 {
public:
	virtual string SuggestServiceLevel(float m) = 0;
	virtual float ComputeServiceCost(int st) = 0;
};													

class Mehran : public Vehicle {
public:
	string SuggestServiceLevel(float m);
	float ComputeServiceCost(int st);
};
class Mercedes : public Vehicle {
public:
	string SuggestServiceLevel(float m);
	float ComputeServiceCost(int st);
};
class Audi : public Vehicle {
public:
	string SuggestServiceLevel(float m);
	float ComputeServiceCost(int st);
};
class BMW : public Vehicle {
public:
	string SuggestServiceLevel(float m);
	float ComputeServiceCost(int st);
};

class WorkStaff: public Staff {
public:
	virtual bool bookAppointment(int m, int d, int t) = 0;
};
class Technician : public WorkStaff {
	bool schedule[12][30][8];
public:
	Technician();
	void getSchedule(bool s[12][30][8]);
	void setSchedule(bool s[12][30][8]);
	bool bookAppointment(int m, int d, int t);
};
class TyreTechnician : public WorkStaff {
	bool schedule[12][30][8];
public:
	TyreTechnician();
	void getSchedule(bool s[12][30][8]);
	void setSchedule(bool s[12][30][8]);
	bool bookAppointment(int m, int d, int t);
};
class Denter : public WorkStaff {
	 bool schedule[12][30][8];
public:
	Denter();
	void getSchedule(bool s[12][30][8]);
	void setSchedule(bool s[12][30][8]);
	bool bookAppointment(int m, int d, int t);
};
class Electrician : public WorkStaff {
	 bool schedule[12][30][8];
public:
	Electrician();
	void getSchedule(bool s[12][30][8]);
	void setSchedule(bool s[12][30][8]);
	bool bookAppointment(int m, int d, int t);
};
class Mechanic : public WorkStaff {
	 bool schedule[12][30][8];
public:
	Mechanic();
	void getSchedule(bool s[12][30][8]);
	void setSchedule(bool s[12][30][8]);
	bool bookAppointment(int m, int d, int t);
};

extern Electrician currentElectrician;
extern Denter currentDenter;
extern Technician currentTechnician;
extern Mechanic currentMechanic;
extern TyreTechnician currentTyreTechnician;

void storeDetails();
//int readuserdetails(string details[]);
#endif