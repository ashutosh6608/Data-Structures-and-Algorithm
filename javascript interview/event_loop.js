 //Event Loop in JavaScript

//“The event loop is a mechanism in JavaScript that manages
//  the execution of code, handling of asynchronous tasks,
//  and coordination between the call stack, microtask 
// queue, and callback queue. Since JavaScript is 
// single-threaded, the event loop continuously checks
//  whether the call stack is empty and, if so, pushes
//  tasks from the microtask queue (like promises) first,
//  and then from the callback queue (like setTimeout or
//  DOM events) into the stack for execution.”

// 👉 If you want it short & crisp:

//The event loop allows JavaScript to perform
//  non-blocking asynchronous operations by
//  handling tasks from queues when the call 
// stack is empty, ensuring promises (microtasks) 
// run before callbacks (macrotasks).”