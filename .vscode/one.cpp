// #include <iostream>
// using namespace std;
// //class is a user defined data type
// class A
// {
//   public: int value;
  
// };


// int main() {
    
//     A ishika;
//     A Muskan;
    
//     ishika.value=9272533;
//     Muskan.value=9386725;

//     cout<<ishika.value;
//     cout<<endl;
//     cout<<Muskan.value;
// }
//PARAMETERIZE COMSTRUCTOR
// #include <iostream>
// using namespace std;

// class A
// {
//     int value;
//     public:A(int x){

//         value=x;
//         cout<<value;
//     }

  
//  };
//  int main(){
//     A obj(10);
//  }


 //INHERITANCE//
//  REUSABILITY KO BADANA

// single inheritance

// #include <iostream>
// using namespace std;

// class A
// {
//     public : int value=10;
  
//  };

//  class B:public A{
//  };
//  int main(){
//    B obj;
//    cout<<obj.value;
//  }

//multilevel
// #include <iostream>
// using namespace std;

// class A
// {
//    public:A(){
//     cout<<"constructor of A";
//    }
  
//  };

//  class B:public A{

//     public:B()
//     {
//        cout<<"constructor of B" ;
//     }
//  };

//  class C:public B{

//     public:C(){
//         cout<<"constructor of c" ;

//     }

//  };
//  int main(){
//    C obj;
   
//  }

//heirarical//
// #include <iostream>
// using namespace std;

// class A
// {
//    public:A(){
//     cout<<"constructor of A";
//    }
  
//  };

//  class B:public A{

//     public:B()
//     {
//        cout<<"constructor of B" ;
//     }
//  };

//  class C:public A{

//     public:C(){
//         cout<<"constructor of c" ;

//     }

//  };
//  int main(){
//    C obj;
   
//  }
//14/1/25============================================
// when diamod shape created (img in mobile)
// use the virtual keyword use krne pr pointer create hoga jo memory ko hold krega.
// jab 1 obj do copy rceive krta hai kisi ek class ki == diamond problem solution=virtual keyword pointer a ajyega common memery ko point kr rha hai
 
//  #include<iostream>
//  using namespace std;
//  class A
//  {
//     public:int roll=1234;
//     public: A(){
//       cout<<"constructor of A"<<endl;
//     }
//  };

//   class B:virtual public A
//  {
//    public: B(){
//       cout<<"constructor of B"<<endl;
//     }
//  };

//   class C:virtual public A
//  {
//    public: C(){
//       cout<<"constructor of C"<<endl;
//     }
//  };

//   class D:public B,public C
//  {
//    public: D(){
//       cout<<"constructor of D"<<endl;
//     }
//  };

//  int main(){
//    D obj;
//     cout<<sizeof(B);//size doguna ho jayega all because of virtual pointer,bina vitual ke data type ke according dega
    
//  }

#include<iostream>
 using namespace std;

 class A
 {
   public:int a;
   public:A(int X)
   {
      a=X;
      cout<<a;
   }
 };
int main(){
   A obj(10);
   A obj1(obj);//one copy throgh assingment and second with parameter.
   cout<<obj1.a;


 }