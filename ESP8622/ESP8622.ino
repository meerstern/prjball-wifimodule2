#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WiFiUdp.h>
#include <EEPROM.h>
#include <ESP8266mDNS.h>


#include "index.h"

#define SSID_NAME	"prjball"
#define SSID_PASS	""
#define WIFI_SSID "YOURSSID"
#define WIFI_PWD "YOURPASS"

//#define FORCE_AP_MODE
#define COUNT_MAX	50



ESP8266WebServer server(80);

struct Wifi_Config {
char ssid[32];
char pass[32];
};

Wifi_Config wifi_con_mem;
Wifi_Config wifi_con;


void RootGet() {
    server.send(200, "text/html", str_html);
}

void RootPost() {
  String ssid = server.arg("SSID");
  String pass = server.arg("PASS");
  String angle = server.arg("Angle");
  String frame = server.arg("Frame");
  String sstr = server.arg("SString");
  String sdate = server.arg("SDate");
  String stime = server.arg("STime");
  server.send(200, "text/html", str_html); 
  
  if(frame!=""){
  	Serial.print("fno=");
  	Serial.println(frame);
  }
  else if(angle!=""){
  	Serial.print("deg=");
  	Serial.println(angle);
  }
  else if(sstr!=""){
	Serial.print("stg=");
  	Serial.println(sstr); 
  }
  else if(sdate!=""){
	Serial.print("day=");
  	Serial.println(sdate);   
  }
  else if(stime!=""){
	Serial.print("tim=");
  	Serial.println(stime);    
  }
  else if(ssid!=""){
  	char chrssid[32];
  	char chrpass[32];
  	ssid.toCharArray(chrssid,sizeof(chrssid));
  	pass.toCharArray(chrpass,sizeof(chrpass));;
  	strcpy(wifi_con.ssid, chrssid);
  	strcpy(wifi_con.pass, chrpass);
  	EEPROM.put<Wifi_Config>(0, wifi_con);
  	EEPROM.commit();
  	Serial.println("***Saved Wifi Settings***");
  	Serial.println(wifi_con.ssid);		  
  }  
}

void SetStart(){
  Serial.println("srt");
  server.send(200, "text/html","OK");
}

void SetStop(){
  Serial.println("stp");
  server.send(200, "text/html","OK");
}

void SetFPause(){
  Serial.println("fpa");
  server.send(200, "text/html","OK");
}

void SetInternal(){
  Serial.println("inm");
  server.send(200, "text/html","OK");
}

void SetMemory(){
  Serial.println("sdm");
  server.send(200, "text/html","OK");
}

void SetMode0(){
  Serial.println("frm");
  server.send(200, "text/html","OK");
}
void SetMode1(){
  Serial.println("rot");
  server.send(200, "text/html","OK");
}
void SetMode2(){
  Serial.println("str");
  server.send(200, "text/html","OK");
}
void SetMode3(){
  Serial.println("alw");
  server.send(200, "text/html","OK");
}
void SetMode4(){
  Serial.println("awt");
  server.send(200, "text/html","OK");
}
void SetMode5(){
  Serial.println("dwt");
  server.send(200, "text/html","OK");
}
void SetMode6(){
  Serial.println("dym");
  server.send(200, "text/html","OK");
}
void SetMode7(){
  Serial.println("stm");
  server.send(200, "text/html","OK");
}
void SetMode8(){
  Serial.println("");
  server.send(200, "text/html","OK");
}
void SetMode9(){
  Serial.println("");
  server.send(200, "text/html","OK");
}

void SetPattern0(){
  Serial.println("sw0");
  server.send(200, "text/html","OK");
}
void SetPattern1(){
  Serial.println("sw1");
  server.send(200, "text/html","OK");
}
void SetPattern2(){
  Serial.println("sw2");
  server.send(200, "text/html","OK");
}
void SetPattern3(){
  Serial.println("sw3");
  server.send(200, "text/html","OK");
}
void SetPattern4(){
  Serial.println("sw4");
  server.send(200, "text/html","OK");
}
void SetPattern5(){
  Serial.println("sw5");
  server.send(200, "text/html","OK");
}
void SetPattern6(){
  Serial.println("sw6");
  server.send(200, "text/html","OK");
}
void SetPattern7(){
  Serial.println("sw7");
  server.send(200, "text/html","OK");
}
void SetPattern8(){
  Serial.println("sw8");
  server.send(200, "text/html","OK");
}
void SetPattern9(){
  Serial.println("sw9");
  server.send(200, "text/html","OK");
}
void SetTSC(){
  Serial.println("tsc");
  server.send(200, "text/html","OK");
}

void setup() {
	
	int count=0;
	SetHtml();
	Serial.begin(9600);
	while (!Serial);
	Serial.println(" *Initialized!!* ");
	
	EEPROM.begin(100);
	
	EEPROM.get<Wifi_Config>(0, wifi_con_mem);
	Serial.println(wifi_con_mem.ssid[0]);
 
	if(wifi_con_mem.ssid[0]==NULL){
		//Set Default AP
		strcpy(wifi_con.ssid, WIFI_SSID);
		strcpy(wifi_con.pass, WIFI_PWD);
		Serial.print("Default: ");
    Serial.println(wifi_con.ssid);   
  }else{
		//Set memoey AP
		strcpy(wifi_con.ssid, wifi_con_mem.ssid);
		strcpy(wifi_con.pass, wifi_con_mem.pass);
		Serial.print("Memory:");
    Serial.println(wifi_con.ssid);   			
	}
	
#ifndef FORCE_AP_MODE	
	//Start Wifi Initialize as Client Mode
	WiFi.begin(wifi_con.ssid, wifi_con.pass);
  // Wait until WiFi is connected
  Serial.println("");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    count++;
    if(count>COUNT_MAX)break;
  } 
#endif

	
	  Serial.println("");

    byte mac[6];
    String macadr;
    WiFi.macAddress(mac);
    for (int i = 0; i < 6; i++) {
      macadr += String(mac[i], HEX);
    }
    Serial.println("MAC: " + macadr);
    String ssid = "";
    String pass = "";
    char strbuff[255];
    char chrssid[255];
    
    ssid=SSID_NAME + String(mac[5], HEX);
    ssid.toCharArray(chrssid,255);
    pass="";
 
	//Client Mode
	if(WiFi.status() == WL_CONNECTED){
		Serial.println("**Client Mode**");
		Serial.println("");
		Serial.println("Connected!");
		Serial.print("IP Address: ");
		Serial.println(WiFi.localIP());
		
	}else{
		//Server Mode
		Serial.println("Cannot Find AP. Starting as Server Mode.");
		Serial.println("**Server Mode**");
		
		WiFi.softAP(ssid.c_str(), pass.c_str());
    Serial.print("AP SSID: ");
    Serial.print(ssid);
    Serial.print(" PASS: ");
    Serial.println(pass);
    Serial.print("IP Address: ");
    Serial.println(WiFi.softAPIP());
	}
 
	// Web server setting
  server.on("/", HTTP_GET, RootGet);
	server.on("/", HTTP_POST, RootPost);
	server.on("/start/", SetStart);
	server.on("/stop/", SetStop);
	server.on("/fpause/", SetFPause);
	server.on("/internal/", SetInternal);
	server.on("/memory/", SetMemory);
	server.on("/mode0/", SetMode0);//animation
	server.on("/mode1/", SetMode1);
	server.on("/mode2/", SetMode2);
	server.on("/mode3/", SetMode3);
	server.on("/mode4/", SetMode4);
	server.on("/mode5/", SetMode5);
	server.on("/mode6/", SetMode6);
	server.on("/mode7/", SetMode7);
	server.on("/mode8/", SetMode8);
	server.on("/mode9/", SetMode9);
	server.on("/pattern0/", SetPattern0);
	server.on("/pattern1/", SetPattern1);
	server.on("/pattern2/", SetPattern2);
	server.on("/pattern3/", SetPattern3);
	server.on("/pattern4/", SetPattern4);
	server.on("/pattern5/", SetPattern5);
	server.on("/pattern6/", SetPattern6);
	server.on("/pattern7/", SetPattern7);
	server.on("/pattern8/", SetPattern8);
	server.on("/pattern9/", SetPattern9);
  server.on("/tsc/", SetTSC);
  server.begin();
  
   if (!MDNS.begin(chrssid)) {
      //ERROR MDNS responder      
    }
    else{
      //MDNS responder started
      MDNS.addService("http", "tcp", 80);      
   }
 Serial.println("Wifi-Init-End");
}

void loop() {
  
  server.handleClient();
   
}
