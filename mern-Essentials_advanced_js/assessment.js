const nextNumber = document.getElementById("nextNumbtn");
let numberInput = document.getElementById("inNum");
const convertarray = document.getElementById("convertbtn");

let nums = [];

// function to add number to array
nextNumber.addEventListener("click", function getNum() {
    // console.log(`next number`);
    nums.push(numberInput.value);
    console.log(`${numberInput.value} pushed to array`);
    numberInput.value = "";
})

convertarray.addEventListener("click", function createobject() {
    // console.log(`${nums} this is final array`)
let numberobj = {};

    for (let i = 0; i < nums.length; i++) {
        let occurNum = nums[i];
        let occur = 0;
        for (let j = 0; j < nums.length; j++) {
            if (occurNum === nums[j]) {
                occur++;
            }
        }
        console.log(occur, occurNum)
        numberobj[occurNum]=occur;

    }
    console.log(numberobj);
    let output='';
    for (const key in numberobj) {
        output+=`<b class="ms-2">${key}</b> : ${numberobj[key]}<br>`
            
        }
        document.getElementById("outputsection").innerHTML=output;
    nums = [];

})