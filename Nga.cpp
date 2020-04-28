#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ofstream file1("mang.txt");
    int a[1000];
    int a1[500];
    int a2[500];
    int n,m,p;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        file1<<a[i]<<" ";
    }
    int t = 0, d = 0;
    cout<<"\nPhan tu chan la : ";
    for(int i = 0;i < n;i++)
    {
    	if(a[i] % 2 == 0)
    	{
    		a1[m++] = a[i];
    		cout<<a[i]<<" ";
    		t++;
		}
	}
	cout<<"\nPhan tu le la : ";
	for(int i = 0;i < n;i++)
	{
		if(a[i] % 2 != 0)
		{
			a2[p++] = a[i];
			cout<<a[i]<<" ";
			d++;
		}
	}
    if (t > d)
    {
    	ofstream file2("S1.txt");
    	for (int i = 0; i < m; i++) 
		{
           file2<<a1[i]<<" ";
        }
        file2.close();
	} 
	else
    {
    	ofstream file3("S2.txt");
    	for (int j = 1; j < p; j++) 
		{
           file3<<a2[j]<<" ";
        }
        file3.close();
	}
	if(t > d)
	{
	ifstream file4;
    file4.open("S1.txt");
    cout<<"\nFile sau khi in : ";
    for(int i = 0;i < m;i++)
    {
    	cout<<a1[i]<<" ";
	}
    file4.close();
	}
	else
	{
	ifstream file5;
    file5.open("S2.txt");
    cout<<"\nFile sau khi in : ";
    for(int j = 1;j < p;j++)
    {
    	cout<<a2[j]<<" ";
	}
    file5.close();
	}
	file1.close();
	return 0;
}
