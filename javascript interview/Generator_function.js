
function* infiniteSequence(){
    let num = 1;
    while(true){
        yield num;
        num++;
    }
}

/// generator function ////
const seq = infiniteSequence();
for (let i = 0 ; i < 5; i++)
console.log(seq.next().value);


