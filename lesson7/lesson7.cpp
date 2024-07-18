#include <iostream>
using namespace std;
enum  currency { dollar = 1, avro, rubl };
enum choices{ YeniOyun=1, OyunuDavametmek, Cixis };


int main()
{
	cout << "**********\ntask1**********" << endl;

	int manat;
	int currencyint = 0;
	currency valyuta;

	const double dollar1 = 1.7;
	const double avro1 = 1.85;
	const double rubl1 = 0.019;
	cout << "manati daxil edin:";
	cin >> manat;
	cout << "valyutani daxil edin:";
	cin >> currencyint;
	valyuta = (currency)currencyint;
	switch (valyuta)
	{
	case dollar:
		cout << "dollar:" << manat / dollar1;
		break;
	case avro:
		cout << "avro:" << manat / avro1;
		break;
	case rubl:
		cout << "rubl:" << manat / rubl1;
		break;
	default:
		break;
	}
	cout << "**********\ntask1**********" << endl;
	int a,b;
	cout << "a ni daxil edin:";
	cin >> a;
	cout << "b ni daxil edin:";
	cin >> b;
	if (a==0 ) {
		cout << "duz xett absis oxuna paraleldir";
	}
	else if (b == 0) {
		cout << "duz xett ordinat oxuna paraleldir";
	}
	else {
		cout << "duz xett absis ve ya ordinat oxuna paralel deyil";
	}
	cout << "**********\ntask2**********" << endl;

	int qiymet, qram;
	cout << "qiymet:";
	cin >> qiymet;
	cout << "qram:";
	cin >> qram;
	if (qram >= 100 && qram < 200) {
		cout << qiymet * 97 / 100;
	}
	else if (qram >= 200 && qram < 300) {
		cout << qiymet * 95 / 100;
	}
	else if (qram >= 300) {
		cout << qiymet * 93 / 100;
	}
	else {
		cout << qiymet;
	}
	cout << "***********\ntask3**********" << endl;

	double f;
	cout << "kesr eded daxil edin:";
	cin >> f;
	if (f > -1 && f < 1) {
		cout << "ededin tam hissesi var:";
	}
	else {
		cout << "ededin tam hissesi var:";
	}
	
	cout << "**********\ntask4**********" << endl;

	int gun, ay, il, saat, deqiqe;
	cout << "gun:";
	cin >> gun;
	cout << "ay:";
	cin >> ay;
	cout << "il:";
	cin >> il;
	cout << "saat:";
	cin >> saat;
	cout << "deqiqe:";
	cin >> deqiqe;
	if ((ay == 1 || ay == 3 || ay == 5 || ay == 7 || ay == 8 || ay == 10 || ay == 12) && gun >= 31) {
		cout << "tarix dogrudur.";
	}
	else if (ay == 2) {
		cout << "tarix dogrudur";

	}
	else if ((ay == 4 || ay == 6 || ay == 9 || ay == 11) && gun >= 30) {
		cout << "tarix dogrudur";
	}
	if (saat >= 23 && saat <= 1 && deqiqe >= 0 && deqiqe <= 60) {
		cout << "zaman dogrudur";
	}
	else {
		cout << "zaman sehvdir";
	}
	cout << "**********\ntask5**********" << endl;

	int d_ay, d_gun;
	cout << "doguldugunuz ay:";
	cin >> d_ay;
	cout<< "doguldugunuz gun:";
	cin>> d_gun;
	if ((d_ay == 12 && 22 <= d_gun && d_gun <= 31) || (d_ay == 1 && 1 <= d_gun && d_gun <= 19)) {
		cout << "sizin bürcünüz oğlaqdir";
	}
	else if ((d_ay == 1 && 20 <= d_gun && d_gun <= 31) || (d_ay == 2 && 1 <= d_gun && d_gun <= 18)) {
		cout << "sizin bürcünüz dolçadir";
	}
	else if ((d_ay == 2 && 19 <= d_gun && d_gun <= 28) || (d_ay == 3 && 1 <= d_gun && d_gun <= 20)) {
		cout << "sizin bürcünüz baliqdir";
	}
	else if ((d_ay == 3 && 21 <= d_gun && d_gun <= 31) || (d_ay == 4 && 1 <= d_gun && d_gun <= 19)) {
		cout << "sizin bürcünüz qoçdur";
	}
	else if ((d_ay == 4 && 20 <= d_gun && d_gun <= 30) || (d_ay == 5 && 1 <= d_gun && d_gun <= 20)) {
		cout << "sizin bürcünüz buğadir";
	}
	else if ((d_ay == 5 && 21 <= d_gun && d_gun <= 31) || (d_ay == 6 && 1 <= d_gun && d_gun <= 20)) {
		cout << "sizin bürcünüz ekizlerdir";
	}
	else if ((d_ay == 6 && 21 <= d_gun && d_gun <= 30) || (d_ay == 7 && 1 <= d_gun && d_gun <= 22)) {
		cout << "sizin bürcünüz xerçengdir";
	}
	else if ((d_ay == 7 && 23 <= d_gun && d_gun <= 31) || (d_ay == 8 && 1 <= d_gun && d_gun <= 22)) {
		cout << "sizin bürcünüz şirdir";
	}
	else if ((d_ay == 8 && 23 <= d_gun && d_gun <= 31) || (d_ay == 9 && 1 <= d_gun && d_gun <= 22)) {
		cout << "sizin bürcünüz qizdir";
	}
	else if ((d_ay == 9 && 23 <= d_gun && d_gun <= 30) || (d_ay == 10 && 1 <= d_gun && d_gun <= 22)) {
		cout << "sizin bürcünüz terezidir";
	}
	else if ((d_ay == 10 && 23 <= d_gun && d_gun <= 31) || (d_ay == 11 && 1 <= d_gun && d_gun <= 21)) {
		cout << "sizin bürcünüz eqrebdir";
	}
	else if ((d_ay == 11 && 22 <= d_gun && d_gun <= 30) || (d_ay == 12 && 1 <= d_gun && d_gun <= 21)) {
		cout << "sizin bürcünüz oxatandir";
	}
	cout << "**********\ntask1**********" << endl;

	int bilet;
	cout << "tramvay biletinin nomresini daxil edin(6reqemli):";
	cin >> bilet;
	int y_min = bilet / 100000 % 10;
	int o_min = bilet / 10000 % 10;
	int min = bilet / 1000 % 10;
	int yuz = bilet / 100 % 10;
	int on = bilet / 10 % 10;
	int tek = bilet % 10;
	if (y_min + o_min + min == yuz + on + tek) {
		cout << "xosbext reqemdir";
	}
	else {
		cout << "xosbext reqem deyil";
	}
	cout << "**********\ntask2**********" << endl;

	int choicesint = 0;
	choices menyu;
	cout << "1-Yeni oyun,2-Oyuna davam etmek,3-cixis";
	cin >> choicesint;
	menyu = (choices)choicesint;
	switch (menyu)
	{
	case YeniOyun:
		cout << "Yeni oyun";
		break;
	case OyunuDavametmek:
		cout << "OyunuDavametmek";
		break;
	case Cixis:
		cout << "Cixis";
		break;
	default:
		break;
	}
	cout << "**********\ntask3**********" << endl;

	int yas;
	int cins;
	cout << "yasinizi daxil edin:";
	cin >> yas;
	cout << "cinsinizi daxil edin(1-qadin,2-kisi)";
	cin >> cins;
	if (cins == 1 && yas >= 62) {
		cout << "teqaud yasinizdir";

	}
	else if (cins == 2 && yas >= 65) {
		cout << "teqaud yasinizdir";
	}
	else {
		cout << "teqaud yasiniz deyil";
	}
	cout << "**********\ntask4**********" << endl;

	int s, d;
	cout << "saat:";
	cin >> s;
	cout << "deqiqe:";
	cin >> d;
	if (s >= 6 && s<12 ) {
		cout << "sabahin xeyir";
	}
	else if (s >= 12 && s < 18 ) {
		cout << "gunortan xeyir";
	}
	else if (s >= 18 && s < 24) {
		cout << "axsamin xeyir";
	}
	else if(s >= 0 && s < 6 ) {
		cout << "gecen xeyre";
	}
    cout << "**********\ntask5**********" << endl;

	int year;
	cout << "ili daxil edin:";
	cin >> year;
	if (year % 400 == 0) {
		cout << "uzun ildir.";
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		cout << "uzun ildir.";
	}
	else {
		cout << "uzun il deyil.";
	}
	cout << "**********\ntask6***********" << endl;

	int ay1, gun1, il1;
	cout << "ay:";
	cin >> ay1;
	cout << "gun:";
	cin >> gun1;
	cout << "il:";
	cin >> il1;
	if (ay1 == 1 || ay1 == 3 || ay1 == 5 || ay1 == 7 || ay1 == 8 || ay1 == 10 || ay1 == 12 && gun1 <= 30) {
		cout << gun1 + 1 << " " << ay1 << " " << il1;
	}
	else if (ay1 == 1 || ay1 == 3 || ay1 == 5 || ay1 == 7 || ay1 == 8 || ay1 == 10 && gun1 == 31) {
		cout << 1 << " " << ay1+1 << " " << il1;
	}
	else if (ay1 == 12 && gun1 == 31) {
		cout << 1 << " " << 1 << " " << il1+1;
	}
	else if(ay1==2){
	if (il1 % 400 == 0 || il1 / 4 == 0 && il1 / 100 != 0) {
		if (ay1 == 2 && gun1 <= 28) {
			cout << gun1 + 1 << " " << ay1 << " " << il1;
		}
		else if (ay1 == 2 && gun1 <= 29) {
			cout << 1 << " " << ay1 + 1 << " " << il1;
		}
	}
	else {
		if (ay1 == 2 && gun1 <= 27) {
			cout << gun1 + 1 << " " << ay1 << " " << il1;
		}
		else if (ay1 == 2 && gun1 <= 28) {
			cout << 1 << " " << ay1+1 << " " << il1;
		}
	}
	}
	cout << "**********\ntask7**********" << endl;

	int boy, kilo;
	cout << "boyunuzu daxil edin";
	cin >> boy;
	cout << "kilonuzu daxil edin";
	cin >> kilo;
	if (boy - 110 > kilo) {
		cout << boy - 110 - kilo << "kq artmalisiniz";
	}
	else if (boy - 110 < kilo) {
		cout << kilo - boy - 110 << "kq atmalisiniz";
	}
	else {
		cout << "ideal kilodasiniz.";
	}
	cout << "**********\ntask8**********" << endl;

	int k;
	cout << "5 reqemli eded daxil edin";
	cin >> k;
	if (k < 10000 || k >= 100000) {
		cout << "sehv eded daxil etmisiniz";
		cin >> k;
	}
	int onminlik = k / 10000 % 10;
	int minlik = k / 1000 % 10;
	int yuzluk = k / 100 % 10;
	int onluq = k / 10 % 10;
	int teklik = k % 10;
	if ((onminlik == 2 || onminlik == 3 || onminlik == 5 || onminlik == 7) && (minlik == 2 || minlik == 3 || minlik == 5 || minlik == 7) && (yuzluk == 2 || yuzluk == 3 || yuzluk == 5 || yuzluk == 7) && (onluq == 2 || onluq == 3 || onluq == 5 || onluq == 7) && (teklik == 2 || teklik == 3 || teklik == 5 || teklik == 7)) {
		cout << "ededin butun reqemleri sadedir";
	}
	else {
		cout << "ededin reqemleri sade deyil";
	}
	cout << "**********\ntask9**********" << endl;

	int sira;
	cout << "eded daxil edin 0-35";
	cin >> sira;
    if (sira >= 0 && sira <= 8) {
		cout << "urek";
	}
	else if (sira >= 9 && sira <= 17) {
		cout << "pika";
	}
	else if (sira >= 18 && sira <= 26) {
		cout << "kerpic";
	}
	else if (sira >= 27 && sira <= 35) {
		cout << "xac";
	}
	if (sira == 0 || sira == 9 || sira == 18 || sira == 27) {
		cout << " 6";
	}
	else if (sira == 1 || sira == 10 || sira == 19 || sira == 28) {
		cout << " 7";
	}
	else if (sira == 2 || sira == 11 || sira == 20 || sira == 29) {
		cout << " 8";
	}
	else if (sira == 3 || sira == 12 || sira == 21 || sira == 30) {
		cout << " 9";
	}
	else if (sira == 4 || sira == 13 || sira == 22 || sira == 31) {
		cout << " 10";
	}
	else if (sira == 5 || sira == 14 || sira == 23 || sira == 32) {
		cout << " valet";
	}
	else if (sira == 6 || sira == 15 || sira == 24 || sira == 33) {
		cout << " dama";
	}
	else if (sira == 7 || sira == 16 || sira == 25 || sira == 34) {
		cout << " karol";
	}
	else if (sira == 8 || sira == 17 || sira == 26 || sira == 35) {
		cout << " tuz";
	}
	
}




	



