//
//  main.cpp
//  VowelsConsonants
//
//  Created by Bo Ying Liu on 9/22/19.
//  Copyright © 2019 Bo Ying Liu. All rights reserved.
//
//create headers
#include <iostream>
#include <cctype>
#include <cstring>


using namespace std;


int countVowels(char *);// function prototype
int countConson(char *);// function prototype

int main()
{
    const int SIZE = 21; //Array size
    char userString[SIZE];//to hold a string
    char letter;//the user choice in menu
    
    //get a string from the user
    
    
    cout<<"enter a string (up to "<<SIZE-1<< " characters):  "<<endl;//ask user to put character 1 less for the last null teminator
    cin.getline(userString,SIZE);//create user input c-string
    
    
    do//do loop while user not select E for exit the program
    {
        //five option menu
        cout<<" A) Count the number of vowels in the string"<<endl;
        cout<<" B) Count the number of consonants in the string"<<endl;
        cout<<" C) Count both the vowels and consonants in the string"<<endl;
        cout<<" D) Enter another string"<<endl;
        cout<<" E) Exit the program"<<endl;
        cin>>letter;//ask user to choose menu
        //if user choose option d, ask user to re type the string again
        if(toupper(letter)=='D')
        {
            cout<<"enter a string (up to "<<SIZE-1<< " characters):  "<<endl;
            cin>>userString;
            
            
        }
        //if user choice is not E exit program
        if(toupper(letter)!='E')
        {
            switch(tolower(letter))
           {
               //option a for output vowels
               case 'a':
                   cout<<"the number of vowels in the string is "<<countVowels(userString)<<endl;
                   break;
                //option b for output consonants
               case 'b':
                   cout<<"the number of consonants in the string is "<<countConson(userString)<<endl;
                   break;
                //option c for ouput both
               case 'c':
                   cout<<"both the vowels and consonants in the string is "<<countVowels(userString)+countConson(userString)<<endl;
                   break;

             }
        }
        
        
    }while(toupper(letter)!='E');
    
}
    //function for count vowels
    int countVowels(char *strPtr)
    {
        int times1 = 0; //initial count of vowels as 0
        //step through the string counting occurrences of ch.
        while(*strPtr !='\0')
        {   //pointer point to the string to check if the character is any of the vowels in either upper case or lower case
            if (*strPtr=='a'||*strPtr=='e'||*strPtr=='i'||*strPtr=='o'||*strPtr=='u'||*strPtr=='A'||*strPtr=='E'||*strPtr=='I'||*strPtr=='O'||*strPtr=='U')
                times1++;//count for vowels
            strPtr++;//pointer move to the next character
        }
        return times1;//return the function with vowels count
        
    }
    
    //function for count consonants
    int countConson(char *strPtr)
    {
        int times2 = 0; //initial count of consonants as 0
        //step through the string counting occurrences of ch.
        while(*strPtr !='\0')
        {
            //pointer point to the string to check the character is not any of the vowels in neither upper case nor lower case
            if (*strPtr!='a'&& *strPtr!='e'&& *strPtr!='i' && *strPtr!='o'&& *strPtr!='u'&& *strPtr!='A'&& *strPtr!='E'&&*strPtr!='I'&& *strPtr!='O'&& *strPtr!='U')
                times2++;//count for consonants
            strPtr++;//pointer move to the next character
        }
        return times2;//return the function with consonants count
        
        
    }
    
    
    
    

