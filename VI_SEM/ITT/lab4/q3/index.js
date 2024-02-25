let div1=document.getElementById("para1");
let div2=document.getElementById("para2");
let div3=document.getElementById("para3");
para1.addEventListener('mouseover', function() {
   para1.style.zIndex=4;
});
para2.addEventListener('mouseover', function() {
    para2.style.zIndex=4;
 });
 para3.addEventListener('mouseover', function() {
    para3.style.zIndex=4;
 });
 para1.addEventListener('mouseout', function() {
    para1.style.zIndex=1;
 });
 para2.addEventListener('mouseout', function() {
     para2.style.zIndex=2;
  });
  para3.addEventListener('mouseout', function() {
     para3.style.zIndex=3;
  });