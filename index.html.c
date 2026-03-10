<!DOCTYPE html>
<html>
<head>
  <title>King Thimbles Simulator</title>
  <style>
    body{
      text-align:center;
      font-family:Arial;
      background:#222;
      color:white;
    }
    .cups{
      display:flex;
      justify-content:center;
      gap:20px;
      margin-top:40px;
    }
    .cup{
      width:100px;
      height:120px;
      background:gold;
      border-radius:10px;
      cursor:pointer;
      display:flex;
      align-items:center;
      justify-content:center;
      font-size:30px;
      color:black;
    }
  </style>
</head>

<body>

<h1>King Thimbles Simulator</h1>
<p>Pick a cup</p>

<div class="cups">
  <div class="cup" onclick="pick(1)">1</div>
  <div class="cup" onclick="pick(2)">2</div>
  <div class="cup" onclick="pick(3)">3</div>
</div>

<p id="result"></p>

<script>
let winning = Math.floor(Math.random()*3)+1;

function pick(choice){
 if(choice === winning){
   document.getElementById("result").innerText="You Win!";
 }else{
   document.getElementById("result").innerText="You Lose! Gem was under "+winning;
 }
 winning = Math.floor(Math.random()*3)+1;
}
</script>

</body>
</html>