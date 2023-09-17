#include <iostream>
using namespace std;

void update(int** ptr2){
    //kuch change hogha
    //ptr2 = ptr2 + 1;
    // kuch change hogha 
    //*ptr2 = *ptr2 + 1;
    //kuch change hogha
    **ptr2 = **ptr2 + 1;

}
int main(){
/*
    int num = 7;
    int *ptr = &num;
    cout <<" Address is " << ptr << endl;
    cout << "Value at address is " << *ptr << endl;
    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(*ptr) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;
    
    
    
    //double data type pointer pointer 
    double doub = 4.2;
    double *ptrd = &doub;
    cout <<" Address is " << ptrd << endl;
    cout << "Value at address is " << *ptrd << endl;
    cout << "size of the pointer is " << sizeof(*ptrd) << endl;
    // character pointer
    char ch = 'Z';
    char *ptrch = &ch;
    cout <<" Address is " << ptrch << endl;
    cout << "Value at address is " << *ptrch << endl;
    cout << "siz eof pointer is " << sizeof(*ptrch) << endl;
    int i = 5;
    int *p = &i;
    cout << p << endl;
    cout << *p << endl;
    int *pp = 0;
    pp = &i;
    cout << pp << endl;
    cout << *pp << endl;
    int *n = pp;
    cout << n << endl;
    cout << *n << endl;
    
   //important concept 
   int m = 7;
   int *ptrm = &m;
   cout << "address of m is " << ptrm << endl;
   cout <<"value at address is " << *ptrm << endl;
   *ptrm = *ptrm + 1;

   cout << "value of *ptrm is " << *ptrm << endl;
   cout << "address  of ptrm is " << ptrm << endl;
   cout << ptrm  + 1<< endl;
   cout << ptrm - 1<< endl;
   cout << (*ptrm)++*4%6 << endl;

    int array[10]= {3, 4, 6, 7, 8, 9, 55, 77, 33, 45};
    cout << "value at  the first block of array is " << array[0] << endl;
    cout << "Size of the array is " << sizeof(array) << endl;
    int *ptrarray = &array[40];
    cout <<"Size of the array using pointer " <<sizeof(ptrarray) << endl;
    cout <<"Size of the array using pointer " <<sizeof(&ptrarray) << endl;
    cout <<"Size of the array using pointer " <<sizeof(*ptrarray) << endl;

    //double pointer initilazation and decleration
    int num = 7;
    cout << "num is " << num << endl;
    int *ptr = &num;
    cout << "Ptr  store num value " << *ptr << endl;
    cout << " Ptr store addres of num is " << ptr << endl;
    cout << " Ptrn store addres of ptr is " << &ptr << endl;
    //this double pointer pointing to the pointer 
    int **ptr2 = &ptr;
    //printing address 
    cout << &ptr << endl;
    cout << &ptr2 << endl;
    //printng num from different location 
    cout << num  << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    //printing address of num &ptr , &*ptr2
    cout << &num << endl;
    cout << &ptr << endl;
    cout << &ptr2 << endl;

    cout << &ptr << endl;
    cout << ptr2 << endl;
*/
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2 ;
    int ****ptr4 = &ptr3;
    //printing value from different location
    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;
    cout << ****ptr4 << endl;
    //printing address of 
    cout << &i << endl;
    cout << &ptr << endl;
    cout << &ptr2 << endl;
    cout << &ptr3 << endl;
    cout << &ptr4 << endl;
    
    cout << endl << endl;
    //after update 
    update(ptr2);
    // ptr2 = ptr2 + 1 kuch change nahi howa due to pass by value 
    // *ptr2 = *ptr2 + 1 addres change  howa /**/
    // **ptr2 = **pt2 + 1 

    cout << i << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;
    cout << ptr4 << endl;
    //summary of double poitner
    int num = 5;
    int *ptrnum = &num;
    int **ptrnum2 = &ptrnum;
    cout << "Value of " << num << " " << *ptrnum << " "<<  ** ptrnum2 << " " << endl;
    cout << "Address of " << ptrnum << " " << ptrnum2 << endl;


























}