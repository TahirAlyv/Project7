#include <iostream>
using namespace std;
#include <string>
////
////
////
//////class Car {
//////
//////	string model;
//////	string color;
//////	int* year;
//////	double motor;
//////
//////
//////	//void Fill(string _model, string _color, int _year, double _motor) {
//////	//	model = _model;
//////	//	color = _color;
//////	//	year = _year;
//////	//	motor = _motor;
//////	//	
//////
//////	//}
//////
//////public:
//////
//////	Car (string model, string color, int year, double motor) {
//////		this->model = model;
//////		this->color = color;
//////		this->year = new int(year);
//////		this->motor = motor;
//////	}
//////
//////	Car() {
//////		model = "anonim";
//////		color = "anonim";
//////		year = new int(0);
//////		motor = 0;
//////		cout << "Default  constructor: "<<endl;
//////	}
//////
//////	void Show() {
//////		cout << "Model: " << model << endl;
//////		cout << "Color: " << color << endl;
//////		cout << "Year: " << *year << endl;
//////		cout << "Motor" << motor<<endl;
//////	}
//////
//////	~Car() {
//////		delete year;
//////		cout << model<< " Destructor" << endl;
//////	}
//////};
//////
//////
//////void main() {
//////	//Car car1("Toyota","Black",2014,2.4);
//////	//car1.Show();
//////	//Car car2;
//////	//car2.Show();
//////
//////	//car1.model = "Toyota";
//////	//car1.color = "black";
//////	//car1.motor = 2.4;
//////	//car1.year = 2014;
//////
//////	//car1.Fill("Toyota", "black", 2.4, 2014);
//////	//car1.Show();
//////
//////	//int year = 2020;
//////	//Car car1("Mercedes", "black", year, 6.3);
//////	//car1.Show();
//////
//////	//Car* car2 = new Car("Toyota", "red", year, 2.4);
//////	//car2->Show();
//////	//delete car2;
//////
//////}
////
////
////
////
////
////class Student {
////	 string fullname;
////	 int age;
////	 double average;
////	 int progress;
////
////public:
////	Student(string fullname,double average,int age,int progress) {
////		this->fullname = fullname;
////		this->average = average;
////		this->age = age;
////		this->progress = progress;
////	}
////
////
////	void Show() {
////		cout << "Fullname: " << fullname << endl;
////		cout << "average: " << average << endl;
////		cout << "age: " << age << endl;
////		cout << "progress: " << " %"<<average << endl;
////	}
////
////	void Change_Average(double average) {
////		this->average = average;
////	}
////
////	void Change_Progress(int progress) {
////		this->progress = progress;
////	}
////
////	~Student()
////	{
////		cout << "Destructor worked" << endl;
////	}
////
////
////};
////
////
////
////Student* CreatStudent(Student* studnet) {
////
////
////	string fullname;
////	int average;
////	int age;
////	int progress;
////
////	cout << "Enter fullname: ";
////	getline(cin, fullname);
////	
////
////	cout << "Enter average: ";
////	cin >> average;
////
////	cout << "Enter average: ";
////	cin >> age;
////
////
////	cout << "Enter average: ";
////	cin >> progress;
////
////
////	Student* student = new Student(fullname, average, age, progress);
////
////}
////
////void Add_Students(Student**& students, int& size) {
////	Student* student = Create_Student();
////	size += 1;
////	students[size - 1] = student;
////}
////
////
////
////
////
////
////Student** Add_Studnet(Student** students, int& size) {
////
////
////
////	Student** students_new = new Student * [size + 1] {};
////
////	for (size_t i = 0; i < size; i++)
////	{
////		students_new[i] = students[i];
////	}
////
////	
////
////	students[size] = 
////}
////
////
////
////
////
////int main() {
////
////
////	int size = 3;
////	Student* student1 = new Student("Tahir Aliyev", 11.7, 22, 100);
////	Student* student1 = new Student("Mahmud Namazov", 9.6, 21, 100);
////	Student* student2 = new Student("Zeynal Selimov", 11.7, 18, 100);
////
////
////	Student** students = new Student * [size] {student1, student2};
////
////
////	
////}
//
//
//
//
//
//
//
//
////##################################################################################
//
//
//
//class Employee {
//
//	string fin;
//	string fullname;
//	double salary;
//	string position;
//
//
//public:
//	static int employee_count;
//	Employee(string fin, string fullname, double salary, string position) {
//		employee_count++;
//		this->fin = fin;
//		this->fullname = fullname;
//		this->salary = salary;
//		this->position = position;
//	}
//
//
//	~Employee() {
//		employee_count--;
//		cout << "Destructor"<<endl;
//	}
//
//	void Show();
//
//	void Change_Salary(double salary) {
//		this->salary = salary;
//	}
//
//	void Change_Position(string position) {
//		this->position = position;
//	}
//
//	string Get_Fin() {
//		return fin;
//	}
//
//};
//
//int Employee::employee_count = 0;
//
//
//void Employee::Show() {
//
//	cout << "Fin: " << Employee::fin << endl;
//	cout << "Fullname: " << Employee::fullname << endl;
//	cout << "Salary: " << Employee::salary<<" Azn" << endl;
//	cout << "Position:" << Employee::position << endl;
//}
//
//
//
//
//Employee* Creat_employe() {
//
//
//
//	string fin;
//	cout << "Enter Fin: ";
//	getline(cin,fin);
//
//
//	string fullname;
//	cout << "Enter fullname: ";
//	getline(cin, fullname);
//
//	double salary;
//	cout << "Enter salary: ";
//	cin >> salary;
//
//	cin.ignore();
//	cin.clear();
//
//	string position;
//	cout << "Enter Position: ";
//	getline(cin, position);
//
//	Employee* employee = new Employee(fin, fullname, salary, position);
//
//	return employee;
//}
//
//
//
//
//Employee** Add_Employe(Employee**& employes, int& size) {
//	Employee** employes_new = new Employee * [size+1] {};
//
//	for (size_t i = 0; i < size; i++)
//	{
//		employes_new[i] = employes[i];
//	}
//	employes_new[size] = Creat_employe();
//
//	size += 1;
//	delete[] employes;
//	return employes_new;
//}
//
//
//
//int Search_Employee(Employee**& employes, int& size) {
//
//	string fin;
//	cout << "Enter fin: ";
//	getline(cin, fin);
//
//	bool Flag = false;
//
//	for (size_t i = 0; i < size; i++)
//	{
//		Flag = false;
//		if (employes[i]->Get_Fin() == fin) {
//			return i;
//		}
//		else {
//			Flag = true;
//		}
//	}
//
//}
//
//
//void Employees_Show(Employee** employes, int& size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		employes[i]->Show();
//	}
//}
//
//
//
//Employee** Delte_Employee(Employee** employes, int& size) {
//
//
//	Employee** employes_new = new Employee * [size-1] {};
//
//	string fin;
//	cout << "Enter Employee's Fin: " << endl;
//	cin >> fin;
//	int count=0;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (employes[i]->Get_Fin() != fin) {
//			employes_new[i] = employes[i];
//			count++;
//		}
//	}
//
//
//	size -= 1;
//	delete[] employes;
//	return employes_new;
//}
//
//
//
//
//
//
//
////void menu() {
////	cout << "1. Add: " << endl;
////	cout<<"2. "
////}
//
//
//
//
//
//
//void main() {
//
//	//Employee employee1("43RG60F", "Hesen Hesenov", 890, "Teacher");
//	//employee1.Show();
//
//	//Employee* employee2=new Employee("43RG60F", "Hesen Hesenov", 890, "Teacher");
//	//employee2->Show();
//
//	//
//	//employee1.Show();
//
//	//cout << employee1.employee_count<<endl;
//
//
//
//	//char answer;
//	//cout << "Delete employee?( Y or N): ";
//	//cin >> answer;
//
//	//if (answer == 'Y') {
//	//	delete employee2;
//	//}
//
//	//cout << employee1.employee_count << endl;
//
//	//cout << employee1.Get_Fin() << endl;
//	//double salary;
//	//cout << "Enter new Salary: " ;
//	//cin >>  salary;
//	//employee1.Change_Salary(salary);
//
//
//	
//	//Employee * employee1 = new Employee("43RG60F", "Hesen Hesenov", 890, "Teacher");
//	//int size = 1;
//	//Employee** employes = new Employee * [size] {employee1};
//
//	//Employee* employee2 = Creat_employe();
//	//employee2->Show();
//
//	//employes = Add_Employe(employes, size);
//
//
//	//while (true) {
//
//	//}
////}




class Phone_book {
	string name;
	string home_phone;
	string work_phone;
	string mobile_phone;


public:

	Phone_book() {
		cout << "Default Constructor" << endl;
	}

	Phone_book(string name, string home_phone, string work_phone,string mobile_phone) {
		cout << "Constructor with paramets(4)" << endl;

		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = mobile_phone;
	}


	Phone_book(string name, string home_phone, string work_phone) {
		cout << "Constructor with paramets(3)" << endl;

		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = "";
	}


	Phone_book(Phone_book& phone) {
		this->name = phone.name;
		this->mobile_phone = phone.mobile_phone;
		this->name = phone.work_phone;
		this->name = phone.home_phone;

		cout << "Copy constructor" << endl;
	}

	~Phone_book() {
		cout << "Destructor" << endl;
		cout << endl;
	}


	void Set_mobile_phone(string mobile_phone) {
		this->mobile_phone = mobile_phone;
	}


	void Set_Home_phone(string home_phone) {
		this->home_phone = home_phone;
	}

	void Set_Work_phone(string work_phone) {
		this->work_phone = work_phone;
	}


	string Get_Name() {
		return name;
	}


	string Get_Mobile_Phone() {
		return mobile_phone;
	}

	string Get_Home_Phone() {
		return home_phone;
	}


	void Show() {
		cout << "Name: " << name << endl;
		cout << "Mobile Phone: " << mobile_phone << endl;
		cout << "Home phone: " << home_phone << endl;
		cout << "Work Phone: " << work_phone << endl;
	}
};




void main() {

	Phone_book phone_book1("Ehmed", "213156456", "5465645646","4564656");
	//phone_book1.Show();
	Phone_book phone2= phone_book1;
	phone2.Show();



}















































