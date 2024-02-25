let arr=["coral","darkorange","goldenrod","chartreuse","red"];
document.getElementById("text-id").addEventListener("mouseover",()=>{
    let idx=Math.floor(Math.random()*5)+1;
    document.getElementById("container").style.backgroundColor=arr[idx];
})