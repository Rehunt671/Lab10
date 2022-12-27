#include<iostream>
#include<iomanip>
using namespace std;
double pbalance,i,p;//input
double in,total,balance;
int yrcnt = 1;
int main(){
// 1.
  cout << "Enter initial loan: ";
  cin >> pbalance;
  cout << "Enter interest rate per year (%): ";
  cin >> i;
  cout << "Enter amount you can pay per year: ";
  cin >> p;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
  balance = pbalance;
  while(balance != 0 ){
    in = pbalance*i/100;//คำนวณดอกเบี้ยในปีนั้นๆ
    total = pbalance+in;//รวมทั้งหมดในปีนั้นๆเป็นเงินเท่าไร
    if(total <= p) p = total;//ถ้าเงินทั้งหมดที่ต้องจ่ายน้อยกว่าที่เราจ่ายได้ เราก็จ่ายเท่า total พอ
    balance = total-p;//เงินที่เราต้องจ่ายอีกในปีถัดไปคิดเป็น เงินทั้งหมดที่เราต้องจ่ายอีก - เงินที่เราจ่ายได้ในปีนั้น
    cout << fixed << setprecision(2); 
	  cout << setw(13) << left << yrcnt; 
	  cout << setw(13) << left << pbalance;
	  cout << setw(13) << left << in;
	  cout << setw(13) << left << total;
	  cout << setw(13) << left << p;
	  cout << setw(13) << left << balance;
	  cout << "\n";	
    pbalance = balance;//ก่อนจบรอบนั้นๆ เงินที่เราต้องจ่ายอีก จะเป็นก่อนจ่ายในรอบถัดไป
    yrcnt++;//
  }
  return 0;
}