document.getElementById("s-button").addEventListener("click", () => {
    let word = document.getElementById("input-text").value;
    let arr=[];
    let siz=word.length;
    for(let i=0;i<siz;i++)
    {
        for(let j=i+1;j<siz;j++)
        {
            for(let k=j+1;k<siz;k++)
            {
                arr.push(word[i]+word[j]+word[k]);
            }
        }
    }
    let str=arr.join(' ');
    document.getElementById("converted-text").value=str;
});