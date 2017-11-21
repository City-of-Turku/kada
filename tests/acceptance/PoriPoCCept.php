<?php
/*
// @TODO: refactor to lookup navigation link texts (like in the PoriFooterCept.php)

$I = new WebGuy($scenario);	
$I->wantTo("Confirm that links exist");
$I->maximizeWindow();
$I->amOnPage('');
$I->seeInTitle("Pori.fi");

//Look for Logo
print "\nTest 1: Look for the Logo.\n\n";
#$I->seeElement('/html/body/div[1]/header/div[2]/div/div[1]/h1/a');
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[1]');

//Look for menu_item_first-level elements.
print "\nTest 2: Look for menu_item_first-level elements.\n\n";
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[1]/a');		//Lapsiperheet
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[2]/a');		//Maahanmuutajat
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[3]/a');		//Matkailijat
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[4]/a');		//Nuoret
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[5]/a');		//Seniorit
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[6]/a');		//Uudet Asukaat
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[7]/a');		//Vammaiset

//Text Size
print "\nTest 3: Text size.\n\n";
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[3]/span/span');
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[3]/span/span/span[1]');			//Little 'A'
$I->seeElement('//html/body/div[1]/header/div[2]/div/div[3]/span/span/span[2]');		//Big 'A'

//Language Switcher
print "\nTest 4: Language Switcher.\n\n";
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[2]/div/div/div/div/span');		//FI
$I->click('/html/body/div[1]/header/div[2]/div/div[2]/div/div/div/div/span');			//Click to open and show language choices.
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[2]/div/div/div/div/ul/li[1]/a');		//EN
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[2]/div/div/div/div/ul/li[3]/a');		//SV
$I->click('/html/body/div[1]/header/div[2]/div/div[2]/div/div/div/div/span');			//Click to close the language choices
$I->wait('1');

//////////////////////////////////////////////////////////////////////////////////////////////////////////
print "\nTest 5: Look for the menu_item_first-level elements and verify the 2nd level elements.\n\n";
//Mouseover the menu_item_first-level elements and verify that 2nd level elements exist.
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/a']);		//See and Click Asuminen ja ympäristö.
//Look and see if the dropdown elements for Asuminen ja ympäristö 2nd level menus appear in mouseover.
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/a');		//Asuminen
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/a');		//Jätehuolto
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/a');		//Eläimet
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/a');		//Kaupunkisuunnitelu
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/a');		//Liikenne
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/a');		//Rakentaminen
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/a');		//Ympäristö

//Asuminen 3rd-level links
print "\nTest 6: Look for the 3rd-level Asuminen ja ympäristö > Asuminen elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/a']);	//Asuminen
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[1]/a');		//Wait for the first 3rd-level to appear
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[1]/a'); 			//Asukastoiminta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[2]/a');			//Asumisterveys- ja huolto
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[3]/a');			//Asunnon hankkiminen
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[4]/a');			//Kaupunginosat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[5]/a');			//Matonpesupaikat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[6]/a');			//Nuohous
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[1]/ul/li[7]/a');			//Vesihuolto

//Mouse over Jätehuolto
print "\nTest 7: Look for the 3rd level Asuminen ja ympäristö > Jätehuolto elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[1]/a');			//Jäteneuvonta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[2]/a');			//Jätteiden lajittelu
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[3]/a');			//Kierrätyspisteet ja -keskukset
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[4]/a');			//Jätteet puutarhassa
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[5]/a');			//Jätteet kiinteistöllä
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[6]/a');			//Kompostointipuisto
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[7]/a');			//Vapaa-ajan asuntojen jätehuolto
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[8]/a');			//Jätteiden polttaminen
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[2]/ul/li[9]/a');			//Jätemaksu

//Mouse over Eläimet
print "\nTest 8: Look for the 3rd-level Asuminen ja ympäristö > Eläimet elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/ul/li[1]/a');			//Eläinlääkäri ja p. Porin alueella
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/ul/li[2]/a');			//Eläinsuojelu
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/ul/li[3]/a');			//Lemmikieläinten hautaus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/ul/li[4]/a');			//Lemmikieläinten ulkoilu
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[3]/ul/li[5]/a');			//Löytöeläimet

//Mouse over Kaupunkisunnittelu
print "\nTest 9: Look for the 3rd-level Asuminen ja ympäristö > Kaupunkisunnittelu elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[1]/a');			//Asemakaavoitus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[2]/a');			//Yleiskaavoitus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[3]/a');			//Ranta asemakaavoitus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[4]/a');			//Miten voin vaikuttaa kaavoit.
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[5]/a');			//Tietoa kaivoituksesta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[6]/a');			//Kartat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[4]/ul/li[7]/a');			//Kaivoituskatsaus

//Mouse over Liikkenne
print "\nTest 10: Look for the 3rd-level Asuminen ja ympäristö > Liikkenne elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[1]/a');			//Jalankulku ja pyöräily
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[2]/a');			//Joukkoliikkenne
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[3]/a');			//Kadut ja yleiset alueet
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[4]/a');			//Pysäkointi
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[5]/a');			//Pysäkoinninvalvonta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[5]/ul/li[6]/a');			//Veneily ja venepaikat

//Mouse over Rakentaminen
print "\nTest 11: Look for the 3rd-level Asuminen ja ympäristö > Rakentaminen elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/ul/li[1]/a');			//Rakennusvalvonta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/ul/li[2]/a');			//Rakennusjäte
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/ul/li[3]/a');			//Luvat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/ul/li[4]/a');			//Tontit
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[6]/ul/li[5]/a');			//Neuvoja ja ohjeita

//Mouse over Ympäristö
print "\nTest 12: Look for the 3rd-level Asuminen ja ympäristö > Ympäristö elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/ul/li[1]/a');			//Kuntalaisen ympäristöopas
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/ul/li[2]/a');			//Ympäristöluvat ja -valvonta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/ul/li[3]/a');			//Ilmanlaadun seuranta
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[1]/ul/li[7]/ul/li[4]/a');			//Luonnonsuojelu
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Now mouseover the Päivähoito ja koulutus elements.
print "\nTest 13: Look for the 2nd-level Päivähoito ja koulutus elements, including Alasivu.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[2]/a']);
//Look and see if the dropdown elements for Päivähoito ja koulutus appear in mouseover.
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[1]/a');		//Päivähoito ja esiopetus
$I->moveMouseOver('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[1]/a');
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[1]/ul/li/a');		//Alasivu
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[2]/a');		//Perusopetus ja lukiokoulutus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[3]/a');		//Ammattillinen koulutus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[4]/a');		//Ammattikorkeakoulut ja yliopistot
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[5]/a');		//Aikuiskoulutus ja opistot

print "\n Test 14: Look for the 3rd-level Päivähoito ja esiopetus & Aikuiskoulutus ja opistot elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[5]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[5]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[5]/ul/li[1]/a');		//Pori kansalaisopisto
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[2]/ul/li[5]/ul/li[2]/a');		//Otsolan kansalaisopisto
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//So mouseover the "Sosiali- ja terveyspalvelut" link. There are no 2nd level elements for this.
print "\nTest 15: Look for Sosiali- ja terveyspalvelut.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[3]/a']);
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[3]/a');
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Then do the Työ- ja yrityspalvelut elements.
print "\nTest 16: Look for the 2nd-level Työ- ja yrityspalvelut elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[4]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[1]/a');
//Look and see if the dropdown elements appear.  
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[1]/a');		//Työpaikat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[2]/a');		//Yrittäjälle
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[3]/a');		//Hankinnat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[4]/a');		//Tontit ja Toimitilat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[5]/a');		//Työllisyyspalvelut

//Look and see if the 3rd-level Työpaikat elements are found.
print "\nTest 17: Look for the 3rd-level Työ- ja yrityspalvelut > Työpaikat elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[1]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[1]/ul/li[1]/a');		//Avoiment työpaikat
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[1]/ul/li[2]/a');			//Sijaisrekrytointi
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[1]/ul/li[3]/a');			//Kesätyöpaikat	

//Look and see if the 3rd-level Yrittäjälle elements are found.
print "\nTest 18: Look for the 3rd-level Työ- ja yrityspalvelut > Yrittäjälle elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[2]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[2]/ul/li[1]/a');		//Työllistäminen tukeminen
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[2]/ul/li[2]/a');		//Verkostot mailmalla
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[2]/ul/li[3]/a');		//Yrityspalvelut

//Look and see if the 3rd-level Työ- ja yrityspalvelut > Hankinnat elements.
print "\nTest 19: Look for 3rd-level Työ- ja yrityspalvelut > Hankinnat elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[3]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[3]/ul/li[1]/a');		//Kilpailutus ja avoiment tarjous p.
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[3]/ul/li[2]/a');		//Tietoa hankinnoista
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[3]/ul/li[3]/a');		//Yhteishankinta asiat

//Mouse over Tontit ja toimitilat
print "\nTest 20: Look for 3rd-level Työ- ja yrityspalvelut > Tontit ja toimitilat.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[4]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[4]/ul/li[1]/a');		//Vapaat yritystontit
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[4]/ul/li[2]/a');		//Vapaat toimitilaat

//Mouse over Työllisyyspalvelut
print "\nTest 21: Look for 3rd-level Työ- ja yrityspalvelut > Työllisyyspalvelut.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[5]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[5]/ul/li[1]/a');		//Satakunnan TYP
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[5]/ul/li[2]/a');		//Nuorten työpaja
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[5]/ul/li[3]/a');		//Työllisyyspalvelu
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[4]/ul/li[5]/ul/li[4]/a');		//Kuntouttava työtoimenta
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Vapaa-aika ja kultuuri links to show on mouseover.
print "\nTest 22: Look for Vapaa-aika ja kultuuri elements.\n\n";
$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[5]/a']);
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/a');		//Kulttuuri

$I->moveMouseOver(['xpath' => '//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/a']);	//Mouse over Kultuuri to expose 3rd level elements
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/ul/li[1]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/ul/li[2]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/ul/li[3]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/ul/li[4]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/ul/li[5]/a');
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[1]/ul/li[6]/a');

$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[2]/a');					//Kirjastot
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[3]/a');					//Museot
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[4]/a');					//Porin teatteri

$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[5]/a');					//Liikunta ja harrastukset
$I->moveMouseOver('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[5]/a');					//Mouseover to open
$I->waitForElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[5]/ul/li[1]/a');		//Liikuntapaikat ja -alueet
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[5]/ul/li[2]/a');			//Ohjatut liikuntaryhmät
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[5]/ul/li[3]/a');			//Hinnasto ja välinevuokraus
$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[5]/ul/li[4]/a');			//Seuroille

$I->seeElement('//*[@id="block-menu-block-2"]/div/div/ul/li[5]/ul/li[6]/a');					//Nuorisotalot
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

print "\n";

$I->makeScreenshot('Initial Navigation');

*/