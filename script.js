// let studentInfo = {name:"Yogender",PhoneNo: 7206032940,marksOfStudent:23};
// console.log(studentInfo)
// let a = typeof null
// console.log(a)
// let str = "Yogender"
// let int1 = 12
// let int2 = 10
// console.log(typeof (int1+int2+str))
// create a faulty calculator
// 1. it takes two number as input from the user
// 2. it performs wrong operations as follows:
// 10% of the time
// +-->-
// *-->+
// - -->/
// / -->**
// const faulty = (num1,num2,op) =>{
//     switch (op) {
//         case "+":
//             return num1-num2
//             break;
//         case "-":
//             return num1/num2
//             break;
//         case "*":
//             return num1+num2
//             break;
//         case "/":
//             return num1**num2
//             break;
//     }
// }
// const correct = (num1,num2,op) =>{
//     switch (op) {
//         case "+":
//             return num1+num2
//             break;
//         case "-":
//             return num1-num2
//             break;
//         case "*":
//             return num1*num2
//             break;
//         case "/":
//             return num1/num2
//             break;
//     }
// }
// num1 = 12
// num2 = 10
// op = "-"
// const randomNo = Math.floor(Math.random()*100)+1
// console.log(randomNo)
// if(randomNo >=10){
//     console.log(faulty(num1,num2,op))
// }
// else{
//     console.log(correct(num1,num2,op))
// }

//
// let str = "    HelloHe   ";
// console.log(str[6]);
// console.log(str.length);
// console.log(str.replace("He",77))
// console.log(str.trim())
//business name generator by combining list of adjectives, and shop name and another word
//Crazy,Amazing,Fire
//Shop Name: Engine,Foods,Garments
//Another word: Bros,Limited,Hub
function companyNameGenerator(){
    const randomForAd = Math.floor(Math.random()*3+1)
    const randomForName = Math.floor(Math.random()*3+1)
    const randomForWord = Math.floor(Math.random()*3+1)
    console.log(randomForAd,randomForName,randomForWord)
    let finalstr = "";
    switch (randomForAd) {
        case 1:
            finalstr = finalstr.concat("Crazy")
            break;
        case 2:
            finalstr = finalstr.concat("Amazing")
            break;
        case 3:
            finalstr = finalstr.concat("Fire")
            break;
    
        default:
            finalstr
            break;
    }
    switch (randomForName) {
        case 1:
            finalstr = finalstr+" Engine"
            break;
        case 2:
            finalstr = finalstr+" Foods"
            break;
        case 3:
            finalstr = finalstr+" Garments"
            break;
    
        default:
            finalstr
            break;
    }
    switch (randomForWord) {
        case 1:
            finalstr = finalstr+" Bros"
            break;
        case 2:
            finalstr = finalstr+" Limited"
            break;
        case 3:
            finalstr = finalstr+" Hub"
            break;
    
        default:
            finalstr
            break;
    }
    return finalstr
}
//funtion to generate random names for the company
console.log(companyNameGenerator())