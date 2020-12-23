#include <stdio.h>
#include <ctype.h>
#include <string.h>



int isAnagram(char* word1,char* word2)
{
    int answer =0;
    int i = 0;
    int temp = 0;
    char text1[20];
    char text2[20];
    int chart1[128]={0};
    int chart2[128]={0};
    
    //copy both words
    strncpy(text1,word1,20);
    strncpy(text2,word2,20);
    
    //Capitalize all letters of both words
    while(text1[i])
    {
        text1[i]=toupper(text1[i]);
        i++;
    }
    
    i = 0;
    while(text2[i])
    {
        text2[i]=toupper(text2[i]);
        i++;

    }
   
    i = 0;
    //convert to ascii
    while(i<20)
    {
        temp = (int) text1[i]; 
        chart1[temp]++;
        i++;
    }
    i = 0;
    temp = 0;
    
    while(i<20)
    {
        temp = (int) text2[i];
        chart2[temp]++;
        i++;
    }
    i = 0;
    temp = 0;

    
    //compare charts and get answer
    while(i<128)
    {
        if(chart1[i]!=chart2[i])//if charts dont match up its not an anagram
        {
            answer = 1;
        }
        i++;
    }



    return answer;
}

int main (void)
{
    int check = 0;

    int k =0;

    char word1[20]={"Listen"};
    char word2[20]= {"Silent"}; 
    char word3[20]= {"Triangle"};
    char word4[20]= {"Integral"};
    char word5[20]= {"Sandwhich"};
    char word6[20]= {"raZor!(c"};
    char word7[20]= {"1234"};
    char word8[20]= {"4321"};
    char word9[20]={""};
    char word10[20]={""};

    

   check =isAnagram(word1,word2);
   if(check==0)
   {
       printf("%s is an anagram of %s\n",word1,word2);
   }
   else
   {
       printf("%s is not an anagram of %s\n",word1,word2);
   }
   check = isAnagram(word3, word4);
   if(check==0)
   {
       printf("%s is an anagram of %s\n",word3,word4);
   }
   else
   {
       printf("%s is not an anagram of %s\n",word3,word4);
   }
   check = isAnagram(word5, word6);
   if(check==0)
   {
       printf("%s is an anagram of %s\n",word5,word6);
   }
   else
   {
       printf("%s is not an anagram of %s\n",word5,word6);
   }
   check = isAnagram(word7, word8);
   if(check==0)
   {
       printf("%s is an anagram of %s\n",word7,word8);
   }
   else
   {
       printf("%s is not an anagram of %s\n",word7,word8);
   }
   



    return 0;
}