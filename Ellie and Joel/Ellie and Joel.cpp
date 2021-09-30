#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

//future days - if I ever were to lose you I'd surely lose myself
//true faith - I used to think that the day would never come
//through the valley - she whistles - cause i walk thru the valley of the shadow of death
//take on me - I'll be gone in a day or two. Take on me
//wayfaring stranger (both) - I'm going there to see my father I'm going there nowhere to roam. /I'll soon be free from every trial

class Joel {
public:
    virtual void Whistle()=0;
    virtual void Sing()=0;
    virtual void Guitar()=0;
};

class Ellie : public Joel {
public:
    void Whistle() {
        cout << "and whistle.";
    };
    void Sing() {
        cout << " sings ";
    };
    void Guitar() {
        cout << " Ellie plays the guitar,";
    };
    void SoftSinging() {
        cout << " and sings beautifully.";
    };
};

int main()
{
    int song;
    Joel* jl = new Ellie(); //Pointer points to Joel class because it's virtual so I can get the right function and instatiating new Ellie() since she inherits from joel's class

    Ellie e;
    string el = " Ellie sings: ";
    string joel = " Joel sings: ";

    cout << " THE LAST OF US SONGS" <<endl;

    while(true){
    cout << "\n 1-Future days";
    cout << "\n 2-True faith";
    cout << "\n 3-Through the valley";
    cout << "\n 4-Take on me";
    cout << "\n 5-Wayfaring stranger";
    cout << "\n 6-Exit";
    cout << "\n Choose an option: \n ";
    cin >> song;
    system("cls");
    cout << "\n";
        switch (song) {
        case 1:
            cout << joel<< "\n " "\"if I ever were to lose you I'd surely lose myself.\"\n";
            break;
        case 2:
            jl->Guitar();
            e.SoftSinging();
            cout << "\n " "\"I used to think that the day would never come.\"\n";
            break;
        case 3:  
            jl->Guitar();
            jl->Sing();
            jl->Whistle();
            cout << "\n " "\"cause I walk thru the valley of the shadow of death.\"\n";
            break;
        case 4:
            jl->Guitar();
            e.SoftSinging();
            cout << "\n " "\"I'll be gone in a day or two. Take on me.\"\n";
            break;
        case 5:
            cout << el << "I'm going there to see my father! - I'm going there nowhere to roam.\n"; 
            cout<< joel<< "I'll soon be free from every trial.\n";
            break;
        default:
            cout << "\n Valid option!";
            exit(0);
        }
    } 
    system("pause");  
}
