#include<iostream>
#include<cstring>

using namespace std;

bool czy_palindrom(char tab[])
{

	int p=0, k=strlen(tab)-1;

	while(p<k)
	{
		if(tab[p]!=tab[k])
			return false;

		++p;
		--k;
	}

	return true;
}

int main()
{
	char tab[100];
	cout<<"Podaj wyraz: ";
	cin>>tab;

	if(czy_palindrom(tab)==true)
		cout<<"Wyraz "<<tab<<" jest palindromem"<<endl;
	else
		cout<<"Wyraz "<<tab<<" nie jest palindromem"<<endl;

	system("pause");
	return 0;
}
