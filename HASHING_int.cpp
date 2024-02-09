 #include<iostream>
 using namespace std;
int main(){
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //percompute 
    int hash[13]={0};
    for(int i=0;i<n;i++){// hashed array
        hash[a[i]]+=1;
    }   


    // fetch mathod
    int q;
    //no. of query 
    cout<<"enter the number of query" << endl;
    cin>>q;
    while (q--)
    {
         int number;
         cin>>number;
        cout<<hash[number];
          }
    
    
}

