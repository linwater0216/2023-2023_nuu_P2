/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230523

8.12 (Simulation: The Tortoise and the Hare) In this exercise, you’ll re-create the classic race of
the tortoise and the hare. You’ll use random number generation to develop a simulation of this
memorable event.
Our contenders begin the race at “square 1” of 70 squares. Each square represents a possible
position along the race course. The finish line is at square 70. The first contender to reach or pass
square 70 is rewarded with a pail of fresh carrots and lettuce. The course weaves its way up the side
of a slippery mountain, so occasionally the contenders lose ground.
There is a clock that ticks once per second. With each tick of the clock, your program should
use function moveTortoise and moveHare to adjust the position of the animals according to the
rules in Fig. 8.18. These functions should use pointer-based pass-by-reference to modify the position of the tortoise and the hare. 
Use variables to keep track of the positions of the animals (i.e., position numbers are 1–70).
Start each animal at position 1 (i.e., the “starting gate”). If an animal slips left before square 1,
move the animal back to square 1.
Generate the percentages in Fig. 8.18 by producing a random integer i in the range
1 ? i ? 50. For the tortoise, perform a “fast plod” when 1 ? i ? 25, a “slip” when 26 ? i ? 33
or a “slow plod” when 34 ? i ? 50. Use a similar technique to move the hare.
Begin the race by displaying
BANG !!!!!
AND THEY'RE OFF !!!!!
For each tick of the clock (i.e., each iteration of a loop), display a 70-position line showing the
letter T in the tortoise’s position and the letter H in the hare’s position. Occasionally, the contenders
land on the same square. In this case, the tortoise bites the hare and your program should display
OUCH!!!beginning at that position. All positions other than the T, the H or the OUCH!!! (in case of a tie)
should be blank.
After displaying each line, test whether either animal has reached or passed square 70. If so,
display the winner and terminate the simulation. If the tortoise wins, display TORTOISE WINS!!!
YAY!!! If the hare wins, display Hare wins. Yuck. If both animals win on the same clock tick, you
may want to favor the tortoise (the “underdog”), or you may want to display It's a tie. If neither
animal wins, perform the loop again to simulate the next tick of the clock. 

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void moveTortoise(int* tortoise) {
    int move=rand()%100+1;
    
    if (move>0&&move<51) {
        *tortoise+=3;//快
    } else if (move>50&&move<67) {
        *tortoise-=6;//退 
        if (*tortoise<1) {
            *tortoise=1; //避免退過頭
        }
    } else if(move>66&&move<101){
        *tortoise+=1;//慢 
    }
}

void moveHare(int* hare) {
    int move=rand()%100+1;
    
    if(move>0&&move<39) {
    } else if(move>38&&move<55) {
        *hare+=11; //快 
    } else if(move>54&&move<71) {
        *hare-=9; //退 
        if (*hare<1) {
            *hare=1; //避免退過頭
        }
    } else if (move>70&&move<101) {
        *hare-=2; //退 
        if(*hare<1) {
            *hare=1; //避免退過頭 
        }
    }
}

void printRace(int tortoise, int hare) {
	for(int i=1;i<71;i++){
		cout<<"-";
	}
	cout<<endl;
    for(int i=1;i<71;i++){
        if(i==tortoise&&i==hare) {
            cout<<"OUCH!!!";
        } 
		else if(i==tortoise) {
            cout<<"T";
        } 
		else if(i==hare) {
            cout<<"H";
        } 
		else{
            cout<<" ";
        }
    }
    cout<<endl;
}


int main() {
    srand(time(0)); //隨機數
    int tortoise=1; //預設位子
    int hare=1; //預設位子
    int z=10;
    while(z>0){
    	z--;
    	cout<<"第"<<10-z<<"次"<<endl; 
    	cout<<"BANG !!!!!"<<endl;
    	cout<<"AND THEY'RE OFF !!!!!"<<endl;
    	tortoise=1;
    	hare=1;
    	
	    while(1){
	        moveTortoise(&tortoise);
	        moveHare(&hare);
	        printRace(tortoise, hare);
	        
	        if (tortoise>69&&hare>69){
	            cout << "平手"<< endl;
	            break;
	        }
			else if(tortoise>69){
	            cout << "烏龜贏" << endl;
	            break;
	        }
			else if(hare>69){
	            cout << "兔子贏" << endl;
	            break;
	        }
	        cout<<endl;
	    }
	}
    	
    return 0;
}


