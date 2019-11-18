#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>
using namespace std;
int main(){
int a, b;
string password;


	cout<<"What would you like to hack into?\n"<<endl;

	cout<<"Press 1 to hack into School"<<endl;
	cout<<"Press 2 to hack into Police Station"<<endl;
	cout<<"Press 3 to hack into Military Base"<<endl;
	cout<<"Press 4 to see the rules of hacking"<<endl;
	cout<<" "<<endl;
	cout<<"Write your answer."<<endl;
	cin>> a;
	cout<<""<<endl;
	system("CLS");

	if(a == 4){
		cout<<"Rules: "<<endl;
		cout<<"Please write with all lowercase or the begging of each word with uppercase. "<<endl;
		cout<<"If there is more than 1 word, use _ to separate them."<<endl;
		cout<<"To hack into the selected area you must unscramble the scrambled word."<<endl;
		
		
	}
	if(a == 1){
		cout<<"You have chosen School"<<endl;
		cout<<"Please insert password"<<endl;
		cout<<""<<endl;
		cout<<"Password: "<<endl;
		cout<<"Hint - a person who teaches, especially in a school."<<endl;
		cin>>password;
		cout<<"";
		if(password == "Teacher" || password == "teacher"){
			system("CLS");
			cout<<"Welcome Piko!"<<endl;
			cout<<"To hack the School you must unscramble the words."<<endl;
			cout<<""<<endl;
			cout<<"Hacking: 0%"<<endl;
			cout<<"Unscramble: ookb"<<endl;
			cin>>password;
			cout<<""<<endl;
			if(password == "book" || password == "Book"){
				system("CLS");
				cout<<"Correct"<<endl;
				cout<<""<<endl;
				cout<<"Hacking: 20%"<<endl;
				cout<<"Unscramble: akchl "<<endl;
				cin>>password;
				cout<<""<<endl;
				if(password == "chalk" || password == "Chalk"){
					system("CLS");
					cout<<"Correct!"<<endl;
					cout<<""<<endl;
					cout<<"Hacking: 40%"<<endl;
					cout<<"Unscramble: licpen"<<endl;
					cin>>password;
					cout<<""<<endl;
					if(password == "Pencil" || password == "pencil"){
						system("CLS");
						cout<<"Correct!"<<endl;
						cout<<""<<endl;
						cout<<"Hacking: 60%"<<endl;
						cout<<"Unscramble: pongse"<<endl;
						cin>>password;
						cout<<""<<endl;
						if(password == "sponge" || password == "Sponge"){
						 system("CLS");
						 cout<<"Correct!"<<endl;
						 cout<<""<<endl;
						 cout<<"Hacking: 80%"<<endl;
						 cout<<"Unscramble: ackbldroad"<<endl;
						 cin>>password;
						 cout<<""<<endl;
						 if(password == "blackboard" || password == "Blackboard"){
						 	system("CLS");
						    cout<<"Correct!\n"<<endl;
						    cout<<"Hacking: ";
						    Sleep(1000);
						    cout<<"**";
						    Sleep(1000);
						    cout<<"**";
						    Sleep(1000);
						    cout<<"**";
						    Sleep(1000);
						    cout<<""<<endl;
						    Sleep(1000);
						    system("CLS");
						    cout<<"School has been HACKED, you now have full access to all of the computers in the school!"<<endl;
						    cout<<"Restart the hack if you want to try again or choose different level"<<endl;
						    
						    
						 }
						 else{
						 	cout<<"Please try again!"<<endl;
						 }
						}
						else{
							cout<<"Please try again!"<<endl;
						}
					}
					else{
						cout<<"Please try again!"<<endl;
					}
				}
				else{
				cout<<"Please try again!"<<endl;	
				}
			}
			
			else{
				cout<<"Please try again!"<<endl;
			}
		}
		else{
			cout<<"Please try again!"<<endl;
		}
		
    }
	
	else if(a == 2){
		cout<<"You have chosen Police Station"<<endl;
		cout<<"Please insert password"<<endl;
		cout<<""<<endl;
		cout<<"Password: "<<endl;
		cout<<"Hint - the civil force of a state, responsible for the prevention and detection of crime and the maintenance of public order."<<endl;
		cin>>password;
		cout<<"";
		if(password == "Police" || password == "police"){
			cout<<"Welcome Piko!"<<endl;
			cout<<""<<endl;
			cout<<"To hack the Police Station you must unscramble the words."<<endl;
			cout<<""<<endl;
			cout<<"Hacking: 0%"<<endl;
			cout<<"Unscramble: licepol"<<endl;
			cin>>password;
			if(password == "police" || password =="Police"){
				system("CLS");
				cout<<"Correct!"<<endl;
				cout<<"Hacking: 20%"<<endl;
				cout<<""<<endl;
				cout<<"Unscramble: stickightn"<<endl;
				cin>>password;
				cout<<""<<endl;
				if(password == "nightstick" || password == "Nightstick"){
					system("CLS");
					cout<<"Correct!"<<endl;
					cout<<"Hacking: 40%"<<endl;
					cout<<""<<endl;
					cout<<"Unscramble: nosrip"<<endl;
					cin>>password;
					cout<<""<<endl;
					if(password == "prison" || "Prison"){
						system("CLS");
						cout<<"Correct!"<<endl;
						cout<<"Hacking: 60%"<<endl;
						cout<<""<<endl;
						cout<<"Unscramble: oferifc_icpole"<<endl;
						cin>>password;
						cout<<""<<endl;
						if(password == "police_officer" || "Police_Officer"){
							system("CLS");
							cout<<"Correct!"<<endl;
							cout<<"Hacking: 80%"<<endl;
							cout<<""<<endl;
							cout<<"Unscramble: wla_forenerc"<<endl;
							cin>>password;
							cout<<""<<endl;
							if(password == "law_enforcer" || "Law_Enforcer"){
								system("CLS");
								cout<<"Correct!\n"<<endl;
								cout<<"Hacking: ";
								Sleep(1000);
								cout<<"**";
								Sleep(1000);
								cout<<"**";
								Sleep(1000);
								cout<<"**"<<endl;
								Sleep(1000);
								system("CLS");
								cout<<"Police Station has been HACKED. You now have access to all of the police files, computers and cells."<<endl;
								cout<<"Use your power wisely!"<<endl;
								cout<<"Restart the hack if you want to try again or choose different level."<<endl;
							}
							else{
								cout<<"Try again!"<<endl;
							}
							
						}
						else{
							cout<<"Try again!"<<endl;
						}
					}
					else{
						cout<<"Try again!"<<endl;
					}
				}
				else{
					cout<<"Try again!"<<endl;
				}
				
			}
			else{
				cout<<"Try again!"<<endl;
			}
		}
		else{
			cout<<"Try again!"<<endl;
		}
		
	}
	else if(a == 3){
		cout<<"You have chosen Military Base.\n"<<endl;
		cout<<"Please insert the password\n"<<endl;
    	cout<<"Password: "<<endl;
    	cout<<"Hint - The Leader Of The Army"<<endl;
    	cin>>password;
    	cout<<""<<endl;
    	if(password == "General" || password == "general"){
    		system("CLS");
    		cout<<"Welcome Piko!\n"<<endl;
    		cout<<"To hack into Military Base you must unscramble words. \n"<<endl;
    		cout<<"Hacking: 0%"<<endl;
    		cout<<"Unscramble: ierdlos"<<endl;
    		cin>>password;
    		cout<<""<<endl;
    		if(password == "soldier" || "Soldier"){
    			system("CLS");
    			cout<<"Correct!"<<endl;
    			cout<<"Hacking: 20%"<<endl;
    			cout<<"Unscramble: ifrle"<<endl;
    			cin>>password;
    			cout<<""<<endl;
    			if(password == "Rifle" || password == "rifle"){
    				system("CLS");
    				cout<<"Correct!"<<endl;
    				cout<<"Hacking: 40%\n"<<endl;
    				cout<<"Unscramble: adehraw"<<endl;
    				cin>>password;
    				cout<<""<<endl;
    				if(password == "warhead" || password == "Warhead"){
    					system("CLS");
    					cout<<"Correct!"<<endl;
    			        cout<<"Hacking: 60%\n"<<endl;
    			        cout<<"Unscramble: tej_hterfig"<<endl;
    			        cin>>password;
    			        cout<<""<<endl;
    			        if(password == "Fighte_Jet" || password == "Jet_Fighter" || password == "fighter_jet" || password == "jet_fighter"){
    			        	system("CLS");
    			        	cout<<"Correct!"<<endl;
    			        	cout<<"Hacking: 80%\n"<<endl;
    			        	cout<<"Unscramble: aattck_pterhelico"<<endl;
    			        	cin>>password;
    			        	cout<<""<<endl;
    			        	if(password == "Attack_Helicopter" || password == "attack_helicopter"){
    			        		system("CLS");
    			        		cout<<"Correct!\n"<<endl;
								cout<<"Hacking: "<<endl;
								Sleep(1000);
								cout<<"Firewall breached"<<endl;
								Sleep(1000);
								cout<<"Inserting virus:"<<endl;
								Sleep(2000);
								cout<<"  **  "<<endl;
								Sleep(3000);
								cout<<"**  ";
								Sleep(4000);
								cout<<"**"<<endl;
								Sleep(5000);
								cout<<"  **"<<endl;
								Sleep(1000);
								cout<<"HACKED"<<endl;
								cout<<"Military Base has been HACKED. You now have access to all of the military files, computers, armys and warheads"<<endl;
								cout<<"Use your power wisely"<<endl;
								cout<<"Restart the hack if you want to try again or choose different level"<<endl;
    			        		
							}
							else{
								cout<<"Please try again!"<<endl;
							}
						}
						else{
							cout<<"Please try again!"<<endl;
						}
    					
					}
					else{
						cout<<"Please try again!"<<endl;
					}
				}
				else{
					cout<<"Please try again!"<<endl;
				}
			}
			else{
				cout<<"Please try again!"<<endl;
			}
		}
		else{
			cout<<"Please try again!"<<endl;
		}
	}
    else{
    	cout<<"Please choose a valid level."<<endl;
    
	}
}
