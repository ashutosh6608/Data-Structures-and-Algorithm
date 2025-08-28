// Currying is a concept in functional programmming 
// where a function takes multiple arguments is tranformed into
// a sequence of functions, each accepting a single argument

function double(a){
    return function(b){
        return a+b;
    }
}

const double2 = double(2);
console.log(double2(3));
console.log(double2(5));