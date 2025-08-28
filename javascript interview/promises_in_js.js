
const data = {name: "John" , age : 30};

function fetchData(){
    return new Promise((resolve,reject) => {
        setTimeout(()=> {
            resolve(data);
        }, 2000)
    })
}

fetchData().then(
    data => {
        console.log("Data: ", data);
    }).catch(err => {
        console.log("Error: ", err);
    })


    // promises handles asynchronous task in javascript by
    // providing a more readable and structured approach
    // than callbacks for handling outputs

    // pending , fulllfilled and rejected