document.querySelectorAll("button").addEventListener("click",gather);

function gather() {
    
    in_hand_amount = document.getElementById("in_hand_amount").valueAsNumber;

    total_amount = document.getElementById("total_amount").valueAsNumber;

    years = document.getElementById("years").valueAsNumber;

    returns_yearly = document.getElementById("returns_yearly").valueAsNumber


    increase_yearly = document.getElementById("increase_yearly").valueAsNumber;

    inflation = document.getElementById("inflation").valueAsNumber;
    console.log(in_hand_amount);
}