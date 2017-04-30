
String str_html;

void SetHtml(){
 str_html+="<!DOCTYPE html>";
 str_html+="<html>";
 
 str_html+="<head>";
 str_html+="<meta charset=\"utf-8\"><meta http-equiv=\"content-type\" content=\"text/html; charset=UTF-8\">";
 str_html+="<meta name=\"viewport\" content=\"width=device-width\">";
 str_html+="<title>[ProjectionBall]</title>";
 str_html+="<style>";
 str_html+="body { font-size:12pt; color:#444444; }";
 str_html+="h1 { font-size:16pt; background-color:#DFDFDF; }";
 str_html+="h2 { font-size:16pt; background-color:#4F4F4F; color:#FFFFFF; font-weight : normal;}";
 str_html+="pre { background-color:#EEEEEE; }";
 str_html+="</style>";
 str_html+="</head>";
 
 str_html+="<body>";
 str_html+="<script>";
 
 str_html+="t=0;";
 
 str_html+="function dsptime() {";
 str_html+="DD = new Date();";
 str_html+="Year = ('00'+ DD.getFullYear()).slice(-2);";
 str_html+="Month =('00'+ (DD.getMonth() + 1)).slice(-2);";
 str_html+="Day	= ('00'+ DD.getDate()).slice(-2);";
 str_html+="Hours = ('00'+ DD.getHours()).slice(-2);";
 str_html+="Minutes = ('00'+ DD.getMinutes()).slice(-2);";
 str_html+="Seconds = ('00'+ DD.getSeconds()).slice(-2);";
 str_html+="document.getElementById(\"settimetext\").value = \"\" + Hours + Minutes + Seconds;";
 str_html+="document.getElementById(\"setdatetext\").value = \"\" + Year + Month + Day;";
 str_html+="}";
 
 str_html+="t = setInterval(\"dsptime()\", 500);";
  
 str_html+="function sendRemote(){";
 str_html+="send(\"/remote/\");";
 str_html+="document.getElementById(\"NOWstatus\").innerHTML=\"[Remote]\";";
 str_html+="}";
 str_html+="function sendLocal(){";
 str_html+="send(\"/local/\");";
 str_html+="document.getElementById(\"NOWstatus\").innerHTML=\"[Local]\";";
 str_html+="}";
 
 str_html+="function sendStart(){";
 str_html+="send(\"/start/\");";
 str_html+="document.getElementById(\"Pausestatus\").innerHTML=\"[Start]\";";
 str_html+="}";
 str_html+="function sendStop(){";
 str_html+="send(\"/stop/\");";
 str_html+="document.getElementById(\"Pausestatus\").innerHTML=\"[Stop]\";";
 str_html+="}";
 str_html+="function sendFPause(){";
 str_html+="send(\"/fpause/\");";
 str_html+="}"; 
 
 str_html+="function sendInternal(){";
 str_html+="send(\"/internal/\");";
 str_html+="document.getElementById(\"Datastatus\").innerHTML=\"[Internal Data]\";";
 str_html+="}";
 str_html+="function sendMemory(){";
 str_html+="send(\"/memory/\");";
 str_html+="document.getElementById(\"Datastatus\").innerHTML=\"[Memory Data]\";";
 str_html+="}";
 
 str_html+="function sendMode0(){";
 str_html+="send(\"/mode0/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[Animation]\";";
 str_html+="}";
 str_html+="function sendMode1(){";
 str_html+="send(\"/mode1/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[Rotation]\";";
 str_html+="}";
 str_html+="function sendMode2(){";
 str_html+="send(\"/mode2/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[One-stroke]\";";
 str_html+="}";
 str_html+="function sendMode3(){";
 str_html+="send(\"/mode3/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[Always-ON]\";";
 str_html+="}";
 str_html+="function sendMode4(){";
 str_html+="send(\"/mode4/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[Analog Watch]\";";
 str_html+="}";
 str_html+="function sendMode5(){";
 str_html+="send(\"/mode5/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[Digital Watch]\";";
 str_html+="}";
 str_html+="function sendMode6(){";
 str_html+="send(\"/mode6/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[Date]\";";
 str_html+="}";
 str_html+="function sendMode7(){";
 str_html+="send(\"/mode7/\");";
 str_html+="document.getElementById(\"MODEstatus\").innerHTML=\"[String]\";";
 str_html+="}";
 
 str_html+="function sendPattern0(){";
 str_html+="send(\"/pattern0/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Star/Data0]\";";
 str_html+="}";
 str_html+="function sendPattern1(){";
 str_html+="send(\"/pattern1/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Arrow/Data1]\";";
 str_html+="}";
 str_html+="function sendPattern2(){";
 str_html+="send(\"/pattern2/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Mail/Data2]\";";
 str_html+="}";
 str_html+="function sendPattern3(){";
 str_html+="send(\"/pattern3/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Smile/Data3]\";";
 str_html+="}";
 str_html+="function sendPattern4(){";
 str_html+="send(\"/pattern4/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Heart/Data4]\";";
 str_html+="}";
 str_html+="function sendPattern5(){";
 str_html+="send(\"/pattern5/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Sun/Data5]\";";
 str_html+="}";
 str_html+="function sendPattern6(){";
 str_html+="send(\"/pattern6/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Cloud/Data6]\";";
 str_html+="}";
 str_html+="function sendPattern7(){";
 str_html+="send(\"/pattern7/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Rain/Data7]\";";
 str_html+="}";
 str_html+="function sendPattern8(){";
 str_html+="send(\"/pattern8/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Snow/Data8]\";";
 str_html+="}"; 
 str_html+="function sendPattern9(){";
 str_html+="send(\"/pattern9/\");";
 str_html+="document.getElementById(\"PATTERNstatus\").innerHTML=\"[Thunder/Data9]\";";
 str_html+="}"; 
 str_html+="function sendTSC(){";
 str_html+="send(\"/tsc/\");";
 str_html+="}"; 
 str_html+="function send(url){";
 str_html+="var xhr = new XMLHttpRequest();";
 str_html+="xhr.open(\"GET\", url, true);";
 str_html+="xhr.send();";
 str_html+="}";
 str_html+="</script>";
 
 str_html+="<div>";
 str_html+="<h2 >&nbsp;Projection Ball Remote</h2>";
 str_html+="</div>";
 
 str_html+="<div onclick=\"obj=document.getElementById('open0').style; obj.display=(obj.display=='none')?'block':'none';\">";
 str_html+="<h1 style=\"cursor:pointer;\">▼ Control</h1>";
 str_html+="</div>";
 str_html+="<div id=\"open0\" style=\"display:none;clear:both;\">";
 
 str_html+="<p >Start/Stop  </p>";
 str_html+="<p id=\"Pausestatus\">&nbsp;</p>";
 str_html+="<button id=\"start\" onClick=sendStart() style=\"WIDTH:200px; HEIGHT: 30px\">Start</button></br>";
 str_html+="<button id=\"stop\" onClick=sendStop() style=\"WIDTH:200px; HEIGHT: 30px\">Stop</button></br>";
 
 str_html+="<p >Angle  </p>";
 str_html+="<form method='post'>";
 str_html+="<input type='number' min='0' max='360'  name='Angle' style=\"WIDTH:135px\" placeholder='Angle (0~360°)'>";
 str_html+="<input type='submit' value='Send'></br>";
 str_html+="</form>";
 str_html+="<p >Frame Control  </p>";
 str_html+="<form method='post'>";
 str_html+="<input type='number' min='0' max='18' name='Frame'  style=\"WIDTH:135px\" placeholder='Frame No.(0~18)'>";
 str_html+="<input type='submit' value='Send'></br></br>";
 str_html+="</form>";
 str_html+="<button id=\"fpause\" onClick=sendFPause() style=\"WIDTH:200px; HEIGHT: 30px\">Frame Pause</button>";
 str_html+="</div>";
 
 str_html+="<div onclick=\"obj=document.getElementById('open1').style; obj.display=(obj.display=='none')?'block':'none';\">";
 str_html+="<h1 style=\"cursor:pointer;\">▼ Data</h1>";
 str_html+="</div>";
 str_html+="<div id=\"open1\" style=\"display:none;clear:both;\">";
 str_html+="<p id=\"Datastatus\">&nbsp;</p>";
 str_html+="<button id=\"internal\" onClick=sendInternal() style=\"WIDTH:200px; HEIGHT: 30px\">Internal Data</button>";
 str_html+="</br>";
 str_html+="<button id=\"memory\" onClick=sendMemory() style=\"WIDTH:200px; HEIGHT: 30px\">Memory Data</button>";
 str_html+="</div>";
 
 str_html+="<div onclick=\"obj=document.getElementById('open2').style; obj.display=(obj.display=='none')?'block':'none';\">";
 str_html+="<h1 style=\"cursor:pointer;\">▼ Mode</h1>";
 str_html+="</div>";
 str_html+="<div id=\"open2\" style=\"display:none;clear:both;\">";
 str_html+="<p id=\"MODEstatus\">&nbsp;</p>";

 str_html+="<button id=\"mode0\" onClick=sendMode0() style=\"WIDTH:200px; HEIGHT: 30px\">Animation</button>";
 str_html+="</br>";
 str_html+="<button id=\"mode1\" onClick=sendMode1() style=\"WIDTH:200px; HEIGHT: 30px\">Rotation</button>";
 str_html+="</br>";
 str_html+="<button id=\"mode2\" onClick=sendMode2() style=\"WIDTH:200px; HEIGHT: 30px\">One-stroke</button>";
 str_html+="</br>";
 str_html+="<button id=\"mode3\" onClick=sendMode3() style=\"WIDTH:200px; HEIGHT: 30px\">Always-ON</button>";
 str_html+="</br>";
 str_html+="</br>";
 str_html+="<button id=\"mode4\" onClick=sendMode4() style=\"WIDTH:200px; HEIGHT: 30px\">Analog Watch*</button>";
 str_html+="</br>";
 str_html+="<button id=\"mode5\" onClick=sendMode5() style=\"WIDTH:200px; HEIGHT: 30px\">Digital Watch*</button>";
 str_html+="</br>";
 str_html+="<button id=\"mode6\" onClick=sendMode6() style=\"WIDTH:200px; HEIGHT: 30px\">Date*</button>";
 str_html+="</br>";
 str_html+="<button id=\"mode7\" onClick=sendMode7() style=\"WIDTH:200px; HEIGHT: 30px\">String*</button>";
 str_html+="<form method='post'>";
 str_html+="<input type='text' name='SString' style=\"WIDTH:135px\" placeholder='String'>";
 str_html+="<input type='submit' value='Send'>";
 str_html+="</form>	"; 
 str_html+="</div>";
 
 str_html+="<div onclick=\"obj=document.getElementById('open3').style; obj.display=(obj.display=='none')?'block':'none';\">";
 str_html+="<h1 style=\"cursor:pointer;\">▼ Pattern</h1>";
 str_html+="</div>";
 str_html+="<div id=\"open3\" style=\"display:none;clear:both;\">";
 str_html+="<p id=\"PATTERNstatus\">&nbsp;</p>";
 str_html+="<button id=\"pattern0\" onClick=sendPattern0() style=\"WIDTH:200px; HEIGHT: 30px\">Star/Data0</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern1\" onClick=sendPattern1() style=\"WIDTH:200px; HEIGHT: 30px\">Arrow/Data1</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern2\" onClick=sendPattern2() style=\"WIDTH:200px; HEIGHT: 30px\">Mail/Data2</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern3\" onClick=sendPattern3() style=\"WIDTH:200px; HEIGHT: 30px\">Smile/Data3</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern4\" onClick=sendPattern4() style=\"WIDTH:200px; HEIGHT: 30px\">Heart/Data4</button>";
 str_html+="</br>";
 str_html+="</br>";
 str_html+="<button id=\"pattern5\" onClick=sendPattern5() style=\"WIDTH:200px; HEIGHT: 30px\">Sun/Data5</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern6\" onClick=sendPattern6() style=\"WIDTH:200px; HEIGHT: 30px\">Cloud/Data6</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern7\" onClick=sendPattern7() style=\"WIDTH:200px; HEIGHT: 30px\">Rain/Data7</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern8\" onClick=sendPattern8() style=\"WIDTH:200px; HEIGHT: 30px\">Snow/Data8</button>";
 str_html+="</br>";
 str_html+="<button id=\"pattern9\" onClick=sendPattern9() style=\"WIDTH:200px; HEIGHT: 30px\">Thunder/Data9</button>";
 str_html+="</div>";
 
 str_html+="<div onclick=\"obj=document.getElementById('open4').style; obj.display=(obj.display=='none')?'block':'none';\">";
 str_html+="<h1 style=\"cursor:pointer;\">▼ Config</h1>";
 str_html+="</div>";
 str_html+="<div id=\"open4\" style=\"display:none;clear:both;\">";
 str_html+="<p >Wifi AP Mode Setting </p>";
 str_html+="<form method='post'>";
 str_html+="<input type='text' name='SSID' placeholder='SSID'></br>";
 str_html+="<input type='text' name='PASS' placeholder='PASS'>";
 str_html+="<input type='submit' value='Save'></br>";
 str_html+="</form>";
 str_html+="<p >Set Date*  </p>";
 str_html+="<form method='post'>";
 str_html+="<input type='text' id=\"setdatetext\" name='SDate' style=\"WIDTH:135px\" readonly=\"readonly\">";
 str_html+="<input type='submit' value='Send'>";
 str_html+="<p id=\"Datestatus\"></p>";
 str_html+="</form>";
 str_html+="<p >Set Time*  </p>";
 str_html+="<form method='post'>";
 str_html+="<input type='text' id=\"settimetext\" name='STime' style=\"WIDTH:135px\" readonly=\"readonly\">";
 str_html+="<input type='submit' value='Send'>";
 str_html+="<p id=\"Timestatus\"></p>";
 str_html+="</form>";
 str_html+="<button id=\"tsc\" onClick=sendTSC() style=\"WIDTH:200px; HEIGHT: 30px\">Touch Sensor En/Dis</button>";
 str_html+="</br>";
 str_html+="</div>";
  
 str_html+="<div onclick=\"obj=document.getElementById('open9').style; obj.display=(obj.display=='none')?'block':'none';\">";
 str_html+="<h1 style=\"cursor:pointer;\">▼ INFO</h1>";
 str_html+="</div>";
 str_html+="<div id=\"open9\" style=\"display:none;clear:both;\">";
 str_html+="<p >Version : 2.1.2</p>";
 str_html+="<p >Release : 17/04/30</p>";
 str_html+="<a href=\"http://projectionball.jp/\">[ja]Official Web Site</a>";
 str_html+="</br></br>";
 str_html+="<a href=\"http://projectionball.com/\">[en]Official Web Site</a>";
 str_html+="</br></br>";
 str_html+="<a href=\"https://github.com/meerstern/prjball-wifimodule\">About This App</a>";
 str_html+="</br></br>";
 str_html+="<a href=\"https://www.facebook.com/projectionball\">Official Facebook</a>";
 str_html+="</div>";
 str_html+="<p style =\"font-size:10pt\">Copyright&copy; Crescent All Rights Reserved.</p>";
 
 
 str_html+="</body>";
 str_html+="</html>";

}


