document.getElementById("s-button").addEventListener("click", () => {
    let numericPart = document.getElementById("input-text").value;
    const areaCode = numericPart.substring(1, 4);
    const exchangeCode = numericPart.substring(5, 8);
    const subscriberNumber = numericPart.substring(9);
    document.getElementById("area-code").innerText = areaCode;
    document.getElementById("first3").innerText = exchangeCode;
    document.getElementById("last4").innerText = subscriberNumber;
});
