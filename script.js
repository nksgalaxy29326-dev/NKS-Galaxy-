const allTestData = {
  "Physics": {
    "testName": "भौतिक विज्ञान - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "कार्य (Work) का SI मात्रक क्या है?",
        "options": ["वाट (Watt)", "जूल (Joule)", "न्यूटन (Newton)", "पास्कल (Pascal)"],
        "answer": 1,
        "explanation": "कार्य और ऊर्जा दोनों का SI मात्रक जूल (Joule) होता है।"
      },
      {
        "question": "प्रकाश वर्ष (Light Year) किसकी इकाई है?",
        "options": ["समय की", "दूरी की", "प्रकाश की तीव्रता की", "द्रव्यमान की"],
        "answer": 1,
        "explanation": "प्रकाश द्वारा एक वर्ष में तय की गई दूरी को प्रकाश वर्ष कहते हैं।"
      }
    ]
  },
  "Chemistry": {
    "testName": "रसायन विज्ञान - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "जल का रासायनिक सूत्र क्या है?",
        "options": ["CO2", "H2O", "O2", "NaCl"],
        "answer": 1,
        "explanation": "जल के एक अणु में हाइड्रोजन के दो और ऑक्सीजन का एक परमाणु होता है (H2O)।"
      }
    ]
  },
  "Biology": {
    "testName": "जीव विज्ञान - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "कोशिका का पावरहाउस (Powerhouse of Cell) किसे कहा जाता है?",
        "options": ["राइबोसोम", "माइटोकॉन्ड्रिया", "लाइसोसोम", "केंद्रक"],
        "answer": 1,
        "explanation": "माइटोकॉन्ड्रिया में कोशिकीय श्वसन द्वारा ऊर्जा (ATP) का निर्माण होता है।"
      }
    ]
  },
  "History": {
    "testName": "प्राचीन इतिहास - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "सिंधु घाटी सभ्यता का प्रमुख बंदरगाह कौन था?",
        "options": ["हड़प्पा", "लोथल", "कालीबंगा", "मोहनजोदड़ो"],
        "answer": 1,
        "explanation": "लोथल गुजरात में भोगवा नदी के किनारे स्थित एक प्रमुख बंदरगाह था।"
      }
    ]
  },
  "Polity": {
    "testName": "भारतीय राजव्यवस्था - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "भारतीय संविधान को कब अंगीकार किया गया था?",
        "options": ["15 अगस्त 1947", "26 नवंबर 1949", "26 जनवरी 1950", "2 अक्टूबर 1950"],
        "answer": 1,
        "explanation": "संविधान सभा द्वारा 26 नवंबर 1949 को भारतीय संविधान को अंगीकार किया गया था।"
      }
    ]
  },
  "Economics": {
    "testName": "भारतीय अर्थव्यवस्था - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "भारतीय रिज़र्व बैंक (RBI) की स्थापना किस वर्ष हुई थी?",
        "options": ["1935", "1947", "1949", "1950"],
        "answer": 0,
        "explanation": "भारतीय रिज़र्व बैंक की स्थापना 1 अप्रैल 1935 को हुई थी।"
      }
    ]
  },
  "General Science": {
    "testName": "सामान्य विज्ञान - प्रैक्टिस सेट 1",
    "duration": 5,
    "questions": [
      {
        "question": "सूर्य के प्रकाश से हमें कौन-सा विटामिन प्राप्त होता है?",
        "options": ["विटामिन A", "विटामिन B", "विटामिन C", "विटामिन D"],
        "answer": 3,
        "explanation": "सूर्य के प्रकाश से त्वचा में विटामिन D का निर्माण होता है।"
      }
    ]
  }
};

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

window.onload = () => {
    renderSubjects();
};

function renderSubjects() {
    const container = document.getElementById('subject-list');
    container.innerHTML = "";

    subjectsList.forEach(sub => {
        let countText = "";
        if (sub.id === "Geography") {
            countText = "उपलब्ध टेस्ट: 2 (100 प्रश्न)";
        } else {
            const hasQuestions = allTestData[sub.id] && allTestData[sub.id].questions.length > 0;
            const qCount = hasQuestions ? allTestData[sub.id].questions.length : 0;
            countText = `उपलब्ध प्रश्न: ${qCount}`;
        }

        const card = document.createElement('div');
        card.className = 'subject-card';
        card.innerHTML = `
            <h3>${sub.title}</h3>
            <p>${sub.desc}</p>
            <p><strong>${countText}</strong></p>
            <button class="btn-primary" onclick="selectSubject('${sub.id}')">View Test →</button>
        `;
        container.appendChild(card);
    });
}

function selectSubject(subjectId) {
    if (subjectId === "Geography") {
        showSection('geography-list-section');
        return;
    }

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
