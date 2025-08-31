

// shallow copy

//In a shallow copy of an object the main 
// properties are copied , but any nested 
// object or arrays are still linked to these original.

  const original = {name : "John", address: {city: "Delhi"}};

//     // object assign 
//   const shallowCopy = Object.assign({}, original);

//   // spread operator
//   const shallowCopy2 = {...original};

//   shallowCopy2.address.city = "New City"; 


//   console.log(original.address.city);


// deep copy 
//  with a deep copy every part of the object , 
// including all nested objects or arrays is fully copied 
// ensuring the modifications to the copy doesn't affect 
//the original.

const deepCopy = JSON.parse(JSON.stringify(original));

deepCopy.address.city = "New city";

console.log(original.address.city);