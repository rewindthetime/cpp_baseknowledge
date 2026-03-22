const jsConfetti = new JSConfetti()

const public_key = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6Ind1eXR0emp5emtkZXVmcWl1YmNqIiwicm9sZSI6ImFub24iLCJpYXQiOjE3NzQxODk2MjgsImV4cCI6MjA4OTc2NTYyOH0.EyfYf9LYIfA34JV479ogS722UPzUC53Ll72cNxZ8yW4"
const main_url = "https://wuyttzjyzkdeufqiubcj.supabase.co/rest/v1/ratings"

async function createToken(length){
    const characters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
    let genToken = '';

    for (let i = 0; i < length; i++) {
        const randomIndex = Math.floor(Math.random() * characters.length);
        genToken += characters[randomIndex];
    }

    return genToken
}

async function fetchUserFeedback(){
    const content = document.getElementById('FeedbackText').value;
    const selected = document.querySelector('input[name="rating"]:checked');

    if (!selected) {
        return;
    }

    const rating = selected.value; 

    applyRating(content, rating);
};

async function analyseRating(){

};

async function fetchData(){

};

async function applyRating(content, stars){
    try {
        const response = await fetch(main_url , {
            method: "POST",
            headers: {
                "apikey": public_key,
                "Authorization": `Bearer ${public_key}`,
                "Content-Type": "application/json"
            },
            body: JSON.stringify({
                "page_url": "https://rewindthetime.github.io/cpp_baseknowledge/",
                "stars": stars,
                "feedback": content,
                "edit_token": token
            })
        });

        console.log(response); 
        jsConfetti.addConfetti(); 

        const data = await response.json();
        console.log(data);

    } catch (error) {
        console.log('ERROR', error);
    }
}

async function deleteRating(){

};

async function editRating(){

}


function hasCookie(name) {
    const cookies = document.cookie.split("; ")
    for (const cookie of cookies) {
        const  [key] = cookie.split("=");
        if (key === name) return true;
    }
    return false;
}


document.addEventListener("DOMContentLoaded", () => {
    const submitBtn = document.getElementById("submitBtn");
    submitBtn.addEventListener("click", fetchUserFeedback);

});