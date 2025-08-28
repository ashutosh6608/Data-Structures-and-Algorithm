
// async
// declaring a function with async makes it return a promise

//await
// it pauses the execution of the code until the promise its waiting for
// is resolved then returns the resolved value

async function fetchData(){
    try{
        const response = await fetch("https://jsonplaceholder.typicode.com/todos/1");

        const data = await response.json();
        console.log("Data fetched successfully", data);
    }  catch(arr){
        console.log("Error: ", err);
    }
}

fetchData();