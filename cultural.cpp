#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#include <stdlib.h>

void module1();
void module2();
void module3();
void module4();

class student
{
public:
	char cc[16],tc[16],pc[16],fa[16],per[16];
	char name[20];
	int place;
	char stuname[20];

 public:
	void create_cultural()
	{
                cout<<"\n            ====================================================";
		cout<<"\n            |******************Cultural ENTRY******************|\n";
                cout<<"            ====================================================";
		cout<<"\n\nEnter the cultural event code:";
		cin>>cc;
		cout<<"\n\nEnter The Name of The Student:";
		cin>>name;
		cout<<"\n\nEnter The Name of The Cultural Event:";
		cin>>stuname;
		cout<<"\n\nEnter Place(1/2/3)";
		cin>>place;
		cout<<"\n\n\nCultural Record Created...";
	}
	void create_technical()
	{
                cout<<"\n            =========================================================";
		cout<<"\n            |******************New Technical ENTRY******************|\n";
                cout<<"            =========================================================";
		cout<<"\n\nEnter the technical event code:";
		cin>>tc;
		cout<<"\n\nEnter The Name of The Student:";
		cin>>name;
		cout<<"\n\nEnter The Name of The Technical Event:";
		cin>>stuname;
		cout<<"\n\nEnter Place(1/2/3)";
		cin>>place;
		cout<<"\n\n\nTechnical Record Created...";
	}
	   void create_project()
	{
                cout<<"\n            =======================================================";
		cout<<"\n            |******************New Project ENTRY******************|\n";
                cout<<"            =======================================================";
  		cout<<"\n\nEnter the project event code:";
		cin>>pc;
		cout<<"\n\nEnter The Name of The Student:";
		cin>>name;
		cout<<"\n\nEnter The Name of The Project:";
		cin>>stuname;
		cout<<"\n\nEnter Place(1/2/3)";
		cin>>place;
		cout<<"\n\n\nProject Record Created...";
	}
	   void create_fine()
	{
                cout<<"\n            =========================================================";
		cout<<"\n            |******************New Fine arts ENTRY******************|\n";
                cout<<"            =========================================================";
		cout<<"\n\nEnter the fine arts  code:";
		cin>>fa;
		cout<<"\n\nEnter The Name of The Student:";
		cin>>name;
		cout<<"\n\nEnter The Name of The fine arts Event:";
		cin>>stuname;
		cout<<"\n\nEnter Place(1/2/3)";
		cin>>place;
		cout<<"\n\n\nFine arts Record Created...";
	}
		   

	void report()
	{
	cout<<" \t"<<cc<<" \t\t"<<name<<" \t\t\t"<<stuname<<"       \t"<<place <<endl;
	}
	void report1()
	{
	cout<<" \t"<<tc<<" \t\t"<<name<<" \t\t\t"<<stuname<<"       \t"<<place <<endl;
	}
	       void report2()
	{
	cout<<" \t"<<pc<<" \t\t"<<name<<" \t\t\t"<<stuname<<"       \t"<<place <<endl;
	}
	     void report3()
	{
	cout<<" \t"<<fa<<" \t\t"<<name<<" \t\t\t"<<stuname<<"       \t"<<place <<endl;
	}
	   


};         //class ends here


//***************************************************************
//                   	INTRODUCTION FUNCTION
//****************************************************************
fstream fp;
student st;
void cultural()
{
	char ch;
	fp.open("cultural.dat",ios::out|ios::app);
	do
	{
		st.create_cultural();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\nDo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}
void technical()
{
	char ch;
	fp.open("technical.dat",ios::out|ios::app);
	do
	{
		st.create_technical();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\nDo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}
void project()
{
	char ch;
	fp.open("project.dat",ios::out|ios::app);
	do
	{
		st.create_project();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\nDo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}
void fine()
{
	char ch;
	fp.open("fine.dat",ios::out|ios::app);
	do
	{
		st.create_fine();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\nDo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}


void display()
{

	fp.open("cultural.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";


	}

	cout<<"\n CULTURAL STUDENT LIST\n";
	cout<<"\n      ====================================================================\n";
	cout<<"      | Cultural Code|| Name of the Student ||Name of the Event || Place |\n";
	cout<<"      ====================================================================\n";

	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
	}

	fp.close();

}
void display1()
{

	fp.open("technical.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";


	}

	cout<<"\n Technical STUDENT LIST\n\n";
	cout<<"\n      =====================================================================\n";
	cout<<"      | Technical Code|| Name of the Student ||Name of the Event || Place |\n";
	cout<<"      =====================================================================\n";

	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report1();
	}

	fp.close();

}
void display2()
{

	fp.open("project.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";


	}

	cout<<"\n Project LIST\n\n";
	cout<<"\n      ===================================================================\n";
	cout<<"      | Project Code|| Name of the Student ||Name of the Event || Place |\n";
	cout<<"      ===================================================================\n";

	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report2();
	}

	fp.close();

}
void display3()
{

	fp.open("Fine.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";


	}

	cout<<"\n Fine arts STUDENT LIST\n\n";
	cout<<"\n      ===================================================================\n";
	cout<<"      | Fine arts Code|| Name of the Student ||Name of the Event ||Place |\n";
	cout<<"      ====================================================================\n";

	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report3();
	}

	fp.close();

}


//module 2

void cert()
{
int g;
clrscr();
do
{
cout<<"\n\n1.For Cultural    Participants";
cout<<"\n\n2.For Techcnical  Participants";
cout<<"\n\n3.For Project     Participants";
cout<<"\n\n4.For Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\n6.Enter Your Choice:";
cin>>g;
switch(g)
{
case 1:
	fp.open("cultural.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
		if(st.place==1)
		cout<<" FIRST PLACE"<<endl;
		else if(st.place==2)
		cout<<" SECOND PLACE"<<endl;
		else if(st.place==3)
		cout<<"THIRD PLACE"<<endl;
	}

	fp.close();
	getch();
	break;

	case 2:
		fp.open("technical.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report1();
		if(st.place==1)
		cout<<" FIRST PLACE"<<endl;
		else if(st.place==2)
		cout<<" SECOND PLACE"<<endl;
		else if(st.place==3)
		cout<<"THIRD PLACE"<<endl;
	}

	fp.close();
	getch();
		break;

	case 3:
		fp.open("project.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report2();
		if(st.place==1)
		cout<<" FIRST PLACE"<<endl;
		else if(st.place==2)
		cout<<" SECOND PLACE"<<endl;
		else if(st.place==3)
		cout<<"THIRD PLACE"<<endl;
	}

	fp.close();
	getch();
		break;
	case 4:
		fp.open("fine.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report3();
		if(st.place==1)
		cout<<" FIRST PLACE"<<endl;
		else if(st.place==2)
		cout<<" SECOND PLACE"<<endl;
		else if(st.place==3)
		cout<<"THIRD PLACE"<<endl;
	}

	fp.close();
	getch();
		break;
	
	case 5:
		clrscr();
		module2();
		break;
	}
	}while(g!=5);
	}

void cash()
{
int i;//for medals
clrscr();
do
{
cout<<"\n\n1.For Cultural    Participants";
cout<<"\n\n2.For Techcnical  Participants";
cout<<"\n\n3.For Project     Participants";
cout<<"\n\n4.For Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\n\nEnter Your Choice:";
cin>>i;
switch(i)
{
case 1:
	fp.open("cultural.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
		if(st.place==1)
		cout<<"CASH:2000RS"<<endl;
		else if(st.place==2)
		cout<<" CASH:1000"<<endl;
		else if(st.place==3)
		cout<<"CASH:500"<<endl;
	}

	fp.close();
	getch();
	break;


	case 2:
		fp.open("technical.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report1();
		if(st.place==1)
		cout<<"CASH:2000RS"<<endl;
		else if(st.place==2)
		cout<<" CASH:1000"<<endl;
		else if(st.place==3)
		cout<<"CASH:500"<<endl;
	}

	fp.close();
	getch();
		break;

	case 3:
		fp.open("project.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report2();
		if(st.place==1)
		cout<<"CASH:2000RS"<<endl;
		else if(st.place==2)
		cout<<" CASH:1000"<<endl;
		else if(st.place==3)
		cout<<"CASH:500"<<endl;
	}

	fp.close();
	getch();
		break;
	case 4:
		fp.open("fine.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report3();
		if(st.place==1)
		cout<<"CASH:2000RS"<<endl;
		else if(st.place==2)
		cout<<" CASH:1000"<<endl;
		else if(st.place==3)
		cout<<"CASH:500"<<endl;
	}

	fp.close();
	getch();
		break;
	
	case 5:
		clrscr();
		module2();
		break;
	}
	}while(i!=5);
	}

void acce()
{
int j;//for medals
clrscr();
do
{
cout<<"\n\n1.For Cultural    Participants";
cout<<"\n\n2.For Techcnical  Participants";
cout<<"\n\n3.For Project     Participants";
cout<<"\n\n4.For Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\n\nEnter Your Choice:";
cin>>j;
switch(j)
{
case 1:
	fp.open("cultural.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
		if(st.place==1)
		cout<<"PRIZE:ANDROID PHONE"<<endl;
		else if(st.place==2)
		cout<<" PRIZE:WATCH"<<endl;
		else if(st.place==3)
		cout<<"PRIZE:SHOES";
	}

	fp.close();
	getch();
	break;


	case 2:
		fp.open("technical.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report1();
		if(st.place==1)
		cout<<"PRIZE:ANDROID PHONE"<<endl;
		else if(st.place==2)
		cout<<" PRIZE:WATCH"<<endl;
		else if(st.place==3)
		cout<<"PRIZE:SHOES";
	}

	fp.close();
	getch();
		break;

	case 3:
		fp.open("project.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report2();
		if(st.place==1)
		cout<<"PRIZE:ANDROID PHONE"<<endl;
		else if(st.place==2)
		cout<<" PRIZE:WATCH"<<endl;
		else if(st.place==3)
		cout<<"PRIZE:SHOES";
	}

	fp.close();
	getch();
		break;
	case 4:
		fp.open("fine.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report3();
		if(st.place==1)
		cout<<"PRIZE:ANDROID PHONE"<<endl;
		else if(st.place==2)
		cout<<" PRIZE:WATCH"<<endl;
		else if(st.place==3)
		cout<<"PRIZE:SHOES";
	}

	fp.close();
	getch();
		break;
	
	case 5:
		clrscr();
		module2();
		break;
	}
	}while(j!=5);
	}

void voul()
{
int v;
clrscr();
do
{
cout<<"\n\n1.For Cultural    Participants";
cout<<"\n\n2.For Techcnical  Participants";
cout<<"\n\n3.For Project     Participants";
cout<<"\n\n4.For Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\n\nEnter Your Choice:";
cin>>v;
switch(v)
{
case 1:
	cout<<"\n\n\t Volunteers For CULTURAL :RAVI TEJA"<<endl;
	break;
case 2:
	cout<<"\n\n\t Volunteer For TECHNICAL:YASHWANTH GOPI"<<endl;
	break;
case 3:
	cout<<"\n\n\t Volunteer For PROJECTS :SRI HARSHA"<<endl;
	break;
case 4:
	cout<<"\n\n\t Volunteers For ARTS :LAVANYA"<<endl;
	break;

case 5:
	module4();
	break;
}
}while(v!=5);
}
void sponsor()
{
int r;
clrscr();
do
{
cout<<"\n\n1.For Cultural    Participants";
cout<<"\n\n2.For Techcnical  Participants";
cout<<"\n\n3.For Project     Participants";
cout<<"\n\n4.For Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\n\nEnter Your Choice:";
cin>>r;
switch(r)
{
case 1:
	clrscr();
	cout<<"\n\n\t Sponsor For CULTURAL Events:TECH MAHINDRA"<<endl;
	break;
case 2:
	clrscr();
	cout<<"\n\n\t Sponsor For TECHNICAL Events:INTEL"<<endl;
	break;
case 3:
	clrscr();
	cout<<"\n\n\t Sponsor For PROJECTS Events:MICROSOFT"<<endl;
	break;
case 4:
	clrscr();
	cout<<"\n\n\t Sponsor For ARTS Events:CROMA RETAILS"<<endl;
	break;

case 5:
	module4();
	break;
}
}while(r!=5);
}

void judge()
{
int m;
clrscr();
do
{
cout<<"\n\n1.For Cultural    Participants";
cout<<"\n\n2.For Techcnical  Participants";
cout<<"\n\n3.For Project     Participants";
cout<<"\n\n4.For Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\nEnter Your Choice:";
cin>>m;
switch(m)
{
case 1:
	clrscr();
	cout<<"\n\n\t Judge For CULTURAL :Mr.NORMA KELLY"<<endl;
	break;
case 2:
	clrscr();
	cout<<"\n\n\t Judge For TECHNICAL:Dr ABDUL KALAM"<<endl;
	break;
case 3:
	clrscr();
	cout<<"\n\n\t Judge For PROJECTS :Mr.GARY PAGANO "<<endl;
	break;
case 4:
	clrscr();
	cout<<"\n\n\t Judge For ARTS :Mr.BUNTY BURROW"<<endl;
	break;

case 5:
	module3();
	break;
}
}while(m!=5);
}

void med()
{
int k;
clrscr();
do
{
cout<<"\n                 *********************MEDAL DISTRIBUTION*********************\n";
cout<<"\n\n1.Cultural    Participants";
cout<<"\n\n2.Techcnical  Participants";
cout<<"\n\n3.Project     Participants";
cout<<"\n\n4.Fine Arts   Participants";
cout<<"\n\n5.Back to Module";
cout<<"\n\n\nEnter Your Choice:";
cin>>k;
switch(k)
{
case 1:
	fp.open("cultural.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
		if(st.place==1)
		cout<<"GOLD MEDAL"<<endl;
		else if(st.place==2)
		cout<<" SILVER MEDAL"<<endl;
		else if(st.place==3)
		cout<<"BRONZE MEDAL";
	}

	fp.close();
	getch();
	break;

	case 2:
		fp.open("technical.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report1();
		if(st.place==1)
		cout<<"GOLD MEDAL"<<endl;
		else if(st.place==2)
		cout<<" SILVER MEDAL"<<endl;
		else if(st.place==3)
		cout<<"BRONZE MEDAL";
	}

	fp.close();
	getch();
		break;
	case 3:
		fp.open("project.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report2();
		if(st.place==1)
		cout<<"GOLD MEDAL"<<endl;
		else if(st.place==2)
		cout<<" SILVER MEDAL"<<endl;
		else if(st.place==3)
		cout<<"BRONZE MEDAL";
	}

	fp.close();
	getch();
		break;
	case 4:
		fp.open("fine.dat",ios::in);
		while(fp.read((char*)&st,sizeof(student)))
	{
		st.report3();
		if(st.place==1)
		cout<<"GOLD MEDAL"<<endl;
		else if(st.place==2)
		cout<<" SILVER MEDAL"<<endl;
		else if(st.place==3)
		cout<<"BRONZE MEDAL";
	}

	fp.close();
	getch();
		break;
	
	case 5:
		clrscr();
		module2();
		break;
	}
	}while(k!=5);
	}

void intro()
{
	clrscr();
	int a;
	do
	{
	cout<<"\n *****************************************************************************\n";
	cout<<" *              ADVANCED CULTURAL AND TECHNICAL MANAGEMENT SYSTEM            *";
	cout<<"\n *****************************************************************************\n";
	cout<<"\n\n          ==========================================================";
	cout<<"\n          |           A Project by KLU Btech II/IV students        | ";
	cout<<"\n          |           Developed by Batch no:16, Section-S7         | ";
	cout<<"\n          ==========================================================";
	cout<<"\n\n-> Collect and maintain Prize winners of the  competitions";
	cout<<"\n\n-> Collect and maintain distribution of Prizes";
	cout<<"\n\n-> Accounting revenues and expenditure";
	cout<<"\n\n-> Queries and Report ";
	cout<<"\n\n-> Close";
	cout<<"\n\n\nEnter Your Option(no): ";
	cin>>a;

	switch(a)
	{
	case 1:
		module1();
		getch();
		break;
	case 2:
		module2();
		getch();
		break;
	case 3:
		module3();
		getch();
		break;
	case 4:
		module4();
		getch();
		break;
	case 5:
		exit(0);
                
	}
	}while(a<6);
	}

void module1()
{
	int b;
	clrscr();

		do
	{

		clrscr();
                cout<<"\n-----------------------------------------------------------------------------";
		cout<<"\n ********************COLLECT AND MAINTAIN PRIZE WINNERS*********************\n";
                cout<<"-----------------------------------------------------------------------------";
		cout<<"\n\n1.Enter Cultural Related Student Details";
		cout<<"\n +Display Cultural Students";
		cout<<"\n\n3.Create Technical Related Student Details";
		cout<<"\n +Display Technical Students";
		cout<<"\n\n5.Create Project Completion Related Student Details";
		cout<<"\n +Display Project Completion Students";
		cout<<"\n\n7.Create Fine arts Completion Related Student Details";
		cout<<"\n +Display Fine arts Completion Students";
		cout<<"\n\n9.Return Back To Main Menu";
		cout<<"\n\n\nEnter Your Choice:";
		cin>>b;
		switch(b)
		{
			case 1:
				 clrscr();
				 cultural();
				 break;
			case 2:
				 clrscr();
				 display();
				 getch();
				 break;
			case 3:
				 clrscr();
				 technical();
				 break;
			case 4:
				 clrscr();
				 display1();
				 getch();
				 break;
			case 5:
				 clrscr();
				 project();
				 break;
			case 6:
				 clrscr();
				 display2();
				 getch();
				 break;
			case 7:
				 clrscr();
				 fine();
				 break;
			case 8:
				 clrscr();
				 display3();
				 getch();
				 break;
			
			case 9: intro();

		}
		}while(b!=9);
		}
void module2()
{
	int c;
	clrscr();

		do
		{

		clrscr();
                cout<<"\n-----------------------------------------------------------------------------";
                cout<<"\n ****************Collect and maintain distribution of Prizes****************\n";
                cout<<"-----------------------------------------------------------------------------";
		cout<<"\n\n1.Maintain Inventory of certificates";
		cout<<"\n\n2.Maintain Inventory of medals";
		cout<<"\n\n3.Maintain Inventory of Cash Prizes";
		cout<<"\n\n4.Maintain Inventory of Accessories";
		cout<<"\n\n5.Return Back To Modules";
		cout<<"\n\nEnter ur Choice:";
		cin>>c;
		switch(c)
		{
		case 1:
			cert();
			getch();
			break;
		case 2:
			med();
			getch();
			break;
		case 3:
			cash();
			getch();
			break;
		case 4:
			acce();
			getch();
			break;
		case 5:
			intro();
		}
		}while(c!=5);
		}
void module3()
{
	int d;
	clrscr();

		do
		{

		clrscr();
                cout<<"\n-----------------------------------------------------------------------------";
                cout<<"\n *********************Accounting revenues and expenditure*******************\n";
                cout<<"-----------------------------------------------------------------------------";
		cout<<"\n\n1.Account for revenue from Management Contributions";
		cout<<"\n\n2.Account Expenditure for issue of cash prizes";
		cout<<"\n\n.Account for expenditure on event management";
		cout<<"\n\n4.Account for revenue from Sponsors";
		cout<<"\n\n5.Return Back To Modules";
		cout<<"\n\nEnter ur Choice:";
		cin>>d;
		switch(d)
		{
		case 1:
		       	manage();
			getch();
			break;
		case 2:
		       	cashpz();
			getch();
			break;
		case 3:
		       	eventmg();
			getch();
			break;
		case 4:
			sponsor();
			getch();
			break;
		case 5:
			intro();
		}
		}while(d!=5);
		}
void module4()
{
	int e;
	clrscr();

		do
		{

		clrscr();
                cout<<"\n--------------------------------------------------------------";
                cout<<"\n ********************Queries and Reports*********************\n";
                cout<<"--------------------------------------------------------------";
		cout<<"\n\n1.List the Judges for various events";
		cout<<"\n\n2.Report on the students who have not got any prizes";
		cout<<"\n\n3.List the student Volunteers";
		cout<<"\n\n4.Report account of the Revenue";
		cout<<"\n\n5.Return Back To Modules";
		cout<<"\n\nEnter ur Choice:";
		cin>>e;
		switch(e)
		{
		case 1:
			judge();
			getch();
			break;
		case 2:
		      	parti();
			getch();
			break;
		case 3:
			voul();
			getch();
			break;
		case 4:
		      	revenue();
			getch();
			break;
		case 5:
			intro();
		}
		}while(e!=5);
		}

int main()
{
clrscr();
intro();
getch();
return 0;
}
