#include "scrabble.h"

//main method
int main(){
  char bag[25], ch; 
  printf("Enter bag of characters: ");
  scanf("%[^\n]",bag);
  
  double time_used=0.0;
  clock_t begin=clock();
  struct ArrayWrapper obj;

  //initializing frequency array
  int i;
  for(i=0;i<26;i++)
    obj.freq[i]=0;    
  
  //counting stars
  //counting number of characters in bag, ie count
  //noting frequency of each character occuring in bag
  for(i=0;i<strlen(bag);i++){
    ch=bag[i];
    if(ch=='*'){
      stars++;
      count++;
    }
    else if(isalpha(ch)){
      count++;
      if(ch>='a'&&ch<='z')
        obj.freq[ch-'a']++;
      else
        obj.freq[ch-'A']++;
    }
  }
  
  int check=0;
  //remove comment for competition, only 4-6 letters in bag (for milestone checking)
  if(count>=15)
    if(availDictO(obj))
      check=1;
  if((count>=14)&&(max_score<( ( ((count-1)*14) - (3*(count+1-14)) )*43) ))
    if(availDictN(obj))
      check=1;
  if((count>=13)&&(max_score<( ( ((count-1)*13) - (3*(count+1-13)) )*51) ))
    if(availDictM(obj))
      check=1;
  if((count>=12)&&(max_score<( ( ((count-1)*12) - (3*(count+1-12)) )*50) ))
    if(availDictL(obj))
      check=1;
  if((count>=11)&&(max_score<( ( ((count-1)*11) - (3*(count+1-11)) )*49) ))
    if(availDictK(obj))
      check=1;
  if((count>=10)&&(max_score<( ( ((count-1)*10) - (3*(count+1-10)) )*48) ))
    if(availDictJ(obj))
      check=1;   
  if((count>=9)&&(max_score<( ( ((count-1)*9) - (3*(count+1-9)) )*47) ))
    if(availDictI(obj))
      check=1;
  if((count>=8)&&(max_score<( ( ((count-1)*8) - (3*(count+1-8)) )*49) ))
    if(availDictH(obj))
      check=1;
  if((count>=7)&&(max_score<( ( ((count-1)*7) - (3*(count+1-7)) )*45) ))
    if(availDictG(obj))
      check=1;
   if((count>=6)&&(max_score<( ( ((count-1)*6) - (3*(count+1-6)) )*60) ))
    if(availDictF(obj))
      check=1;   
  if((count>=5)&&(max_score<( ( ((count-1)*5) - (3*(count+1-5)) )*33) ))
    if(availDictE(obj))
      check=1;
  if((count>=4)&&(max_score<( ( ((count-1)*4) - (3*(count+1-4)) )*29) ))
    if(availDictD(obj))
      check=1;
  if((count>=3)&&(max_score<( ( ((count-1)*3) - (3*(count+1-3)) )*21) ))
    if(availDictC(obj))
      check=1;
  if((count>=2)&&(max_score<( ( ((count-1)*2) - (3*(count+1-2)) )*11) ))
    if(availDictB(obj))
      check=1;   
  if(!check) 
    printf("\nwords in dictionary can't be constructed by bag of letters provided");
 
  clock_t end=clock();
  printf("\n Time taken: %f seconds",(double)(end-begin)/CLOCKS_PER_SEC);

  return 0;
}
