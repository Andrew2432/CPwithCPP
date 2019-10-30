//	bits/stdc++.h includes ALL STL of CPP
#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	It toggles on or off the synchronization of all the C++ standard streams 
	with their corresponding standard C streams if 
	it is called before the program performs its 
	first input or output operation. Adding ios_base::sync_with_stdio (false); 
	(which is true by default) before any I/O operation avoids this synchronization. 
	It is a static member of function of std::ios_base.
	*/
    ios_base::sync_with_stdio(false);
    /*
	tie() is a method which simply guarantees 
	the flushing of std::cout before std::cin accepts an input. 
	This is useful for interactive console programs 
	which require the console to be updated constantly 
	but also slows down the program for large I/O. 
	The NULL part just returns a NULL pointer.
	*/
    cin.tie(NULL);
    return 0;
}
