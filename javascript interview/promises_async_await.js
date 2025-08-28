
//////////// promises and chaining ////////////////

fetchData1()  // Step 1: Get user ID
.then(userId => {
    return fetchData(userId);  // Step 2: Use ID to get user details
})
.then(userDetails => {
    console.log(userDetails);  // Step 3: Print details
});



//////////////// async and await //////////////////

 async function fetchData(){
    try {
         const result1  = await fecthData1();
         const result2 = await fetchData2(result1);
         console.log(result2);

    }  catch(err){
       console.log(err);
    }

 }
   
 fetchData();