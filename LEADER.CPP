
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],b;
	int j,i,n;

	cout<<"How many elements you want in ARRAY:-\n";
	cin>>n;
	cout<<"Enter the elements of ARRAY:-\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"THE ARRAY YOU ENTER IS: ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
       /*	b=a[n-1];
	cout<<"\nLeaders in the given array are:-";
	for(i=n-1;i>0;i--)
	{
		if(b<=a[i])
		{
			b=a[i];
			cout<<" "<<b;

		}


	}*/
	cout<<"\nTHE LEADERS IN THE ARRAYA ARE: ";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<=a[j])
			break;
		}
		if(j==n)
		cout<<" "<<a[i];
	}
	getch();
}
