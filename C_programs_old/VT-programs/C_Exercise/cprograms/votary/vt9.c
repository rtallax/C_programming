#define F abc 
#define B def 
#define FB(arg) #arg 
#define FB1(arg) FB(arg) 
int main() 
{ 
printf(FB(F B)); 
FB1(F B); 
}
