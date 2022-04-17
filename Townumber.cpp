#include<iostream>
using namespace std;
void stringCounter(char a[]){
   int Count=0;
   for(int i=0;i<'\0';i++){
    a[i];
    Count++;


   }
    cout<<"This string has "<<Count<<"values";
}
void voelCounter(char a[]){
int Count=0;
 for(int i=0;i<'\0';i++){
   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
    Count++;

   }else if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
   }
    Count++;
   }else{
   cout<<"This word has no Vowel"<<endl;
   }
}

void specificCounter(char a[]){
for(int i=0;i<'\0';i++){
   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
    Count++;

   }else if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
   }
    Count++;
   }else{
   cout<<"This word has no Vowel"<<endl;
   }

}
int main(){
    char a[]={"I love Bangladesh "};
    cout<<a<<endl;
 stringCounter(a);
return 0;
}
