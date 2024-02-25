const vovFn=(str)=>{
    let n=str.length;
    for(let i=0;i<n;i++){
        let k=str[i].toLowerCase();
        if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u')
        {return i;}
    }
    return -1;
}
let str=prompt("enter the string you want to check");
if(str>='0'&&str<='9'){
    alert("plese enter a string");
}
else
{
    document.getElementById("string").innerText="positon of vowel is "+vovFn(str);
}

let num= parseInt(prompt("Enter the digits to reverse:", "0"), 10);
if(!isNaN(num)){
    let newNum=0;
    while(num>0){
        let rem=num%10;
        newNum=(newNum*10)+rem;
        num = Math.floor(num / 10);
    }
    document.getElementById("digits-rev").innerText=`reversed number is ${newNum}`;
}
