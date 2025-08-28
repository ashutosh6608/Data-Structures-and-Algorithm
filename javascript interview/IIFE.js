
// What is IIFE
// Immediately invoked function expression

// An IIFE is a javascript function that is defined 
// and executed immediatey after it is created.



function greet(){
    console.log("Hello world!");
}

greet();

// this is function every time code runs without being called
(function(){
    console.log("IIFE");
}) ();