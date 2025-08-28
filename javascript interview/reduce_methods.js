
// REDUCE METHODS:-  The reduce() method in JS is used to 
// reduce an array to a single value by 
// applying a function on each element in the array.


const numbers = [1,2,3,4,5];

const sum = numbers.reduce((accumulator, currentVal )=> {
      return accumulator + currentVal;
}, 10);

console.log(sum);