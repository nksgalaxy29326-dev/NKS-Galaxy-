let allTestData = {};
let currentSubject = "";
let currentQuestions = [];
let currentQIndex = 0;
let userAnswers = [];
let timerInterval;
let timeLeft = 0;

const subjectsList = [
    { id: "Physics", title: "Physics (भौतिक विज्ञान)", desc: "महत्वपूर्ण वस्तुनिष्ठ प्रश्न" },
    { id: "Chemistry", title: "Chemistry (रसायन विज्ञान)", desc: "महत्वपूर्ण वस्तुनिष्ठ प्रश्न" },
    { id: "Biology", title: "Biology (जीव विज्ञान)", desc: "महत्वपूर्ण वस्तुनिष्ठ प्रश्न" },
    { id: "History", title: "History (इतिहास)", desc: "प्राचीन, मध्यकालीन और आधुनिक इतिहास" },
    { id: "Geography", title: "Geography (भूगोल)", desc: "भारत एवं विश्व का भूगोल" },
    { id: "Polity", title: "Polity (राजव्यवस्था)", desc: "भारतीय संविधान और शासन" },
    { id: "Economics", title: "Economics (अर्थशास्त्र)", desc: "भारतीय अर्थव्यवस्था" },
    { id: "General Science", title: "General Science (सामान्य विज्ञान)", desc: "दैनिक विज्ञान प्रश्नोत्तरी" }
];

// पेज लोड होने पर प्रश्नों की फाइल लोड करें
window.onload = async () => {
    try {
        const response = await fetch('questions.json');
        allTestData = await response.json();
        renderSubjects();
    } catch (error) {
        console.error("Error loading questions:", error);
        document.getElementById('subject-list').innerHTML = "<p>प्रश्नों की फाइल लोड नहीं हो सकी। कृपया सुनिश्चित करें कि questions.json अपलोड है।</p>";
    }
};

function renderSubjects() {
    const container = document.getElementById('subject-list');
    container.innerHTML = "";

    subjectsList.forEach(sub => {
        const hasQuestions = allTestData[sub.id] && allTestData[sub.id].questions.length > 0;
        const qCount = hasQuestions ? allTestData[sub.id].questions.length : 0;

        const card = document.createElement('div');
        card.className = 'subject-card';
        card.innerHTML = `
            <h3>${sub.title}</h3>
            <p>${sub.desc}</p>
            <p><strong>उपलब्ध प्रश्न: ${qCount}</strong></p>
            <button class="btn-primary" onclick="selectSubject('${sub.id}')">View Test →</button>
        `;
        container.appendChild(card);
    });
}

function selectSubject(subjectId) {
    if (!allTestData[subjectId] || allTestData[subjectId].questions.length === 0) {
        alert("इस विषय के प्रश्न अभी जोड़े जा रहे हैं। कृपया दूसरा विषय चुनें।");
        return;
    }

    currentSubject = subjectId;
    const testInfo = allTestData[subjectId];

    document.getElementById('inst-subject-title').innerText = subjectId;
    document.getElementById('inst-test-title').innerText = testInfo.testName;
    document.getElementById('inst-total-q').innerText = testInfo.questions.length;
    document.getElementById('inst-total-marks').innerText = testInfo.questions.length;
    document.getElementById('inst-time').innerText = testInfo.duration;

    showSection('instruction-section');
}

function beginQuiz() {
    const studentName = document.getElementById('student-name').value.trim();
    if (!studentName) {
        alert("कृपया टेस्ट शुरू करने से पहले अपना नाम लिखें।");
        return;
    }

    const testInfo = allTestData[currentSubject];
    currentQuestions = testInfo.questions;
    currentQIndex = 0;
    userAnswers = new Array(currentQuestions.length).fill(null);
    timeLeft = testInfo.duration * 60;

    document.getElementById('quiz-subject-name').innerText = `${currentSubject} - ${testInfo.testName}`;
    showSection('quiz-section');
    loadQuestion();
    startTimer();
}

function startTimer() {
    clearInterval(timerInterval);
    updateTimerDisplay();

    timerInterval = setInterval(() => {
        timeLeft--;
        updateTimerDisplay();

        if (timeLeft <= 0) {
            clearInterval(timerInterval);
            alert("समय समाप्त हो गया है! आपका टेस्ट अपने-आप सबमिट हो रहा है।");
            submitQuiz();
        }
    }, 1000);
}

function updateTimerDisplay() {
    const minutes = Math.floor(timeLeft / 60);
    const seconds = timeLeft % 60;
    document.getElementById('timer').innerText = 
        `${minutes.toString().padStart(2, '0')}:${seconds.toString().padStart(2, '0')}`;
}

function loadQuestion() {
    const q = currentQuestions[currentQIndex];
    document.getElementById('question-counter').innerText = `प्रश्न ${currentQIndex + 1} / ${currentQuestions.length}`;
    document.getElementById('question-text').innerText = `${currentQIndex + 1}. ${q.question}`;

    const optionsBox = document.getElementById('options-box');
    optionsBox.innerHTML = "";

    q.options.forEach((opt, index) => {
        const btn = document.createElement('button');
        btn.className = 'option-btn';
        if (userAnswers[currentQIndex] === index) {
            btn.classList.add('selected');
        }
        btn.innerText = opt;
        btn.onclick = () => selectOption(index);
        optionsBox.appendChild(btn);
    });

    // नेविगेशन बटन कंट्रोल
    document.getElementById('prev-btn').disabled = currentQIndex === 0;
    
    if (currentQIndex === currentQuestions.length - 1) {
        document.getElementById('next-btn').classList.add('hidden');
        document.getElementById('submit-btn').classList.remove('hidden');
    } else {
        document.getElementById('next-btn').classList.remove('hidden');
        document.getElementById('submit-btn').classList.add('hidden');
    }
}

function selectOption(optionIndex) {
    userAnswers[currentQIndex] = optionIndex;
    loadQuestion();
}

function nextQuestion() {
    if (currentQIndex < currentQuestions.length - 1) {
        currentQIndex++;
        loadQuestion();
    }
}

function prevQuestion() {
    if (currentQIndex > 0) {
        currentQIndex--;
        loadQuestion();
    }
}

function submitQuiz() {
    clearInterval(timerInterval);

    let correctCount = 0;
    currentQuestions.forEach((q, idx) => {
        if (userAnswers[idx] === q.answer) {
            correctCount++;
        }
    });

    const total = currentQuestions.length;
    const wrongCount = total - correctCount;
    const percentage = Math.round((correctCount / total) * 100);

    document.getElementById('res-student-name').innerText = document.getElementById('student-name').value;
    document.getElementById('res-score').innerText = `${correctCount}/${total}`;
    document.getElementById('res-percent').innerText = `${percentage}%`;
    document.getElementById('res-correct').innerText = correctCount;
    document.getElementById('res-wrong').innerText = wrongCount;

    renderReview();
    showSection('result-section');
}

function renderReview() {
    const container = document.getElementById('review-container');
    container.innerHTML = "";

    currentQuestions.forEach((q, idx) => {
        const userAnsIdx = userAnswers[idx];
        const isCorrect = userAnsIdx === q.answer;
        const userAnsText = userAnsIdx !== null ? q.options[userAnsIdx] : "कोई उत्तर नहीं चुना गया";
        const correctAnsText = q.options[q.answer];

        const card = document.createElement('div');
        card.className = `review-card ${isCorrect ? 'correct' : 'wrong'}`;
        card.innerHTML = `
            <p><strong>प्रश्न ${idx + 1}: ${q.question}</strong></p>
            <p style="margin-top:8px;">आपका उत्तर: <strong>${userAnsText}</strong> ${isCorrect ? '✅' : '❌'}</p>
            ${!isCorrect ? `<p style="color:#16a34a;">सही उत्तर: <strong>${correctAnsText}</strong></p>` : ''}
            <div class="explanation-box">
                <strong>व्याख्या:</strong> ${q.explanation}
            </div>
        `;
        container.appendChild(card);
    });
}

function retakeTest() {
    beginQuiz();
}

function goHome() {
    clearInterval(timerInterval);
    showSection('home-section');
}

function showSection(sectionId) {
    ['home-section', 'instruction-section', 'quiz-section', 'result-section'].forEach(id => {
        document.getElementById(id).classList.add('hidden');
    });
    document.getElementById(sectionId).classList.remove('hidden');
    window.scrollTo(0, 0);
}
