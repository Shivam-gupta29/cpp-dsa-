

/*int main() {
	char c;
    cin>>c;
    if('a'<=c || c<= 'z'){
        cout<<0;
    }
	else if('A'<=c || c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}*/
/*
Pattern
1
23
345
4567

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = i,count = 0;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}

   *
  ***
 *****
********/
/*
Pattern
N = 4
   *
  ***
 *****
*******

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ch=1;
    while(i<=n){
        int j = i,count = 2*n+1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1;
        while(m<=ch){
            cout<<"*";
            m = m + 1;
        }
      
        cout<<"\n";
        i = i + 1;
        ch=ch+2;


    }
}
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE*/
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE

#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p='a'+ n-i;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}*/
// apne logic se bhi ho sakta hai 
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no-1;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        // while(z>=1){
        //     j = j - 1;
        //     cout<<j;
        //     z = z - 1;
        // }
    
        
        cout<<"\n";
        i = i + 1;
    }
}
long double a=125.235;
sizeof(a);