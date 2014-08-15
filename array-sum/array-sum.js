var givenArray = [];
var sum = 0;

do {
    var userInput = prompt("Enter element (leave empty or enter incorrect number format to finish): ");
    var element = Number(userInput);
    if(element)
        givenArray.push(element);
} while(element)

for (var i =0; i<givenArray.length; i++) {
    sum += givenArray[i];
}

alert(sum);
