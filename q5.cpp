//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                     			          Assignment # 1 
//                               		  Umer Sadan
//                               		  24i-0591
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;
int main()
{
    cout << "Welcome to the Ultimate Logic Maze! \n";
    cout << "You are at the entrance of the dark maze. Where you want to go, left(l) / right(r) ? \n";
    
    // First room
    char first_room;
    char key;
    char route;
    char map = 0b11111111;
    char route_2;
    char map_2 ;
    char stamp = 0b11111111;
    char route_3;
    char key_3;
    char activate ;
    char route_4;
    char key_4;
    char activate_2 ;
    char route_5;
    char key_5;
    char activate_3 ;
    char route_6;
    char key_6;
    char activate_4;
    char route_7;
    char key_7;
    char activate_5;
    char route_8;
  char key_8;
  char activate_6;
  char route_9;
  char key_9;
  char activate_9;
  char route_10;
char key_10;
char activate_10;

  
    cin >> first_room;
    if (first_room == 'l'){
        cout << "You find a golden key on the ground. Pick it up? (yes[y]/no[n]) \n";
        cin >> key;
        if (key == 'y'){
            //key = key | 1;
            key = 'y';
            key -= 11;    // answer is n
            cout << "There are 2 routes here, (n) for narrow balcony and (w) for wide balcony. \n";
            cin >> route;
            if (route == 'n') {
                cout << "There you go! Here is the map. \n";
                map = map | 1;
                if ((key & map) == route) {
                    cout << "You have reached the Hidden room. \n\n\n";
                    

    // 2nd Room
    cout << "Now! There are 2 another routes (cave(c) and well(w) ), where ? \n";
    cin >> route_2;
    if (route_2 == 'w') {
        cout << "You have got the map for a treasure. TWO possibilities 1) tree(t) 2) Top of Mountain(m).\n";
        cin >> map_2;
        if (map_2 == 't'){
            cout << "You have got the stamp. \n ";
            map_2 = 'w';
            if ((stamp & map_2) == route_2) {
                cout << "Wow, nice you have got the treasure. \n\n\n";
    
                // 3rd room            
cout << "NOw you have imagined that there is something in your Gold. These are powers, now activate(y) / no(n). \n";
cin >> activate;
if (activate == 'y'){
    cout << "You got 3 codes written on the Treasure Box. Find the correct one.? (1st[f]/2nd[n]/3rd[r]) \n";
    cin >> key_3;
    if (key_3 == 'n'){
        key_3 = 'n';
        key_3 -= 8;    // answer is f
        cout << "There are 2 powers here, one is incorrect: (f) for fly and (s) for see in dark. \n";
        cin >> route_3;
        if (route_3 == 'f') {
            activate= 0b11111111;
            if ((key_3 & activate) == route_3) {
                cout << "There you go! You have got the Power. \n\n\n";
                cout << "NOw you have to find the remote for controls. There are 2 boxes of treasure and one has the controls, number # 1(y) / no # 2(n). \n";
    
                // 4th room
    cin >> activate_2;
    if (activate_2 == 'y'){
        cout << "Select the correct colour. Find the correct one.? (Flame[f]/Nickel[n]) \n";
        cin >> key_4;
        if (key_4 == 'n'){
            key_4 = 'n';
            key_4 -= 8;    // answer is f
            cout << "Use it or not: (f) for YES and (s) for NO. \n";
            cin >> route_4;
            if (route_4 == 'f') {
                activate_2 = 0b11111111;
                if ((key_4 & activate_2) == route_4) {
                    cout << "You have got the controls of the Power. \n\n\n";
                     
    
        // 5th case
    cout << "NOw you have to find the controls. Move in which direction , UP(y) / Down(n). \n";
    cin >> activate_3;
    if (activate_3 == 'y'){
        cout << "You are moving Down. Find the correct one.? (Fall[n]/Remain[f]) \n";
        cin >> key_5;
        if (key_5 == 'n'){
            key_5 = 'n';
            key_5 -= 8;    // answer is f
            cout << "You got it, now land: (f) for YES and (s) for NO. \n";
            cin >> route_5;
            if (route_5 == 'f') {
                activate_3 = 0b11111111;
                if ((key_5 & activate_3) == route_5) {
                    cout << "You are on the ground again. \n\n\n";
                    

        // 6th case
    cout << "A strange doorway appears in front of you. Will you enter? YES(y) / NO(n). \n";
    cin >> activate_4;
    if (activate_4 == 'y') {
        cout << "You step inside. The air is thick with whispers (Listen[n] / Ignore[f]) \n";
        cin >> key_6;
        if (key_6 == 'n') {
            key_6 = 'n';
            key_6 -= 8;
            cout << "A mirror stands before you. Your reflection is not quite right  (f) yes, (s) no. \n";
            cin >> route_6;
            if (route_6 == 'f') {
                activate_4 = 0b11111111;
                if ((key_6 & activate_4) == route_6) {
                    cout << "The mirror shatters. You are back outside  but something feels different. \n\n\n";
                    

        // case # 7
    cout << "A lantern flickers before you. Light it? YES(y) / NO(n). \n";
    cin >> activate_5;
    if (activate_5 == 'y') {
        cout << "The lantern's glow twists the shadows (Watch closely[n] / Look away[f]) \n";
        cin >> key_7;
        if (key_7 == 'n') {
            key_7 = 'n';
            key_7 -= 8;
            cout << "A shadow steps out, mirroring your every move. (f) Trust it, (s) Run. \n";
            cin >> route_7;
            if (route_7 == 'f') {
                activate_5 = 0b11111111;
                if ((key_7 & activate_5) == route_7) {
                    cout << "The shadow nods and vanishes. You find yourself on a new path, unharmed. \n\n\n";
                    
  
  
        // case # 8
      cout << "Water starts rising beneath your feet. Swim forward? YES(y) / NO(n). \n";
      cin >> activate_6;
  
      if (activate_6 == 'y') {
          cout << "The current is strong! Choose a path: (n) Narrow tunnel / (f) Floating platform \n";
          cin >> key_8;
  
          if (key_8 == 'n') {
              key_8 = 'n';
              key_8 -= 8;
              cout << "The tunnel narrows, and you see two levers. (f) Pull left lever / (s) Pull right lever. \n";
              cin >> route_8;
  
              if (route_8 == 'f') {
                  activate_6 = 0b11111111;
                  if ((key_8 & activate_6) == route_8) {
                      cout << "A hidden mechanism activates, draining the water. You escape safely! \n\n";
                      
 
                    // case # 9
    cout << "A glowing portal appears before you. Enter the Time Rift? YES(y) / NO(n). \n";
    cin >> activate_9;

    if (activate_9 == 'y') {
        cout << "You are now floating between different timelines! Choose your next step: (n) Step into the past / (f) Jump to the future \n";
        cin >> key_9;

        if (key_9 == 'n') {
            key_9 = 'n';
            key_9 -= 8;
            cout << "You arrive in an ancient city, but something is wrong. (f) Search for clues / (s) Try to return. \n";
            cin >> route_9;

            if (route_9 == 'f') {
                activate_9 = 0b11111111;
                if ((key_9 & activate_9) == route_9) {
                    cout << "You uncover a hidden artifact that stabilizes the timeline. You return safely! \n\n";
                    
 
        // Case # 10
    cout << " A portal appears. Enter the AI core? YES(y) / NO(n). \n";
    cin >> activate_10;

    if (activate_10 == 'y') {
        cout << "The simulation glitches. The world around you is unstable! (n) Attempt to stabilize / (f) Override the system \n";
        cin >> key_10;

        if (key_10 == 'n') {
            key_10 = 'n';
            key_10 -= 8;
            cout << "A rogue AI guards the exit. (f) Convince it to let you go / (s) Attempt a hard reset. \n";
            cin >> route_10;

            if (route_10 == 'f') {
                activate_10 = 0b11111111;
                if ((key_10 & activate_10) == route_10) {
                    cout << "The AI grants you access to the real world. You escape the simulation! \n\n";
                    cout << "YOU HAVE PLAYED VERY WELL! PASSED ALL THE 10 LEVELS. YOU ARE GENIUS. " " YOU WIN " " \n ";
                } else {
                    cout << "Mission failed..\n";
                }
            } else {    
                cout << "Mission failed.  simulation. \n";
            }
        } else {    
            cout << "Mission failed. \n";
        }
    } else {
        cout << "Mission failed. \n";
    }

                } else {
                    cout << "Mission failed.  and you vanish. \n";
                }
            } else {    
                cout << "Mission failed. trapping you in an endless loop. \n";
            }
        } else {    
            cout << "Mission failed.  you are erased from history. \n";
        }
    } else {
        cout << "Mission failed. The timeline collapses around you. \n";
    }

                    } else {
                      cout << "Mission failed. The wrong lever floods the tunnel completely. \n";
                  }
              } else {    
                  cout << "Mission failed.  \n";
              }
          } else {    
              cout << "Mission failed.  \n";
          }
      } else {
          cout << "Mission failed. The water engulfs you. \n";
      }
  
                } 
                else 
                    cout << "Mission failed. \n";
            }
            else    
                cout << "Mission failed.  \n";
        }
        else    
            cout << "Mission failed.  \n";
    }
    else
        cout << "Mission failed.  \n";
                } 
                else 
                    cout << "Mission failed. You no longer exist as you once did. \n";
            }
            else    
                cout << "Mission failed. You refuse to face the truth. \n";
        }
        else    
            cout << "Mission failed. The whispers consume you. \n";
    }
    else
        cout << "Mission failed.' \n";
                } 
                else 
                    cout << "You have failed the Game. Game Over! \n";
            }
            else    
                cout << "You have failed the Game. Game Over! \n";
        }
        else    
            cout << "You have failed the Game. Game Over! \n";
    }
    else
        cout << "You have failed the Game. Game Over! \n";
                } 
                else 
                    cout << "You have failed the Game. Game Over! \n";
            }
            else    
                cout << "You have failed the Game. Game Over! \n";
        }
        else    
            cout << "You have failed the Game. Game Over! \n";
    }
    else
        cout << "You have failed the Game. Game Over! \n";

                            } 
                            else 
                                cout << "You have failed the Game. Game Over! \n";
                        }
                        else    
                            cout << "You have failed the Game. Game Over! \n";
                    }
                    else    
                        cout << "You have failed the Game. Game Over! \n";
                }
                else
                    cout << "You have failed the Game. Game Over! \n";
            
            }
            else
                cout << "You have failed the Game. Game Over! \n";
        }
        else
            cout << "You have failed the Game. Game Over! \n";
    }
    else
        cout << "You have failed the Game. Game Over! \n";
                } 
                else 
                    cout << "You have failed the Game. Game Over! \n";
            }
            else    
                cout << "You have failed the Game. Game Over! \n";
        }
        else    
            cout << "You have failed the Game. Game Over! \n";
    }
    else
        cout << "You have failed the Game. Game Over! \n";



 


  
  
  
 
 

}
