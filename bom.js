// function priya(){

//     // window.alert("this is an alert message")

//     // let abc= confirm("are you okay")
//     // console.log(abc);

//     // let a= prompt("are you happy with our website")
//     // alert( "your name is "+  a)
    
// //QUESTION 5 == checking aven or odd====
//     // let a=6;
//     // if(a%2==0){
//     //     alert("even No")
//     // }
//     // else{
//     //     alert("odd no")
//     // }

//     //====user input checking ans is odd or even  in if else====

//     // let a= prompt("number")
//     // if(a%2==0){
//     //     alert("even")
//     // }
//     // else{
//     //     alert("odd")
//     // }



// // 
// priya()

//--------DAY 2--------

// function priya(){

    // let a=prompt("enter your age  ");

    // if(a>=18){
    //     alert("you can vote")
    // }
    // else{
    //     alert("you cant")
    // }
//QUESTION 1============================
    // let a=prompt("enter your age");
    // (a>=18)?alert("you can vote"):alert("you cant")

    // QUESTION=6=====
    // let a=confirm("are you happy ");

    // QUESTION=7==
    // if(a==true){
    //     alert("thanku")
    // }
    // else{
    //     alert("sorry")
    // }

    //QUESTION 8=====
    //  for(let i= 1; i<=10; i++)
    // console.log(i);


    //========homework========

    //question 1===
    // let a=prompt("enter your age");
    //  (a>=18)?alert("you can vote"):alert("you cant")

    //question 2====

    // let coursecomp=confirm("you complete the couse");
    // let certcomp=false;
    // if(coursecomp)
    //     { certcomp=confirm("have you certificate");
    //     }
    //     if(coursecomp && certcomp ){
    //         alert("COMPLETED");
    //     }
    //     else{
    //         alert("NOT COMPLETED");
    //     }


    //QUESTION=3

    // let price = parseInt(prompt("Enter the price "));
    // let dis = confirm("Do you have a discount coupon");


    // if (dis) {
    //     alert(price*0.9)
    
    // } else {
    // alert(price);
    // }


    //question=4
    // let a = prompt("enter the marks");
    // if(a>=33){
    //     alert("passed");
    // }
    // else{
    //     alert("failed");
    // }

    //QUESTION ==5
    // let ab=prompt("enter the number");
    // if(ab%2==0){
    //     alert("even no.")
    // }
    // else{
    //     alert("odd num")
    // }

    //QUESTION =6
    // let ab= confirm("do you want to delete the item");

    //  if (ab) {
    // alert("Item delete");
    //  } else {
    // alert("Item cancel");
    // }
// QUESTION=7

// let num = prompt("Enter a number:");
// if (num > 0) {
//     alert("The number is positive.");
// } else {
//     alert("The number is negative.");
// } 


//QUESTION =8 galat hai

// let a= 1;
// while (a <= 10) {
//     console.log(a);
//     a++; 
// }


//QUESTION=9

// let num;
// do {
//     num = Number(prompt("Enter a number greater than 10:"));
// } while (num<= 10);

// alert("NUMBER IS GREATER THAN 10");

//QUESTION=10


// let a = Number(prompt("Enter a number to 1to 7"));
// switch (a) {
//     case 1:
//         alert("Monday");
//         break;
//     case 2:
//         alert("Tuesday");
//         break;
//     case 3:
//         alert("Wednesday");
//         break;
//     case 4:
//         alert("Thursday");
//         break;
//     case 5:
//         alert("Friday");
//         break;
//     case 6:
//         alert("Saturday");
//         break;
//     case 7:
//         alert("Sunday");
//         break;
//     default:
//         alert("Invalid ");
// }
// }
// priya()

function priya(){

    let a= Number(prompt("enter nomber of days 1-7"))
    switch(a){
        case 1:
            alert("sunday");
            break;
            case 2:
            alert("monday");
            break;
            case 3:
            alert("tuesday");
            break;
            case 4:
            alert("wedday");
            break;
            case 5:
            alert("thusday");
            break;
            case 6:
            alert("friday");
            break;
            case 7:
            alert("saturday");
            break;

            default:
                alert("invalid ")

    }

}

priya()