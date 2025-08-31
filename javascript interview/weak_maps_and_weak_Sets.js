// weak maps and weak sets
// both weakMap and weakSet are non iterable have 
// no size property and are ideal for temprorary data
// storage and memory efficient management of objects.


// let weakMap = new WeakMap();
// let obj = {name : "Adam"};
// weakMap.set(obj, "Employee");

// obj = null;

// console.log(weakMap.get(obj));


let weakSet = new WeakSet();
let obj = {name: "Adam"};
weakSet.add(Object, "Employee");
obj = null;

console.log(weakSet.has(obj));
