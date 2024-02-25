document.getElementById("g-button").addEventListener("click", () => {
    for(let i=0;i<=10;i++)
    {
        let sq=Math.pow(i,2);
        let cub=Math.pow(i,3);
        document.getElementById("table-data").innerHTML+=`<tr>
        <td>${i}</td>
        <td>${sq}</td>
        <td>${cub}</td>
      </tr>`
    }
});