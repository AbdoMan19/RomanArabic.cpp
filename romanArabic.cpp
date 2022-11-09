#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    string input;
    cout<<"enter a roman number: ";
    cin>>input;
    //make the input of user in all capital
    transform(input.begin(),input.end(),input.begin(), :: toupper);
    int sum=0;
    int val1,val2;
    vector<int>arabic_numral;
    arabic_numral={1,5,10,50,100,500,1000};
    //basic letter that construct roman numbers
    string roman_numral={'I','V','X','l','C','D','M'};
    for(int i=0;i<input.length();i++){
        //convert from roman to arabic
        val1=arabic_numral[roman_numral.find(input[i])];
        if((i+1)<input.length()){
            //convert from roman to arabic
            val2=arabic_numral[roman_numral.find(input[i+1])];
            if (val1>=val2){
                sum+=val1;
            } else{
                sum=sum+val2-val1;
                //ends the loop if the pointer point to the letter that before the last
                i++;
            }
        //if there is one letter
        }else{
        sum += val1;
        }
    }
    cout<<input<<" in arabic is qual "<<sum<<endl;
    cout<<input.length();



    return 0;
}