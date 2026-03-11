submit = document.getElementById("submit")
number = document.getElementById("number")
result = document.getElementById("result")

comp_num = Math.ceil((Math.random()*100))
tries = 0

console.log(comp_num)

submit.onclick = function(){
    if(number.value == comp_num){
        result.textContent = `YOU WON! TOOK ${tries} TRIES`
    }
    else if(number.value>comp_num){
        result.textContent = "TOO HIGH"
        tries++
    }
    else{
        result.textContent = "TOO LOW"
        tries++
    }
}