let ct = 2;
let a = 0;
let b = "";
let c;
let ans = 0;
const displayArea = document.getElementById("display-area");

const gridItems = document.getElementsByClassName("grid-item");
for (let i = 0; i < gridItems.length; i++) {
  gridItems[i].addEventListener("click", (e) => {
    if (ct == 2) {
      displayArea.textContent = e.target.textContent;
      a = parseInt(e.target.textContent);
      ct--;
    } else {
      displayArea.textContent = e.target.textContent;
      c = parseInt(e.target.textContent);
    }
  });
}

const opItems = document.getElementsByClassName("op-item");
for (let i = 0; i < opItems.length; i++) {
  opItems[i].addEventListener("click", (e) => {
    displayArea.textContent = e.target.textContent;
    b = e.target.textContent;
  });
}
document.getElementById("ans-item").addEventListener("click", () => {
  switch (b) {
    case "+":
      ans = a + c;
      break;
    case "-":
      ans = a - c;
      break;
    case "*":
      ans = a * c;
      break;
    case "/":
      ans = a / c;
      break;
  }
  displayArea.textContent = ans;
  ct = 2;
});
