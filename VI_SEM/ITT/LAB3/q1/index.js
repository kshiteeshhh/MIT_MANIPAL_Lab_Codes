var ele=document.getElementById('text-c');
var value=10;
var growing=true;
var interval1;
const handleClick=()=>{
    interval1=setInterval(inTimer,1000);
}
const inTimer=()=>{
   if(growing){
    value+=10;
    ele.innerHTML = `<div style="color: red; font-size: ${value}pt;">TEXT-GROWING</div>`;
    if (value >= 80) {
        growing = false;
        ele.innerHTML = `<div style="color: blue; font-size: ${fontSize}pt;">TEXT-SHRINKING</div>`;
    }
}
     else {
    value-=10;
    ele.innerHTML = `<div style="color: blue; font-size: ${value}pt;">TEXT-SHRINKING</div>`;
    if (value <= 10) {
        clearInterval(interval1);
        ele.innerHTML = `<div style="color: black; font-size: ${fontSize}pt;">Animation Complete</div>`;
    }
}
}

document.getElementById("magic-button").addEventListener("click",handleClick);