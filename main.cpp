#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int n, g, mx, c=0, a=0;
    
    cout << "   _____                       _   _                                  _" << endl;
    
    cout << "  / ____|                     | | | |                                | |" << endl;
    
    cout << " | |  __ _   _  ___  ___ ___  | |_| |__   ___   _ __  _   _ _ __ ___ | |" << endl;
    
    cout << " | | |_ | | | |/ _ \\/ __/ __| | __| '_ \\ / _ \\ | '_ \\| | | | '_ ` _ \\| '_ \\ / _ \\ '__|" << endl;
    
    cout << " | |__| | |_| |  __/\\__ \\__ \\ | |_| | | |  __/ | | | | |_| | | | | | | |_) |  __/ |" << endl;
    
    cout << "  \\_____|\\__,_|\\___||___/___/  \\__|_| |_|\\___| |_| |_|\\__,_|_| |_| |_|_.__/ \\___|_|" << endl;
    

    cout << endl;
    cout << endl;
    cout << "enter your max number to guess it " << endl;
    cin >> mx;

    n = rand() % mx;
    
    cout << "You have " << "\"" << mx/2 << "\"" << " guesses" << endl;

    for (int i=1; i<=mx/2; i++){
    
            cout << "Guess the number ??? : " ;
            cin >> g;
            c++;
            cout << endl;

            if ( g < n ){
                cout << "Bigger :(" << endl; 
            }
            if ( g > n ){
                cout << "Smaller :(" << endl;
            }
            if ( g == n ){
                cout << "┬ ┬┌─┐┬ ┬  ┌─┐┬ ┬┌─┐┌─┐┌─┐  ┬┌┬┐ ┬" << endl;
                cout << "└┬┘│ ││ │  │ ┬│ │├┤ └─┐└─┐  │ │  │" << endl;
                cout << " ┴ └─┘└─┘  └─┘└─┘└─┘└─┘└─┘  ┴ ┴  o" << endl;
                a=1;
                break;
                
            }
	} 

	if (a==0){
		cout << endl;
		cout << "┌─┐┌─┐┌┬┐┌─┐  ┌─┐┬  ┬┌─┐┬─┐" << endl;
		cout << "│ ┬├─┤│││├┤   │ │└┐┌┘├┤ ├┬┘" << endl;
		cout << "└─┘┴ ┴┴ ┴└─┘  └─┘ └┘ └─┘┴└─" << endl;
		
		cout << endl;
	
		cout << "The guesses are over" << endl;
	}
	else {
		cout << endl;
		cout << "you guess it in " << "\"" << c << "\"" << " times" << endl; 
	}
    return 0;
}
