<!DOCTYPE html>
<html lang="hi">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>NKS Galaxy - भारतीय राजव्यवस्था (Indian Polity) - भाग 3 (100 प्रश्न)</title>
<style>
:root{
  --primary:#1769aa;
  --dark:#102542;
  --success:#16834a;
  --danger:#c62828;
  --warning:#f59e0b;
  --bg:#f1f4f9;
}
*{box-sizing:border-box}
body{
  margin:0;background:var(--bg);color:#202b3c;
  font-family:Arial,"Noto Sans Devanagari",sans-serif;
  line-height:1.6;
}
header{
  background:linear-gradient(120deg,var(--dark),var(--primary));
  color:white;text-align:center;padding:22px 10px;
  box-shadow:0 4px 12px rgba(0,0,0,0.15);
}
header h1{margin:0;font-size:28px;letter-spacing:1px}
header p{margin:4px 0;font-size:15px}
.container{max-width:1150px;margin:20px auto;padding:0 12px}
.card{
  background:white;padding:20px;margin-bottom:16px;
  border-radius:12px;box-shadow:0 3px 12px rgba(0,0,0,0.08);
}
h2{color:var(--dark);margin-top:0}
input[type=text]{
  width:100%;padding:12px;border:1px solid #cbd5e1;
  border-radius:8px;font-size:16px;margin:8px 0 15px;
}
input[type=text]:focus{outline:none;border-color:var(--primary);box-shadow:0 0 0 3px rgba(23,105,170,0.15)}
.checkbox-row{
  display:flex;align-items:center;gap:8px;margin:10px 0 16px;
  font-weight:bold;color:var(--dark);cursor:pointer;
}
button{
  padding:10px 16px;border:0;border-radius:8px;
  font-size:14px;font-weight:bold;cursor:pointer;
  transition:all 0.2s;
}
.primary{background:var(--primary);color:white}
.secondary{background:#e2e8f0;color:var(--dark)}
.danger{background:var(--danger);color:white}
.warning{background:var(--warning);color:white}
.success{background:var(--success);color:white}
button:hover{opacity:.92;transform:translateY(-1px)}
/* Sticky Top Bar */
.sticky{
  position:sticky;top:0;z-index:100;background:white;
  padding:12px 16px;border-radius:10px;
  box-shadow:0 4px 15px rgba(0,0,0,0.12);
  display:flex;justify-content:space-between;align-items:center;
  margin-bottom:14px;
}
#timer{font-size:24px;color:var(--danger);font-weight:bold;font-variant-numeric:tabular-nums}
.blink{animation:blinker 1s linear infinite}
@keyframes blinker{50%{opacity:0.3}}
.progress{
  height:8px;background:#e2e8f0;border-radius:10px;
  margin:10px 0 16px;overflow:hidden;
}
#progressFill{height:100%;width:0;background:var(--success);transition:width 0.3s}
/* Layout Grid for Test Area */
.test-layout{
  display:grid;
  grid-template-columns:1fr 290px;
  gap:16px;
  align-items:start;
}
/* Question Card */
.question{
  background:white;padding:18px;margin-bottom:16px;
  border-radius:10px;box-shadow:0 2px 9px rgba(0,0,0,0.06);
  scroll-margin-top:85px;
  border-left:4px solid transparent;
}
.question.answered-card{border-left-color:var(--success)}
.question.marked-card{border-left-color:var(--warning)}
.question h3{font-size:17px;margin:6px 0 14px;color:#0f172a}
.qhead{
  display:flex;justify-content:space-between;align-items:center;
  font-size:13px;color:#64748b;border-bottom:1px solid #f1f5f9;padding-bottom:6px;
}
.options{display:grid;gap:10px}
.option{
  display:flex;align-items:flex-start;gap:10px;padding:11px 12px;
  border:1px solid #dce3eb;border-radius:8px;
  cursor:pointer;transition:background 0.15s,border-color 0.15s;
}
.option:hover{background:#f8fafc}
.option.selected{background:#eaf4ff;border-color:var(--primary);font-weight:500}
.option input{margin-top:4px;accent-color:var(--primary)}
.q-controls{
  display:flex;gap:8px;margin-top:12px;padding-top:10px;
  border-top:1px dashed #e2e8f0;
}
.q-controls button{padding:6px 12px;font-size:12px}
/* Question Palette */
.palette-card{
  position:sticky;top:82px;background:white;padding:15px;
  border-radius:10px;box-shadow:0 3px 12px rgba(0,0,0,0.08);
}
.palette-legend{
  display:grid;grid-template-columns:1fr 1fr;gap:6px;
  font-size:12px;margin-bottom:12px;padding-bottom:10px;
  border-bottom:1px solid #e2e8f0;
}
.legend-item{display:flex;align-items:center;gap:6px}
.dot{width:14px;height:14px;border-radius:4px;display:inline-block}
.palette-grid{
  display:grid;grid-template-columns:repeat(5,1fr);gap:6px;
  max-height:360px;overflow-y:auto;padding-right:4px;
}
.p-btn{
  padding:7px 0;font-size:12px;border-radius:6px;
  background:#f1f5f9;color:#334155;border:1px solid #cbd5e1;
  text-align:center;
}
.p-btn.ans{background:var(--success);color:white;border-color:var(--success)}
.p-btn.mark{background:var(--warning);color:white;border-color:var(--warning)}
.p-btn.ans-mark{background:#7c3aed;color:white;border-color:#7c3aed}
.actions{
  display:flex;justify-content:center;
  gap:10px;flex-wrap:wrap;margin:20px 0;
}
.hidden{display:none!important}
/* Custom Modal Popup Styles */
.modal-overlay{
  position:fixed;top:0;left:0;width:100%;height:100%;
  background:rgba(0,0,0,0.6);z-index:1000;
  display:flex;justify-content:center;align-items:center;
  padding:15px;animation:fadeIn 0.2s ease-in-out;
}
@keyframes fadeIn{from{opacity:0}to{opacity:1}}
.modal-box{
  background:white;width:100%;max-width:420px;
  border-radius:12px;overflow:hidden;
  box-shadow:0 10px 25px rgba(0,0,0,0.2);
  transform:translateY(0);animation:slideUp 0.25s ease-in-out;
}
@keyframes slideUp{from{transform:translateY(20px);opacity:0}to{transform:translateY(0);opacity:1}}
.modal-header{
  background:linear-gradient(120deg,var(--dark),var(--primary));
  color:white;padding:14px 18px;font-size:18px;font-weight:bold;
  text-align:center;letter-spacing:0.5px;
}
.modal-body{padding:20px;font-size:15px;color:#334155;text-align:center}
.modal-footer{
  padding:12px 20px;background:#f8fafc;display:flex;
  justify-content:center;gap:12px;border-top:1px solid #e2e8f0;
}
/* Result & Stats */
.stats{
  display:grid;grid-template-columns:repeat(4,1fr);gap:12px;margin:16px 0;
}
.stat{
  background:#edf4fa;padding:15px;text-align:center;
  border-radius:10px;border:1px solid #dbeafe;
}
.stat strong{display:block;font-size:24px;color:var(--dark);margin-bottom:4px}
/* Review Filters */
.filter-bar{
  display:flex;gap:8px;flex-wrap:wrap;margin-bottom:15px;
}
.filter-btn.active{background:var(--dark);color:white}
.review{
  border:1px solid #e2e8f0;padding:14px;
  margin:10px 0;border-radius:8px;background:#fafbfc;
}
.review.rev-correct{border-left:5px solid var(--success)}
.review.rev-wrong{border-left:5px solid var(--danger)}
.review.rev-skip{border-left:5px solid #94a3b8}
.green{color:var(--success);font-weight:bold}
.red{color:var(--danger);font-weight:bold}
.muted{font-size:13px;color:#64748b}
@media(max-width:850px){
  .test-layout{grid-template-columns:1fr}
  .palette-card{position:static;margin-bottom:16px}
}
@media(max-width:600px){
  header h1{font-size:22px}
  .stats{grid-template-columns:repeat(2,1fr)}
  #timer{font-size:20px}
  .card{padding:14px}
}
@media print{
  header{background:var(--dark)!important;color:white!important;-webkit-print-color-adjust:exact}
  button,.sticky,.palette-card,.filter-bar{display:none!important}
  body{background:white}
  .card{box-shadow:none;border:1px solid #ccc}
}
</style>
</head>
<body>
<header>
  <h1>NKS GALAXY</h1>
  <p><b>भारतीय राजव्यवस्था (Indian Polity) - भाग 3 (SSC CPO विशेष मॉक टेस्ट)</b></p>
  <p>संवैधानिक और गैर-संवैधानिक निकाय, आपातकालीन प्रावधान और केंद्र-राज्य संबंध</p>
  <p>कुल प्रश्न: 100 | कुल अंक: 100 | समय: 20 मिनट</p>
</header>
<div class="container">
  <!-- Start Panel -->
  <section class="card" id="startPanel">
    <h2>टॉपिक: भारतीय राजव्यवस्था (Indian Polity) - भाग 3 निर्देश</h2>
    <p>अपना नाम दर्ज करें और नीचे दिए गए निर्देशों को पढ़कर टेस्ट शुरू करें। इस मॉक टेस्ट में संवैधानिक और गैर-संवैधानिक निकाय (चुनाव आयोग, UPSC, CAG, वित्त आयोग, मानवाधिकार आयोग आदि) और आपातकालीन प्रावधान से जुड़े <b>100 महत्वपूर्ण प्रश्न (201 से 300 तक)</b> शामिल हैं।</p>
    <label><b>विद्यार्थी का नाम:</b></label>
    <input type="text" id="studentName" placeholder="अपना पूरा नाम लिखें...">
    
    <label class="checkbox-row">
      <input type="checkbox" id="shuffleCheck">
      प्रश्नों का क्रम बदलें (Shuffle Questions)
    </label>
    <ul style="padding-left:20px;color:#334155">
      <li>विषय: <b>भारतीय राजव्यवस्था (Indian Polity) - भाग 3</b></li>
      <li>कुल प्रश्न: <b>100 (प्रश्न 201 से 300)</b> | कुल समय: <b>20 मिनट</b></li>
      <li>प्रत्येक सही उत्तर के लिए <b>1 अंक</b> मिलेगा।</li>
      <li><b>Negative Marking:</b> नहीं है।</li>
      <li>आप किसी भी प्रश्न को <b>Mark for Review</b> कर सकते हैं या <b>Clear</b> कर सकते हैं।</li>
    </ul>
    <div class="actions">
      <button class="primary" style="font-size:16px;padding:12px 28px" onclick="startTest()">START TEST</button>
    </div>
  </section>
  <!-- Test Area -->
  <section id="testArea" class="hidden">
    <div class="sticky">
      <div>
        <b id="studentLabel" style="font-size:16px;color:var(--dark)"></b>
        <div class="muted">विषय: <b>भारतीय राजव्यवस्था (भाग 3)</b> | हल किए: <b id="answered">0</b>/100 | चिह्नित: <b id="markedCount">0</b></div>
      </div>
      <div style="text-align:right">
        <div class="muted">शेष समय</div>
        <div id="timer">20:00</div>
      </div>
    </div>
    <div class="progress">
      <div id="progressFill"></div>
    </div>
    <div class="test-layout">
      <!-- Questions Column -->
      <div>
        <div id="questions"></div>
        <div class="actions">
          <button class="secondary" onclick="window.scrollTo({top:0,behavior:'smooth'})">↑ सबसे ऊपर जाएँ</button>
          <button class="danger" style="padding:12px 24px;font-size:15px" onclick="confirmSubmit(false)">SUBMIT TEST</button>
        </div>
      </div>
      <!-- Question Palette Sidebar -->
      <aside class="palette-card">
        <h3 style="margin:0 0 10px;font-size:16px;color:var(--dark)">Question Palette (100)</h3>
        <div class="palette-legend">
          <div class="legend-item"><span class="dot" style="background:var(--success)"></span> हल किया</div>
          <div class="legend-item"><span class="dot" style="background:var(--warning)"></span> समीक्षा</div>
          <div class="legend-item"><span class="dot" style="background:#7c3aed"></span> हल + समीक्षा</div>
          <div class="legend-item"><span class="dot" style="background:#f1f5f9;border:1px solid #cbd5e1"></span> शेष</div>
        </div>
        <div class="palette-grid" id="paletteGrid"></div>
        <button class="danger" style="width:100%;margin-top:14px" onclick="confirmSubmit(false)">SUBMIT TEST</button>
      </aside>
    </div>
  </section>
  <!-- Result Area -->
  <section id="resultArea" class="card hidden">
    <h2>परीक्षा परिणाम (Scorecard) - भारतीय राजव्यवस्था (भाग 3)</h2>
    <p id="greeting" style="font-size:16px;font-weight:bold;color:var(--primary)"></p>
    <div class="stats">
      <div class="stat"><strong id="score">0/100</strong>प्राप्त अंक</div>
      <div class="stat"><strong id="percent">0%</strong>प्रतिशत (Accuracy)</div>
      <div class="stat"><strong id="right" style="color:var(--success)">0</strong>सही उत्तर</div>
      <div class="stat"><strong id="wrong" style="color:var(--danger)">0</strong>गलत / छोड़े</div>
    </div>
    <h3 id="motivation" style="text-align:center;color:var(--dark)"></h3>
    <p id="timeTaken" class="muted" style="text-align:center;font-size:14px"></p>
    <div class="actions">
      <button class="primary" onclick="window.print()">🖨️ Print Scorecard</button>
      <button class="success" onclick="showReview('all')">📋 Answer Review</button>
      <button class="secondary" onclick="location.reload()">🔄 Retake Test</button>
    </div>
  </section>
  <!-- Review Area -->
  <section id="reviewArea" class="card hidden">
    <h2>सभी प्रश्नों की उत्तर समीक्षा - भारतीय राजव्यवस्था (भाग 3)</h2>
    <div class="filter-bar">
      <button class="secondary filter-btn active" onclick="filterReview('all', this)">सभी (100)</button>
      <button class="secondary filter-btn" onclick="filterReview('correct', this)">सही उत्तर</button>
      <button class="secondary filter-btn" onclick="filterReview('wrong', this)">गलत उत्तर</button>
      <button class="secondary filter-btn" onclick="filterReview('skipped', this)">छोड़े गए प्रश्न</button>
    </div>
    <div id="reviewList"></div>
  </section>
</div>
<!-- Custom NKS Galaxy Modal Popup Container -->
<div id="customModal" class="modal-overlay hidden">
  <div class="modal-box">
    <div class="modal-header">NKS GALAXY - भारतीय राजव्यवस्था (भाग 3)</div>
    <div class="modal-body" id="modalMessage">यहाँ संदेश दिखाई देगा।</div>
    <div class="modal-footer" id="modalButtons">
      <!-- Buttons dynamically injected -->
    </div>
  </div>
</div>
<script>
const RAW_Q = [
  ["भारत के निर्वाचन आयोग (Election Commission) का उल्लेख संविधान के किस अनुच्छेद में है?", ["अनुच्छेद 280", "अनुच्छेद 315", "अनुच्छेद 324", "अनुच्छेद 338"], 2],
  ["भारत के मुख्य चुनाव आयुक्त (Chief Election Commissioner) की नियुक्ति कौन करता है?", ["प्रधानमंत्री", "राष्ट्रपति", "भारत के मुख्य न्यायाधीश", "लोकसभा अध्यक्ष"], 1],
  ["मुख्य चुनाव आयुक्त का कार्यकाल कितने वर्ष का होता है?", ["5 वर्ष या 65 वर्ष की आयु तक", "6 वर्ष या 65 वर्ष की आयु तक", "6 वर्ष या 62 वर्ष की आयु तक", "5 वर्ष या 60 वर्ष की आयु तक"], 1],
  ["भारत के प्रथम मुख्य चुनाव आयुक्त कौन थे?", ["टी.एन. शेषन", "सुकुमार सेन", "के.वी.के. सुंदरम", "वी.एस. रमादेवी"], 1],
  ["भारत की पहली महिला मुख्य चुनाव आयुक्त (कार्यवाहक) कौन थीं?", ["वी.एस. रमादेवी", "लीला सेठ", "मीरा कुमार", "फातिमा बीबी"], 0],
  ["राष्ट्रीय मतदाता दिवस (National Voters' Day) प्रतिवर्ष कब मनाया जाता है?", ["24 जनवरी", "25 जनवरी", "26 जनवरी", "15 अगस्त"], 1],
  ["ईवीएम (EVM) का पूरा नाम क्या है?", ["Electronic Voting Machine", "Electrical Voting Machine", "Electronic Verification Machine", "Election Voting Machine"], 0],
  ["वीवीपैट (VVPAT) का पूर्ण रूप क्या है?", ["Voter Verifiable Paper Audit Trail", "Voter Verified Paper Account Trail", "Voting Verification Paper Audit Test", "Voter Validated Paper Audit Trail"], 0],
  ["संघ लोक सेवा आयोग (UPSC) का उल्लेख संविधान के किस अनुच्छेद में है?", ["अनुच्छेद 312", "अनुच्छेद 315", "अनुच्छेद 320", "अनुच्छेद 324"], 1],
  ["UPSC के अध्यक्ष और सदस्यों की नियुक्ति कौन करता है?", ["प्रधानमंत्री", "राष्ट्रपति", "गृह मंत्री", "कैबिनेट सचिव"], 1],
  ["UPSC के अध्यक्ष और सदस्यों का कार्यकाल कितना होता है?", ["5 वर्ष या 62 वर्ष की आयु तक", "6 वर्ष या 65 वर्ष की आयु तक", "6 वर्ष या 62 वर्ष की आयु तक", "5 वर्ष या 65 वर्ष की आयु तक"], 1],
  ["राज्य लोक सेवा आयोग (SPSC) के अध्यक्ष की नियुक्ति कौन करता है?", ["राष्ट्रपति", "राज्यपाल", "मुख्यमंत्री", "उच्च न्यायालय के मुख्य न्यायाधीश"], 1],
  ["राज्य लोक सेवा आयोग के सदस्यों की सेवानिवृत्ति की आयु क्या है?", ["60 वर्ष", "62 वर्ष", "65 वर्ष", "58 वर्ष"], 1],
  ["भारत के नियंत्रक एवं महालेखा परीक्षक (CAG) का उल्लेख किस अनुच्छेद में है?", ["अनुच्छेद 76", "अनुच्छेद 148", "अनुच्छेद 280", "अनुच्छेद 315"], 1],
  ["भारत के नियंत्रक एवं महालेखा परीक्षक (CAG) की नियुक्ति कौन करता है?", ["वित्त मंत्री", "प्रधानमंत्री", "राष्ट्रपति", "लोक लेखा समिति"], 2],
  ["CAG अपनी वार्षिक लेखापरीक्षा रिपोर्ट (Audit Report) किसे सौंपते हैं?", ["वित्त मंत्री को", "लोकसभा अध्यक्ष को", "राष्ट्रपति को (केंद्र के मामले में)", "प्रधानमंत्री को"], 2],
  ["किसे 'सार्वजनिक धन का संरक्षक' (Guardian of Public Purse) कहा जाता है?", ["वित्त मंत्री", "आरबीआई गवर्नर", "नियंत्रक एवं महालेखा परीक्षक (CAG)", "लोक लेखा समिति के अध्यक्ष"], 2],
  ["भारतीय संविधान के किस अनुच्छेद के तहत वित्त आयोग (Finance Commission) का गठन किया जाता है?", ["अनुच्छेद 266", "अनुच्छेद 275", "अनुच्छेद 280", "अनुच्छेद 300"], 2],
  ["वित्त आयोग का गठन राष्ट्रपति द्वारा प्रत्येक कितने वर्ष के अंतराल पर किया जाता है?", ["3 वर्ष", "4 वर्ष", "5 वर्ष", "6 वर्ष"], 2],
  ["भारत के प्रथम वित्त आयोग के अध्यक्ष कौन थे?", ["के. संथानम", "के.सी. नियोगी", "ए.के. चंदा", "एन.के. सिंह"], 1],
  ["16वें वित्त आयोग (Sixteenth Finance Commission) के अध्यक्ष कौन नियुक्त किए गए हैं?", ["एन.के. सिंह", "वाई.वी. रेड्डी", "डॉ. अरविंद पनगढ़िया", "शक्तिकांत दास"], 2],
  ["वित्त आयोग का मुख्य कार्य क्या है?", ["वार्षिक बजट तैयार करना", "केंद्र और राज्यों के बीच करों (Taxes) का बंटवारा करना", "मौद्रिक नीति बनाना", "सरकारी खातों का ऑडिट करना"], 1],
  ["वस्तु एवं सेवा कर परिषद (GST Council) का उल्लेख किस अनुच्छेद में है?", ["अनुच्छेद 246A", "अनुच्छेद 269A", "अनुच्छेद 279A", "अनुच्छेद 280A"], 2],
  ["GST परिषद का पदेन अध्यक्ष कौन होता है?", ["प्रधानमंत्री", "केंद्रीय वित्त मंत्री", "आरबीआई गवर्नर", "वित्त सचिव"], 1],
  ["राष्ट्रीय अनुसूचित जाति आयोग (NCSC) का प्रावधान किस अनुच्छेद में है?", ["अनुच्छेद 330", "अनुच्छेद 335", "अनुच्छेद 338", "अनुच्छेद 338A"], 2],
  ["राष्ट्रीय अनुसूचित जनजाति आयोग (NCST) किस अनुच्छेद के तहत एक संवैधानिक निकाय है?", ["अनुच्छेद 338", "अनुच्छेद 338A", "अनुच्छेद 338B", "अनुच्छेद 340"], 1],
  ["राष्ट्रीय पिछड़ा वर्ग आयोग (NCBC) को किस संविधान संशोधन द्वारा संवैधानिक दर्जा दिया गया?", ["100वें संशोधन", "101वें संशोधन", "102वें संशोधन (2018)", "103वें संशोधन"], 2],
  ["भाषाई अल्पसंख्यकों के लिए विशेष अधिकारी की नियुक्ति किस अनुच्छेद के तहत की जाती है?", ["अनुच्छेद 343", "अनुच्छेद 348", "अनुच्छेद 350A", "अनुच्छेद 350B"], 3],
  ["संघ की राजभाषा हिंदी और लिपि देवनागरी होगी, यह किस अनुच्छेद में वर्णित है?", ["अनुच्छेद 343", "अनुच्छेद 344", "अनुच्छेद 345", "अनुच्छेद 351"], 0],
  ["राष्ट्रीय हिंदी दिवस प्रतिवर्ष कब मनाया जाता है?", ["10 जनवरी", "14 सितंबर", "21 फरवरी", "26 नवंबर"], 1],
  ["भारत के महान्यायवादी (Attorney General) को किस सदन की कार्यवाही में मतदान करने का अधिकार है?", ["केवल लोकसभा में", "केवल राज्यसभा में", "दोनों सदनों में", "किसी भी सदन में नहीं (वे केवल बोल सकते हैं और भाग ले सकते हैं)"], 3],
  ["CAG का कार्यकाल कितने वर्ष का होता है?", ["5 वर्ष या 65 वर्ष की आयु तक", "6 वर्ष या 65 वर्ष की आयु तक", "6 वर्ष या 62 वर्ष की आयु तक", "5 वर्ष या 60 वर्ष की आयु तक"], 1],
  ["भारत के प्रथम नियंत्रक एवं महालेखा परीक्षक (CAG) कौन थे?", ["वी. नरहरि राव", "ए.के. चंदा", "ए.के. रॉय", "विनोद राय"], 0],
  ["भारत में किस वर्ष 'नोटा' (NOTA - None of the Above) का विकल्प पहली बार ईवीएम में जोड़ा गया?", ["2009", "2013", "2014", "2019"], 1],
  ["भारत का निर्वाचन आयोग किसके चुनाव नहीं कराता है?", ["राष्ट्रपति और उपराष्ट्रपति", "लोकसभा और राज्यसभा", "राज्य विधानसभा और विधान परिषद", "पंचायत और नगरपालिका (यह राज्य निर्वाचन आयोग कराता है)"], 3],
  ["अंतर-राज्यीय परिषद (Inter-State Council) का गठन किस अनुच्छेद के तहत किया जाता है?", ["अनुच्छेद 262", "अनुच्छेद 263", "अनुच्छेद 266", "अनुच्छेद 280"], 1],
  ["अंतर-राज्यीय परिषद का अध्यक्ष कौन होता है?", ["राष्ट्रपति", "प्रधानमंत्री", "गृह मंत्री", "वित्त मंत्री"], 1],
  ["अंतर-राज्यीय नदी जल विवादों का निपटारा किस अनुच्छेद के अंतर्गत आता है?", ["अनुच्छेद 262", "अनुच्छेद 263", "अनुच्छेद 265", "अनुच्छेद 275"], 0],
  ["क्षेत्रीय परिषदों (Zonal Councils) का गठन किस अधिनियम के तहत किया गया था?", ["भारत सरकार अधिनियम 1935", "राज्य पुनर्गठन अधिनियम 1956", "42वाँ संविधान संशोधन 1976", "73वाँ संविधान संशोधन 1992"], 1],
  ["सभी क्षेत्रीय परिषदों (Zonal Councils) का अध्यक्ष कौन होता है?", ["प्रधानमंत्री", "केंद्रीय गृह मंत्री", "राष्ट्रपति", "संबंधित राज्य के मुख्यमंत्री"], 1],
  ["परिसीमन आयोग (Delimitation Commission) के आदेशों को किस न्यायालय में चुनौती दी जा सकती है?", ["केवल सर्वोच्च न्यायालय में", "उच्च न्यायालय में", "किसी भी न्यायालय में नहीं", "चुनाव आयोग में"], 2],
  ["लोकसभा और विधानसभा की सीटों की संख्या को किस वर्ष तक के लिए स्थिर (Freeze) कर दिया गया है?", ["2024", "2026", "2030", "2031"], 1],
  ["किस संविधान संशोधन द्वारा दिल्ली और पुदुचेरी विधानसभाओं के निर्वाचित सदस्यों को राष्ट्रपति के निर्वाचक मंडल में शामिल किया गया?", ["69वें संशोधन", "70वें संशोधन (1992)", "71वें संशोधन", "73वें संशोधन"], 1],
  ["संविधान के किस अनुच्छेद में 'अखिल भारतीय सेवाओं' (All India Services) का प्रावधान है?", ["अनुच्छेद 310", "अनुच्छेद 311", "अनुच्छेद 312", "अनुच्छेद 315"], 2],
  ["प्रशासनिक अधिकरणों (Administrative Tribunals) की स्थापना किस अनुच्छेद के तहत की जाती है?", ["अनुच्छेद 323-A", "अनुच्छेद 323-B", "अनुच्छेद 324", "अनुच्छेद 329"], 0],
  ["नीति आयोग (NITI Aayog) की स्थापना कब की गई थी?", ["15 अगस्त 2014", "1 जनवरी 2015", "26 जनवरी 2015", "1 अप्रैल 2015"], 1],
  ["NITI Aayog में 'NITI' का पूर्ण रूप क्या है?", ["National Institution for Transforming India", "National Institute for Technology in India", "New India Transforming Institution", "National Integration and Transforming India"], 0],
  ["नीति आयोग किस प्रकार का निकाय है?", ["संवैधानिक निकाय", "सांविधिक निकाय (कानून द्वारा निर्मित)", "गैर-संवैधानिक और गैर-सांविधिक (कार्यकारी प्रस्ताव द्वारा निर्मित)", "न्यायिक निकाय"], 2],
  ["नीति आयोग के प्रथम उपाध्यक्ष कौन थे?", ["राजीव कुमार", "सुमन बेरी", "अरविंद पनगढ़िया", "अमिताभ कांत"], 2],
  ["राष्ट्रीय मानवाधिकार आयोग (NHRC) की स्थापना किस वर्ष हुई थी?", ["1990", "1992", "1993", "1995"], 2],
  ["राष्ट्रीय मानवाधिकार आयोग (NHRC) के अध्यक्ष और सदस्यों का कार्यकाल कितना होता है?", ["5 वर्ष या 70 वर्ष की आयु तक", "3 वर्ष या 70 वर्ष की आयु तक", "6 वर्ष या 65 वर्ष की आयु तक", "5 वर्ष या 65 वर्ष की आयु तक"], 1],
  ["अंतर्राष्ट्रीय मानवाधिकार दिवस प्रतिवर्ष कब मनाया जाता है?", ["24 अक्टूबर", "10 दिसंबर", "16 सितंबर", "5 जून"], 1],
  ["केंद्रीय सतर्कता आयोग (CVC) की स्थापना किस समिति की सिफारिश पर की गई थी?", ["स्वर्ण सिंह समिति", "संथानम समिति (1964)", "सरकारिया समिति", "वर्मा समिति"], 1],
  ["केंद्रीय सतर्कता आयुक्त (CVC) का कार्यकाल कितना होता है?", ["4 वर्ष या 65 वर्ष की आयु तक", "5 वर्ष या 65 वर्ष की आयु तक", "6 वर्ष या 65 वर्ष की आयु तक", "3 वर्ष या 62 वर्ष की आयु तक"], 0],
  ["केंद्रीय अन्वेषण ब्यूरो (CBI) की स्थापना किस वर्ष हुई थी?", ["1948", "1956", "1963", "1965"], 2],
  ["केंद्रीय सूचना आयोग (CIC) की स्थापना किस अधिनियम के तहत की गई है?", ["सूचना का अधिकार अधिनियम, 2005", "सूचना प्रौद्योगिकी अधिनियम, 2000", "लोकपाल अधिनियम, 2013", "प्रशासनिक सुधार अधिनियम, 2002"], 0],
  ["भारत में सूचना का अधिकार (RTI) अधिनियम कब लागू हुआ था?", ["15 जून 2005", "12 अक्टूबर 2005", "26 जनवरी 2006", "2 अक्टूबर 2005"], 1],
  ["भारत के प्रथम लोकपाल (Lokpal) कौन थे?", ["जस्टिस पी.सी. घोष (पिनाकी चंद्र घोष)", "जस्टिस ए.एम. खानविलकर", "जस्टिस दीपक मिश्रा", "जस्टिस रंजन गोगोई"], 0],
  ["लोकपाल और लोकायुक्त अधिनियम किस वर्ष पारित हुआ था?", ["2011", "2013", "2014", "2016"], 1],
  ["भारत में लोकायुक्त संस्था की स्थापना करने वाला पहला राज्य कौन सा था?", ["राजस्थान", "महाराष्ट्र (1971)", "ओडिशा", "बिहार"], 1],
  ["राष्ट्रीय महिला आयोग (NCW) की स्थापना किस वर्ष हुई थी?", ["1990", "1992", "1995", "2000"], 1],
  ["राष्ट्रीय महिला आयोग की प्रथम अध्यक्ष कौन थीं?", ["जयंती पटनायक", "रेखा शर्मा", "गिरिजा व्यास", "ममता शर्मा"], 0],
  ["राष्ट्रीय हरित अधिकरण (NGT) की स्थापना किस वर्ष की गई थी?", ["2005", "2008", "2010", "2012"], 2],
  ["राष्ट्रीय विकास परिषद (NDC) का गठन कब हुआ था?", ["15 मार्च 1950", "6 अगस्त 1952", "26 जनवरी 1950", "1 जनवरी 2015"], 1],
  ["राष्ट्रीय बाल अधिकार संरक्षण आयोग (NCPCR) की स्थापना किस वर्ष हुई थी?", ["2005", "2007", "2009", "2012"], 1],
  ["भारतीय प्रतिस्पर्धा आयोग (CCI) किस प्रकार का निकाय है?", ["संवैधानिक निकाय", "सांविधिक निकाय (प्रतिस्पर्धा अधिनियम, 2002 के तहत)", "कार्यकारी निकाय", "निजी निकाय"], 1],
  ["राष्ट्रीय सुरक्षा परिषद (NSC) का अध्यक्ष कौन होता है?", ["राष्ट्रीय सुरक्षा सलाहकार (NSA)", "प्रधानमंत्री", "गृह मंत्री", "रक्षा मंत्री"], 1],
  ["भारत के प्रथम राष्ट्रीय सुरक्षा सलाहकार (NSA) कौन थे?", ["अजीत डोभाल", "ब्रजेश मिश्रा", "शिवशंकर मेनन", "एम.के. नारायणन"], 1],
  ["भारत का विधि आयोग (Law Commission of India) किस प्रकार का निकाय है?", ["संवैधानिक निकाय", "सांविधिक निकाय", "कार्यकारी निकाय (गैर-सांविधिक सलाहकार निकाय)", "न्यायिक निकाय"], 2],
  ["स्वतंत्र भारत के प्रथम विधि आयोग (1955) के अध्यक्ष कौन थे?", ["एम.सी. सीतलवाड़", "बी.आर. अंबेडकर", "के.एम. मुंशी", "बी.एन. राव"], 0],
  ["राष्ट्रीय अल्पसंख्यक आयोग (NCM) की स्थापना किस वर्ष वैधानिक रूप से हुई?", ["1978", "1992", "1993", "2004"], 1],
  ["भारत में कुल कितने धार्मिक समुदायों को अल्पसंख्यक (Minority) का दर्जा प्राप्त है?", ["4", "5", "6 (मुस्लिम, ईसाई, सिख, बौद्ध, पारसी और जैन)", "7"], 2],
  ["राष्ट्रीय आपदा प्रबंधन प्राधिकरण (NDMA) का पदेन अध्यक्ष कौन होता है?", ["गृह मंत्री", "प्रधानमंत्री", "रक्षा मंत्री", "कैबिनेट सचिव"], 1],
  ["प्रवर्तन निदेशालय (ED - Enforcement Directorate) किस केंद्रीय मंत्रालय के अधीन कार्य करता है?", ["गृह मंत्रालय", "वित्त मंत्रालय (राजस्व विभाग)", "विधि और न्याय मंत्रालय", "कार्मिक मंत्रालय"], 1],
  ["मुख्य सूचना आयुक्त (CIC) और अन्य सूचना आयुक्तों की नियुक्ति राष्ट्रपति किसकी सिफारिश पर करते हैं?", ["प्रधानमंत्री की अध्यक्षता वाली समिति (जिसमें लोकसभा में विपक्ष के नेता और एक कैबिनेट मंत्री होते हैं)", "भारत के मुख्य न्यायाधीश", "केवल गृह मंत्री", "यूपीएससी अध्यक्ष"], 0],
  ["भारतीय संविधान के किस भाग में आपातकालीन प्रावधानों (Emergency Provisions) का उल्लेख है?", ["भाग XV", "भाग XVII", "भाग XVIII", "भाग XX"], 2],
  ["आपातकाल के दौरान मौलिक अधिकारों के निलंबन की व्यवस्था किस देश के संविधान से ली गई है?", ["अमेरिका", "जर्मनी (वाइमर संविधान)", "आयरलैंड", "कनाडा"], 1],
  ["राष्ट्रीय आपातकाल (National Emergency) किस अनुच्छेद के तहत लगाया जाता है?", ["अनुच्छेद 352", "अनुच्छेद 356", "अनुच्छेद 360", "अनुच्छेद 365"], 0],
  ["किस संविधान संशोधन द्वारा अनुच्छेद 352 में 'आंतरिक अशांति' (Internal Disturbance) शब्द के स्थान पर 'सशस्त्र विद्रोह' (Armed Rebellion) जोड़ा गया?", ["42वें संशोधन", "44वें संशोधन (1978)", "52वें संशोधन", "86वें संशोधन"], 1],
  ["भारत में अब तक कितनी बार राष्ट्रीय आपातकाल (अनुच्छेद 352) लगाया गया है?", ["1 बार", "2 बार", "3 बार (1962, 1971 और 1975)", "4 बार"], 2],
  ["राष्ट्रीय आपातकाल की उद्घोषणा को संसद के दोनों सदनों द्वारा कितने समय के भीतर अनुमोदित (Approve) किया जाना अनिवार्य है?", ["14 दिन", "1 महीना", "2 महीने", "6 महीने"], 1],
  ["राज्य में संवैधानिक तंत्र की विफलता पर 'राष्ट्रपति शासन' (President's Rule) किस अनुच्छेद के तहत लगाया जाता है?", ["अनुच्छेद 352", "अनुच्छेद 355", "अनुच्छेद 356", "अनुच्छेद 360"], 2],
  ["किसी राज्य में राष्ट्रपति शासन अधिकतम कितने समय तक जारी रह सकता है?", ["6 महीने", "1 वर्ष", "3 वर्ष (विशेष परिस्थितियों में)", "5 वर्ष"], 2],
  ["भारत में सर्वप्रथम किस राज्य में राष्ट्रपति शासन (1951) लगाया गया था?", ["केरल", "पंजाब", "उत्तर प्रदेश", "बिहार"], 1],
  ["वित्तीय आपातकाल (Financial Emergency) का प्रावधान किस अनुच्छेद में है?", ["अनुच्छेद 352", "अनुच्छेद 356", "अनुच्छेद 360", "अनुच्छेद 368"], 2],
  ["भारत में अब तक कितनी बार वित्तीय आपातकाल (अनुच्छेद 360) लगाया गया है?", ["1 बार (1991 में)", "2 बार", "3 बार", "एक बार भी नहीं (0 बार)"], 3],
  ["राष्ट्रीय आपातकाल के दौरान लोकसभा का कार्यकाल एक बार में कितने वर्ष तक बढ़ाया जा सकता है?", ["6 महीने", "1 वर्ष", "2 वर्ष", "3 वर्ष"], 1],
  ["अनुच्छेद 352 के तहत राष्ट्रीय आपातकाल की घोषणा होने पर कौन सा अनुच्छेद स्वतः निलंबित हो जाता है?", ["अनुच्छेद 14", "अनुच्छेद 19 (केवल युद्ध या बाहरी आक्रमण के आधार पर)", "अनुच्छेद 20", "अनुच्छेद 21"], 1],
  ["केंद्र-राज्य संबंधों की समीक्षा के लिए 'सरकारिया आयोग' (Sarkaria Commission) का गठन किस वर्ष किया गया था?", ["1977", "1983", "1988", "2007"], 1],
  ["'पुंछी आयोग' (Punchhi Commission - 2007) का संबंध किस विषय से है?", ["चुनाव सुधार", "केंद्र-राज्य संबंध", "बैंकिंग सुधार", "पंचायती राज"], 1],
  ["भारतीय संविधान की सातवीं अनुसूची में कितनी सूचियाँ हैं?", ["2", "3 (संघ सूची, राज्य सूची और समवर्ती सूची)", "4", "5"], 1],
  ["'शिक्षा' और 'वन' को किस संविधान संशोधन द्वारा राज्य सूची से निकालकर समवर्ती सूची में डाला गया?", ["42वें संशोधन (1976)", "44वें संशोधन (1978)", "86वें संशोधन (2002)", "97वें संशोधन (2011)"], 0],
  ["अवशिष्ट शक्तियाँ (Residuary Powers) — वे विषय जो तीनों सूचियों में नहीं हैं — किसके पास निहित हैं?", ["राज्य विधानमंडल", "संसद (केंद्र सरकार)", "राष्ट्रपति", "सर्वोच्च न्यायालय"], 1],
  ["'कृषि' (Agriculture) और 'पुलिस' संविधान की किस सूची के विषय हैं?", ["संघ सूची", "राज्य सूची", "समवर्ती सूची", "अवशिष्ट सूची"], 1],
  ["'रक्षा', 'विदेशी मामले', 'बैंकिंग' और 'रेलवे' किस सूची के अंतर्गत आते हैं?", ["संघ सूची", "राज्य सूची", "समवर्ती सूची", "इनमें से कोई नहीं"], 0],
  ["'जनसंख्या नियंत्रण और परिवार नियोजन' तथा 'विवाह और तलाक' किस सूची के विषय हैं?", ["संघ सूची", "राज्य सूची", "समवर्ती सूची", "अवशिष्ट विषय"], 2],
  ["यदि समवर्ती सूची के किसी विषय पर केंद्र और राज्य दोनों कानून बनाते हैं और उनमें टकराव होता है, तो किसका कानून मान्य होगा?", ["राज्य का कानून", "केंद्र (संसद) का कानून", "सर्वोच्च न्यायालय तय करेगा", "राज्यपाल का निर्णय"], 1],
  ["किस अनुच्छेद के तहत राज्यसभा दो-तिहाई बहुमत से प्रस्ताव पारित कर संसद को राज्य सूची के किसी विषय पर कानून बनाने का अधिकार दे सकती है?", ["अनुच्छेद 248", "अनुच्छेद 249", "अनुच्छेद 250", "अनुच्छेद 252"], 1],
  ["'राजमन्नार समिति' (1969) का गठन किस राज्य सरकार द्वारा केंद्र-राज्य संबंधों की जांच के लिए किया गया था?", ["पश्चिम बंगाल", "तमिलनाडु", "केरल", "कर्नाटक"], 1],
  ["वित्तीय आपातकाल (अनुच्छेद 360) की घोषणा को संसद के दोनों सदनों द्वारा कितने समय के भीतर मंजूरी मिलना आवश्यक है?", ["1 महीना", "2 महीने", "3 महीने", "6 महीने"], 1]
];
let Q = [];
let answers = [];
let marked = [];
let remaining = 1200; // 20 minutes for 100 questions
let timerInterval = null;
let submitted = false;
let student = "";
function startTest(){
  student = document.getElementById("studentName").value.trim() || "विद्यार्थी";
  document.getElementById("studentLabel").textContent = "👤 " + student;
  Q = [...RAW_Q];
  if(document.getElementById("shuffleCheck").checked){
    for(let i = Q.length - 1; i > 0; i--){
      const j = Math.floor(Math.random() * (i + 1));
      [Q[i], Q[j]] = [Q[j], Q[i]];
    }
  }
  answers = new Array(Q.length).fill(null);
  marked = new Array(Q.length).fill(false);
  document.getElementById("startPanel").classList.add("hidden");
  document.getElementById("testArea").classList.remove("hidden");
  renderQuestions();
  renderPalette();
  updateTimer();
  timerInterval = setInterval(updateTimer, 1000);
  window.scrollTo({top:0, behavior:"smooth"});
}
function renderQuestions(){
  document.getElementById("questions").innerHTML = Q.map((q, i) => `
    <div class="question" id="q${i}">
      <div class="qhead">
        <span><b>प्रश्न ${i+1}</b> / ${Q.length} (भारतीय राजव्यवस्था - भाग 3)</span>
        <span>अंक: +1 | 0</span>
      </div>
      <h3>${i+1}. ${q[0]}</h3>
      <div class="options">
        ${q[1].map((o, j) => `
          <label class="option" id="opt${i}_${j}">
            <input type="radio" name="q${i}" value="${j}" onchange="selectAnswer(${i},${j})">
            <span><b>${"ABCD"[j]})</b> ${o}</span>
          </label>
        `).join("")}
      </div>
      <div class="q-controls">
        <button type="button" class="secondary" onclick="clearResponse(${i})">Clear Response</button>
        <button type="button" class="warning" id="markBtn${i}" onclick="toggleMark(${i})">Mark for Review</button>
      </div>
    </div>
  `).join("");
}
function renderPalette(){
  document.getElementById("paletteGrid").innerHTML = Q.map((_, i) => `
    <button type="button" class="p-btn" id="pbtn${i}" onclick="scrollToQuestion(${i})">${i+1}</button>
  `).join("");
}
function scrollToQuestion(i){
  document.getElementById(`q${i}`).scrollIntoView({behavior:"smooth"});
}
function selectAnswer(i, j){
  if(submitted) return;
  answers[i] = j;
  for(let k = 0; k < 4; k++){
    document.getElementById(`opt${i}_${k}`).classList.toggle("selected", k === j);
  }
  updateStatus(i);
}
function clearResponse(i){
  if(submitted) return;
  answers[i] = null;
  const radios = document.getElementsByName(`q${i}`);
  radios.forEach(r => r.checked = false);
  for(let k = 0; k < 4; k++){
    document.getElementById(`opt${i}_${k}`).classList.remove("selected");
  }
  updateStatus(i);
}
function toggleMark(i){
  if(submitted) return;
  marked[i] = !marked[i];
  const btn = document.getElementById(`markBtn${i}`);
  btn.textContent = marked[i] ? "Unmark" : "Mark for Review";
  updateStatus(i);
}
function updateStatus(i){
  const qCard = document.getElementById(`q${i}`);
  const pBtn = document.getElementById(`pbtn${i}`);
  const isAns = answers[i] !== null;
  const isMark = marked[i];
  qCard.classList.remove("answered-card", "marked-card");
  pBtn.classList.remove("ans", "mark", "ans-mark");
  if(isAns && isMark){
    qCard.classList.add("marked-card");
    pBtn.classList.add("ans-mark");
  } else if(isAns){
    qCard.classList.add("answered-card");
    pBtn.classList.add("ans");
  } else if(isMark){
    qCard.classList.add("marked-card");
    pBtn.classList.add("mark");
  }
  let ansCount = answers.filter(a => a !== null).length;
  let markCount = marked.filter(m => m).length;
  document.getElementById("answered").textContent = ansCount;
  document.getElementById("markedCount").textContent = markCount;
  document.getElementById("progressFill").style.width = (ansCount / Q.length * 100) + "%";
}
function updateTimer(){
  let m = Math.floor(remaining / 60), s = remaining % 60;
  const timerEl = document.getElementById("timer");
  timerEl.textContent = String(m).padStart(2, "0") + ":" + String(s).padStart(2, "0");
  if(remaining <= 150){
    timerEl.classList.add("blink");
  }
  if(remaining <= 0){
    clearInterval(timerInterval);
    submitTest(true);
    return;
  }
  remaining--;
}
/* Custom Modal Control Functions */
function showCustomModal(message, isConfirm = false, onConfirm = null){
  const modal = document.getElementById("customModal");
  const msgEl = document.getElementById("modalMessage");
  const btnContainer = document.getElementById("modalButtons");
  
  msgEl.textContent = message;
  btnContainer.innerHTML = "";
  if(isConfirm){
    const yesBtn = document.createElement("button");
    yesBtn.className = "primary";
    yesBtn.textContent = "हाँ, सबमिट करें";
    yesBtn.onclick = () => {
      closeCustomModal();
      if(onConfirm) onConfirm();
    };
    const noBtn = document.createElement("button");
    noBtn.className = "secondary";
    noBtn.textContent = "रद्द करें";
    noBtn.onclick = closeCustomModal;
    btnContainer.appendChild(yesBtn);
    btnContainer.appendChild(noBtn);
  } else {
    const okBtn = document.createElement("button");
    okBtn.className = "primary";
    okBtn.textContent = "ठीक है";
    okBtn.onclick = closeCustomModal;
    btnContainer.appendChild(okBtn);
  }
  modal.classList.remove("hidden");
}
function closeCustomModal(){
  document.getElementById("customModal").classList.add("hidden");
}
function confirmSubmit(auto){
  if(submitted) return;
  let unanswered = answers.filter(a => a === null).length;
  if(auto){
    submitTest(true);
  } else {
    let msg = unanswered > 0 
      ? `आपने अभी ${unanswered} प्रश्न अनुत्तरित छोड़े हैं। क्या आप वाकई अपना टेस्ट सबमिट करना चाहते हैं?`
      : "क्या आप अपना टेस्ट सबमिट करना चाहते हैं?";
    
    showCustomModal(msg, true, () => {
      submitTest(false);
    });
  }
}
function submitTest(auto){
  if(submitted) return;
  submitted = true;
  clearInterval(timerInterval);
  let correct = 0, attempted = 0;
  Q.forEach((q, i) => {
    if(answers[i] !== null) attempted++;
    if(answers[i] === q[2]) correct++;
  });
  let incorrect = attempted - correct;
  let skipped = Q.length - attempted;
  let percentage = (correct / Q.length * 100).toFixed(2);
  document.getElementById("testArea").classList.add("hidden");
  document.getElementById("resultArea").classList.remove("hidden");
  document.getElementById("greeting").textContent =
    student + ", आपका 'भारतीय राजव्यवस्था (Indian Polity) - भाग 3' टेस्ट " + (auto ? "समय समाप्त होने पर स्वतः" : "सफलतापूर्वक") + " सबमिट हो गया है।";
  document.getElementById("score").textContent = correct + "/100";
  document.getElementById("percent").textContent = percentage + "%";
  document.getElementById("right").textContent = correct;
  document.getElementById("wrong").textContent = incorrect + skipped;
  let message = correct >= 90 ? "🏆 अत्यंत शानदार! आपकी तैयारी सर्वोच्च स्तर की है।" :
                correct >= 75 ? "🌟 बहुत अच्छा प्रदर्शन! निरंतर अभ्यास जारी रखें।" :
                correct >= 60 ? "👍 अच्छा प्रयास! थोड़ा और रिवीजन करें।" :
                correct >= 40 ? "📘 औसत प्रदर्शन! गलत प्रश्नों को दोबारा पढ़ें।" :
                                "💪 अभ्यास जारी रखें। नियमित मेहनत से सफलता निश्चित है।";
  document.getElementById("motivation").textContent = message;
  let used = 1200 - remaining;
  document.getElementById("timeTaken").textContent =
    `कुल हल किए: ${attempted} | सही: ${correct} | गलत: ${incorrect} | छोड़े: ${skipped} | लिया गया समय: ${Math.floor(used/60)} मिनट ${used%60} सेकंड`;
  window.scrollTo({top:0, behavior:"smooth"});
}
function showReview(filterType = 'all'){
  document.getElementById("reviewArea").classList.remove("hidden");
  renderReviewList(filterType);
  document.getElementById("reviewArea").scrollIntoView({behavior:"smooth"});
}
function filterReview(type, btn){
  document.querySelectorAll(".filter-btn").forEach(b => b.classList.remove("active"));
  btn.classList.add("active");
  renderReviewList(type);
}
function renderReviewList(type){
  let html = Q.map((q, i) => {
    let a = answers[i], c = q[2];
    let status = a === null ? "skipped" : (a === c ? "correct" : "wrong");
    if(type !== "all" && type !== status) return "";
    let cardClass = status === "correct" ? "rev-correct" : (status === "wrong" ? "rev-wrong" : "rev-skip");
    return `
      <div class="review ${cardClass}">
        <b>प्रश्न ${i+1}. ${q[0]}</b>
        <p>आपका उत्तर: <b>${a === null ? "नहीं दिया (Skipped)" : "ABCD"[a] + ") " + q[1][a]}</b></p>
        <p class="green">सही उत्तर: ${"ABCD"[c]}) ${q[1][c]}</p>
        ${status === "wrong" ? '<p class="red">✖ आपका उत्तर गलत है।</p>' : (status === "correct" ? '<p class="green">✔ आपका उत्तर सही है।</p>' : '')}
      </div>
    `;
  }).join("");
  document.getElementById("reviewList").innerHTML = html || "<p class='muted'>इस श्रेणी में कोई प्रश्न नहीं है।</p>";
}
</script>
</body>
</html>
