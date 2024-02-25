document.getElementById("usn-number").addEventListener("click",(event)=>{
   let data=document.getElementById("usn-input").value;
   let str=data.split(" ");
   if(str.length>1){
      alert("USN can't have spaces");
      return;
   }
   let text=str[0]
   let n=text.length;
   console.log(n)
   if(n!==10){
      alert("invalid length");
      return;
   }
   if (text[0]!='1' && text[0]!='2' && text[0]!='3' && text[0]!='4') {
      alert("First digit should be a number from 1-4");
  } else if (!(/^[A-Z]+$/.test(text.substring(1, 3)))) {
      alert("second and third digits should be uppercase charaters only");
  } else if (!(/^-?\d+$/.test(text.substring(3, 5)))) {
      alert("fourth and fifth should be digits only");
  } else if (!(/^[A-Z]+$/.test(text.substring(5, 7)))) {
      alert("sixth and seventh digits should be uppercase charaters only");
  } else if (!(/^-?\d+$/.test(text.substring(7, 10)))) {
      alert("last three should be digits only");
  } else {
      document.getElementById('err').innerText = `Semester: ${text[0]}`;}})