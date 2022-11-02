//#include <iostream>
//using namespace std;
//int main(){
//	int n=5,i,j;
//	for(i=0;i<n;i++){
//        for(j=0;j<n-i-1;j++){
//        	cout<<"  ";
//		}
//		for(j=0;j<2*(i+1)-1;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	for(i=0;i<n;i++){
//		for(j=0;j<=i;j++){
//			cout<<"  ";
//		}
//	    for(j=0;j<=2*(5-i)-4;j++){
//	    	cout<<"* ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//	OUTPUT
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *

//WAP prime number 
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int n,i;
//	cin>>n;
//	for(i=2;i<=n;i++){
//		if(n%i==0){
//			cout<<"it is not prime";
//			 break;
//		}
//	    else{
//			cout<<"it is prime number";
//			break;
//		}
//	}
//	return 0;
//}

//	WAP Armstrong number
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int reverse,n,digit;
//	cin>>n;
//	while(n>0){
//	digit=n%10;
//	reverse=reverse*digit*digit;
//	n=n/10;
//	}
//	if(reverse==n){
//		cout<<"it is armstrong";
//	}
//	else{
//		cout<<"it is not armstrong";
//	}
//	return 0;
//}

//  WAP FACTORILA 
//#include<iostream>
//using namespace std;
//int main(){
//	int i,n,fact = 1;
//	cin>>n;
//	cout<<n<<endl;
//	for(i=1;i<n;i++){
//		fact=fact*i;
//	}
//	cout<<fact;
//		return 0;
//}

//SEACHING MIN AND MAX
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int array[n];
//	int i;
//	for(i=0;i<n;i++){
//	cin>>array[i];
//}
//	int min=array[0];
//	int max=0;
//	for(i=0;i<n;i++){
//	 if(min>array[i]){
//	 	min=array[i];
//	 }
//	 	 if(max<array[i]){
//	 	max=array[i];
//	}
//	}
//	cout<<"minum"<<min<<" "<<"maximum"<<max<<endl;
//	return 0;
//}

//LEANER SEARCH
//#include<iostream>
//using namespace std;
//int lenearseach(int arr[],int i,int key){
//	int n;
//	for(int i=0;i<=n;i++){
//		if(arr[i]==key){
//			return i;
//		}
//	}
//		return -1;
//}
//int main(){
//	int n ,i;
//	cin>>n;
//	int arr[n];
//	for(i=1;i<=n;i++){
//		cin>>arr[i];
//	}
//	int key;
//	cin>>key;
//	cout<<lenearseach(arr,n,key)<<endl;
//}

//BINARY SEARCH
//#include<iostream>
//using namespace std;
//int binaryseach(int arr[],int n,int key){
//		int s=0;
//		int e=n;
//    while(s<=e){
//    	int mid=(s+e)/2;
//    	
//		if(int(arr[mid]==key)){	
//			return mid;
//		}
//		else if(arr[mid]>key){
//			e=mid-1;
//		}
//		else{
//			s=mid+1;
//		}
//	}
//		return -1;
//}
//int main(){
//	int n ,i;
//	cin>>n;
//	int arr[n];
//	for(i=1;i<=n;i++){
//		cin>>arr[i];
//	}
//	int key;
//	cin>>key;
//	cout<<binaryseach(arr,n,key)<<endl;
//}

//SELECTION SORT
//#include<iostream>
//using namespace std;
//int main(){
//	int n ,i,j;
//	cin>>n;
//	int arr[n];
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//		}
//	for(i=0;i<n-1;i++){
//		for(j=i+1;j<n;j++){
//			if(arr[j]<arr[i]){
//			int	temp=arr[j];
//				arr[j]=arr[i];
//				arr[i]=temp;
//			}
//		}
//	}
//	for(i=0;i<n;i++){
//	cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	return 0;
//}

//binary to dacimal
//#include <iostream>
//using namespace std;
//int main(){
//	int n,r,b=0,base=1;
//	cout<<"Enter the number: ";
//	cin>>n;
//	while(n>0){
//	r=n%2;
//	b=b+r*base;
//	n=n/2;
//	base=base*10;
//	}
//	cout<<b;
//	return 0;
//}

//REVERSE INTIGER NUMBER
//#include <iostream>
//using namespace std;
//int main(){
//	int n,digit,result=0;
//	cin>>n;
//	while(n>0){
//		digit=n%10;
//		result=result*10+digit;
//		n=n/10;
//	}
//	cout<<result;
//	return 0;
//}

//BINARY SEARCH IN ROTAING ARRAY AND USING PIVOT
//#include <iostream>
//using namespace std;
// int bs(int arr[],int size,int key){
// 	int s=0,e=sizeof(arr);
//	while(s<=e){
//		int mid=(s+e)/2;
//		if(arr[mid]==key){
//		return mid;
//		}
//		else if(arr[mid]<arr[0] && arr[mid>key]){
//			s=mid+1;
//		}
//		else{
//			e=mid-1;
//		}
//		
//	}
//	return -1;
//}
//int main(){
//	int  arr[5]={3,4,5,1,2};
//	int key;
//	cin>>key;
//	int size=sizeof(arr);
//	cout<<bs(arr,size,key)<<endl;
//	}


//REVERSE STRING USING STACK
//#include <iostream>
//#include<stack>
//using namespace std;
//void revStr(string strg){
//	stack<string>st;
//	for(int i=0;i<strg.length();i++){
//	string word="";
//	while(strg[i]!=' ' && i<strg.length()){
//		word+=strg[i];
//i++;
//	}
//st.push(word);
//}
//while(!st.empty()){
//	cout<<st.top()<<" ";
//	st.pop();
//}
//cout<<endl;
//}
//// main program
//int main()
//{        string strg="ankit khandelwal" ;
//revStr(strg);
//return 0;
//}

//#include <iostream>
//using namespace std;
//int bubblesort(int arr[]){
//	int i,j;
//	for(i=1;i<=6;i++){
//		for(j=0;j<=6-i-1;j++){
//			if(arr[j]>arr[j+1]){
//		    int temp =arr[j];
//		    arr[j]=arr[j+1];
//		    arr[j+1]=temp;
//		}
//	}
//}
//}
//int main(){
//	int arr[6]={54,34,534,32233,5,4};
//bubblesort(arr);
//for(int i=0;i<6;i++){
//	cout<<arr[i]<<" ";
//}
//return 0;
//}


//#include <iostream>
//using namespace std;
//int insertionsort(int arr[]){
//	int i,j;
//	for(i=1;i<=6;i++){
//		int temp=arr[i];
//		for(j=i-1;j>=0;j--){
//			if(arr[j]>temp){
//				arr[j+1]=arr[j];
//			}
//			else{
//			break;
//			}
//		}
//			arr[j+1]=temp;
//	}
//}
//
//int main(){
//	int arr[6]={6,7,4,3,5,2};
//insertionsort(arr);
//for(int i=1;i<=6;i++){
//	cout<<arr[i]<<" ";
//}
//return 0;
//}


//merging and sort two arrary
//#include <bits/stdc++.h>
//using namespace std;
//int merge(int arr1[],int n,int arr2[],int m,int arr3[]){
//	int i=0;
//	int j=0;
//	int k=0;
//	while(i<n && j<m){
//		if(arr1[i]<arr2[j]){
//			arr3[k]=arr1[i];
//			k++;
//			i++;
//		}
//		else{
//			arr3[k]=arr2[j];
//			k++;
//			j++;
//		}
//	}
//	while(i<n){
//		arr3[k++]=arr1[i++];
//	}
//		while(j<m){
//		arr3[k++]=arr2[j++];
//	}
//}
//void print(int ans[],int n){
//	for(int i=0;i<n-1;i++){
//	cout<<ans[i]<<" ";
//	}cout<<endl;
//}
//int main(){
//	int arr1[6]={2,4,6,7,8,9};
//	int arr2[3]={1,3,5};
//	int arr3[10]={};
//	merge(arr1,6,arr2,3,arr3);
//	print(arr3,10);
//}

//wap moving nonzero number and move all the zero in left side
//#include <bits/stdc++.h>
//using namespace std;
//int nonzero(int arr[]){
//	int nonzero=0;
//	int size=sizeof(arr[5]);
//	for(int i=0;i<=size;i++){
//		if(arr[i]!=0){
//			swap(arr[i],arr[nonzero]);
//			nonzero++;
//		}
//	}
//}
//int main(){
//	int arr[5]={0,1,0,2,3};
//nonzero(arr);
//for(int i=0;i<5;i++){
//	cout<<arr[i]<<" ";
//}
//}

//2D array 
//#include <bits/stdc++.h>
//using namespace std;
//int is(int arr[][3],int n,int m){
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//	cout<<arr[j][i]<<" ";
//	}cout<<endl;
//	}
//}
//int main(){
//	int arr[4][3]={1,2,3,11,4,5,6,11,7,8,9,11};
//		is(arr,4,3);
//}


//sum column in 2d array
//#include <bits/stdc++.h>
//using namespace std;
//int is(int arr[][3],int n,int m){
//	for(int i=0;i<m;i++){
//		int sum=0;
//	for(int j=0;j<n;j++){
//	sum+=arr[i][j];
//	}
//	cout<<sum<<" ";
//	}
//	cout<<endl;
//}
//int main(){
//	int arr[3][3]={3,4,11,2,12,1,7,8,7};
//		is(arr,3,3);
//}


//WAp find maximum sum of row in 2D array and also give row number 
//#include <bits/stdc++.h>
//using namespace std;
//int is(int arr[][3],int n,int m){
//	int maxi= arr[0][0];
//	int rowindex=0;
//	for(int i=0;i<m;i++){
//		int sum=0;
//	for(int j=0;j<n;j++){
//	sum+=arr[i][j];
//	}
//	if(sum>maxi){
//		maxi=sum;
//		rowindex=i;
//	}
//	}
//	cout<<maxi<<endl;
//	return rowindex;
//}
//int main(){
//	int arr[3][3]={3,4,11,2,12,1,7,8,7};
//	cout<<is(arr,3,3);
//}

//pointer
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//	int num=5;
//	int *p=&num;
//	int *q=p;
//	cout<<(*p)++<<endl;
//}


//#include <bits/stdc++.h>
//using namespace std;
//int is(int &num){
//num++;
//}
//int main(){
//	int num=5;
//	cout<<num<<endl;
//	is(num);
//	cout<<num;
//}

//recursion
//#include <iostream>
//using namespace std;
//int print(int source,int dest){
//	cout<<"source "<<source<<"dest "<<dest<<endl;
//	if(source==dest){
//
//	return 0;
//	}
//	source++;
//print(source,dest);
//}
//int main(){
//	int source=1;
//	int dest=10;
//	int ans=print(source,dest);
//	cout<<ans;
//}

//#include <iostream>
//using namespace std;
//void print(int arr[],int n){
//
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}cout<<endl;
//}
//bool issorted(char arr[],int size,char key){
//	print(arr,size);
//	if(size==0){
//		return false;
//	}
//	if(arr[0]==key){
//		return true;
//	}
//	else{
//	string remain=issorted(arr + 1,size - 1,key);
//	return remain;}
//}
//int main(){
//	char arr[5]={"p","y","t","h","o","n"};
//	char key="n";
//	int size=6;
//	int ans=issorted(arr,size,key);
//	cout<<ans;
//}

//bineary search using recursion
//#include <bits/stdc++.h>
//using namespace std;
//int br(int arr[],int s,int e,int key){
//
//	int mid=(s+e)/2;
//	if(s>e){
//		return false;
//	}
//	if(arr[mid]==key){
//		return mid;
//	}
//	if(arr[mid]>key){
//		return br(arr,s,mid-1,key);
//	}
//	else{
//		return br(arr,mid+1,e,key);
//	}
//}
//int main(){
//    int arr[6]={2,3,4,5,6,7};
//	int key=7;
//	int size=6;
//	int ans=br(arr,0,size-1,key);
//	cout<<ans;
//}


//WAP quick sort
//#include <bits/stdc++.h>
//using namespace std;
//int part(int arr[],int s,int e){
//	int pivot=arr[s];
//	int cnt=0;
//	//count
//	for(int i=s+1;i<=e;i++){
//		if(arr[i]<=pivot){
//			cnt++;
//			}
//	}
//	//move pivot
//	int pivotindex=s+cnt;
//	swap(arr[pivotindex],arr[s]);
//	int i=s,j=e;
//	while(i<pivotindex && j>pivotindex){
//		while(arr[i]<=pivot){
//			i++;
//		}
//		while(arr[j]>pivot){
//			j--;
//		}
//		if(i<pivotindex && j>pivotindex){
//			swap(arr[i++],arr[j--]);
//		}
//		
//	}
//	return 	pivotindex;
//	
//}
//int quicksort(int arr[],int s,int e){
//	if(s>=e){
//		return false;
//	}
//	int p=part(arr,s,e);
//	quicksort(arr,s,p-1);
//	quicksort(arr,p+1,e);
//}
//int main(){
//	int arr[6]={2,4,1,6,9};
//	int n=5;
//	quicksort(arr,0,n-1);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}cout<<endl;
//}

//WAP for linked list
//#include <bits/stdc++.h>
//using namespace std;
//class node{
//	public:
//	int data;
//	node* next;
////Construstor
//	node(int data){
//		this->data=data;
//		this->next=NULL;
//	}
//};
////creating or inserting new node
//	void inserAtTail(node* &tail,int d){
//		node* temp=new node(d);
//		tail->next=temp;
//		tail=temp;
//}
//		
////	}	void inserAtHead(node* &head,int d){
////		node* temp=new node(d);
////		temp->next=head;
////		head=temp;
////	}
//
////Printing output
//	void print(node* &head){
//		node* temp=head;
//		while(temp!=NULL){
//			cout<<temp->data<<" ";
//			temp=temp->next;
//		}cout<<endl;
//	}
//	
//int main(){
//	node* node1=new node(10);
////	cout<<node1->data<<endl;
////	cout<<node1->next;
//	node* head = node1;
//	node* tail= node1;
//	print(head);
//	
//	insertAtTail(tail,15);
//	print(head);
//	
//	return 0;
//}


// RAS algorithm
//#include<iostream>
//#include<math.h>
//using namespace std;
//// find gcd
//int gcd(int a, int b) {
//   int t;
//   while(1) {
//      t= a%b;
//      if(t==0)
//      return b;
//      a = b;
//      b= t;
//   }
//}
//int main() {
//   //2 random prime numbers
//   double p = 13;
//   double q = 11;
//   double n=p*q;//calculate n
//   double track;
//   double phi= (p-1)*(q-1);//calculate phi
//   //public key
//   //e stands for encrypt
//   double e=7;
//   //for checking that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
//   while(e<phi) {
//      track = gcd(e,phi);
//      if(track==1)
//         break;
//      else
//         e++;
//   }
//   //private key
//   //d stands for decrypt
//   //choosing d such that it satisfies d*e = 1 mod phi
//   double d1=1/e;
//   double d=fmod(d1,phi);
//   double message = 9;
//   double c = pow(message,e); //encrypt the message
//   double m = pow(c,d);
//   c=fmod(c,n);
//   m=fmod(m,n);
//   cout<<"Original Message = "<<message;
//   cout<<" "<<"p = "<<p;
//   cout<<" "<<"q = "<<q;
//   cout<<" "<<"n = pq = "<<n;
//   cout<<" "<<"phi = "<<phi;
//   cout<<" "<<"Encrypted message = "<<c;
//   cout<<" "<<"Decrypted message = "<<m;
//   return 0;
//}


#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* next;
	node* prev;
	node(int data){
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}
int main(){
node* node1=new node(10);
node* head=node1;
print(head);
return 0;
}


