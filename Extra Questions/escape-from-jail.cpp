/*A thief wants to escape from the jail so he learnt to jump over the walls, the theif can jump over a certain height and slips 
also to some height bcz of the slippery walls. To escape form the jail he have to cross all the walls. So you have to find that
in how many jumps the theif can escape from the jail. you have four inputs as input1 for the height that thief can jump, input2
the height a theif slips down, input3 fro the number of walls and input4 for the array of the walls defining the height of walls

for example: input1 = 10
             input2 = 1
             input3 = 1
             input4[1] = {10}
             output will be:  1 as by jumping 10 meters the theif can clear the wall of height 10 meters
example2:    input1 = 5
             input2 = 1
             input3  =2
             input4[2] = {9,10}
             output will be 5 because in first attempt he jumps over 5 meters but the cannot cross the wall of 9 meters height
             so he'll slip down to 1 meter then again jumping now he can cross the wall because at first jump his position was
             5-1 = 4 meters and then again jumping from there for 5 meters the total is 4+5 = 9 metrs which is also the hieght
             of the wall so he'll cross the wall, now for second wall of height 10 meters he have to jump three times because
             in two attempts he can jump upto 9 meters and then slip for 1 meter which makes 8 meters lesser than 10 metre wall
             so in the third jump he will cross the 10 meter wall as 8+5 = 13>10 and escapes from the jail*/

#include<iostream>
using namespace std;

int main(){
    int input1, input2, input3,input4[100];
    cout<<"enter the height that a theif can jump: ";
    cin>>input1;
    cout<<"enter the hieght that a theift slips down: ";
    cin>>input2;
    cout<<"enter the nuber of walls: ";
    cin>>input3;
    cout<<"enter the hights of every wall: ";
    for(int i=0;i<input3;i++){
        cin>>input4[i];
    }

    int count = 0;
    for(int i=0;i<input3;i++){
        int sum = 0;
        while(sum<input4[i]){
            sum += input1;
            count++;
            if(sum<input4[i]){
                sum -= input2;
            }
        }
    }
    cout<<"the number of attrmpts to runaway from the jail is: "<<count;
    return 0;
}