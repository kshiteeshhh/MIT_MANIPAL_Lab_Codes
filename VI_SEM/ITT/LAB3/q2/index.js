document.getElementById("s-button").addEventListener("click",()=>{
    event.preventDefault(); 
        let englishText = document.getElementById('input-data').value;
        let pigLatinWords = englishText.split(' ').map(word => {
                return word.substring(1) + word[0] + 'ay';
        });
        let pigLatinText = pigLatinWords.join(' ');
        document.getElementById('converted-text').value = pigLatinText; 
})