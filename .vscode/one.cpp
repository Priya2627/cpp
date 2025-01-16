// #include <iostream>
// using namespace std;
// //class is a user defined data type
// class A
// {
//   public: int value;
  
// };


// int main() {
    
//     A priya;
//     A singh;
    
//     priya.value=9272533;
//     singh.value=9386725;

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

// #include<iostream>
//  using namespace std;

//  class A
//  {
//    public:int a;
//    public:A(int X)
//    {
//       a=X;
//       cout<<a;
//    }
//  };
// int main(){
//    A obj(10);
//    A obj1(obj);//one copy throgh assingment and second with parameter.
//    cout<<obj1.a;


//  }


// ==============15/1/25===============


// #include<iostream>
//   using namespace std;
//   class a
//   {
//  public:int *A;
//  a(int X)
//  {
//   A=new int;
//   A=x;
//   cout<<*A;
//  }
//  /////mobike me photo hai//



//   };
// int main(){
//   a obj(10);
//   a obj1(obj) //deep copy

// }


// polimorphism==many forms== object ke,function ke operator ke.
// Two type of polimorphism==
// compile time == compile time hi de dete
// 2 type---function overloading,operator  overloading


// runtime== jab run time pr value input kre
// 1 type---fuction overridding
//OVER LOADING
// #include<iostream>
// using namespace std;

// void show(int a){
//   cout<<a;
// }
// void show(int a, int b){
//   cout<<a+b;
// }
// int main(){

//   show(10);
//   show(10,11);
// }
//obj ko add krenge

// obj overloading
// #include<iostream>
// using namespace std;
// class london
// {
//   public:int value;
//   public:london(int x=0)
//   {
//     value=x;
//     // cout<<value;
//   }
//     london operator +(london obj)       //  london add(london obj)without operator use this
//    {
//     london obj4;
//    obj4= value+obj.value;
//    return obj4;
//   }
// };
// int main(){
// london obj1(10);
// london obj2(11);
// london obj3;
// obj3=obj1+(obj2);
// cout<<obj3.value;
// }

//function overriding

#include <iostream>
using namespace std;

class A{

  public:virtual void show()
  {
    cout<<"parent";
  }
};

class b:public A
{
  public:void show()
  {
    cout<<"child";
  }
};

int main(){
  A *obj=new b();
  obj->show();
}