#include "scrabble.h"


#define SIZE 26

//max_score -> maximum score among words found
//score -> score of currently found word
int max_score=INT_MIN, score;

//count -> number of characters in bag
//freq[i] -> number of times (A+i) character occurs
//stars -> number of stars in bag
int count=0, stars=0;


//to check if dictWord can be formed from bag
int checkInBag(struct ArrayWrapper temp, char word[], int l){
  int* ptr=temp.freq;
  int flag=1;
  //score for each character in order
  int weights[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
  int s=count, star=stars, weight=0;  
  char ch;
  for(int i=0;i<l;i++){
    ch=word[i]; 
    if(ptr[ch-'A']!=0){ //frequency left
      weight+=weights[ch-'A'];
      ptr[ch-'A']--;
    }
    else{ //frequency of character is over
      if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        if(star!=0)
          star--;
        else{
          flag=0;
          break;
        }
      }
      else{ //consonant, bad luck
        flag=0;
        break;
      }
    }
  }
  
  if(flag==0){ //not possible to form word from bag
    return 0;
  }
  else{ //score needed to be evaluated
    int good, bad;
    good=(s-1)*l;
    bad=3*(s+1-l);
    if(bad<1)
      bad=1;
    //score = weight * mult
    //mult = good - bad
    score = weight*(good-bad);
    if(score>max_score)
      max_score=score;
  }
   
}


//searching in file having words of length 15
int availDictO(struct ArrayWrapper temp){
  FILE* ptr15=fopen("dict/o.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr15,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,15)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}

//searching in file having words of length 14
int availDictN(struct ArrayWrapper temp){
  FILE* ptr14=fopen("dict/n.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr14,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,14)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 13
int availDictM(struct ArrayWrapper temp){
  FILE* ptr13=fopen("dict/m.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr13,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,13)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 12
int availDictL(struct ArrayWrapper temp){
  FILE* ptr12=fopen("dict/l.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr12,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,12)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 11
int availDictK(struct ArrayWrapper temp){
  FILE* ptr11=fopen("dict/k.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr11,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,11)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 10
int availDictJ(struct ArrayWrapper temp){
  FILE* ptr10=fopen("dict/j.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr10,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,10)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 9
int availDictI(struct ArrayWrapper temp){
  FILE* ptr9=fopen("dict/i.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr9,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,9)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 8
int availDictH(struct ArrayWrapper temp){
  FILE* ptr8=fopen("dict/h.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr8,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,8)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 7
int availDictG(struct ArrayWrapper temp){
  FILE* ptr7=fopen("dict/g.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr7,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,7)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 6
int availDictF(struct ArrayWrapper temp){
  FILE* ptr6=fopen("dict/f.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr6,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,6)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 5
int availDictE(struct ArrayWrapper temp){
  FILE* ptr5=fopen("dict/e.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr5,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,5)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }   
  }
  return k; 
}


//searching in file having words of length 4
int availDictD(struct ArrayWrapper temp){
  FILE* ptr4=fopen("dict/d.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr4,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,4)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    } 
  }
  return k; 
}


//searching in file having words of length 3
int availDictC(struct ArrayWrapper temp){
  FILE* ptr3=fopen("dict/c.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr3,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,3)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}


//searching in file having words of length 2
int availDictB(struct ArrayWrapper temp){
  FILE* ptr2=fopen("dict/b.txt","r");
  char wordDict[25];
  int k=0;
  while(fscanf(ptr2,"%s",wordDict)!=EOF){  
    if(checkInBag(temp,wordDict,2)){
      //print word with score
      if(max_score==score)
        printf("%s is word with maximum score of %d currently\n",wordDict,score);
      k=1;
    }
  }
  return k; 
}