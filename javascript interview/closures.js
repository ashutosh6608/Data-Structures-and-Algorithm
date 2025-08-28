
// It is a  function that remembers the environment 
// in which it was created even after 
// the outer function has finished executing

function outerFunction() {
    let outerVar = "This is from the outside!"; // local variable of outerFunction

    function innerFunction() {
        // 🔥 CLOSURE: innerFunction is using outerVar
        // even after outerFunction has finished
        console.log(outerVar);
    }

    return innerFunction; // return innerFunction (with closure attached)
}

const closureFunction = outerFunction(); // outerFunction finishes, but innerFunction still remembers outerVar
closureFunction();  // Output: "This is from the outside!"

////////////////////////////////////   ANOTHER EXAMPLE ///////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

function counter() {
    let count = 0; // local variable of counter

    return {
        increment: function () {
            // 🔥 CLOSURE: increment is accessing/modifying count
            count++;
            return count;
        },

        decrement: function () {
            // 🔥 CLOSURE: decrement is accessing/modifying count
            count--;
            return count;
        },

        displayCount: function () {
            // 🔥 CLOSURE: displayCount is reading count
            return "Current count: " + count;
        }
    };
}

const myCounter = counter(); // counter() finishes, but returned functions keep count alive

console.log(myCounter.increment());     // 1  (closure keeps count alive)
console.log(myCounter.displayCount());  // "Current count: 1"
console.log(myCounter.decrement());     // 0
