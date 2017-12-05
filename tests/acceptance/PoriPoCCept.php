<?php
$I = new WebGuy($scenario);	
$I->wantTo("Confirm that links exist");
$I->maximizeWindow();
$I->amOnPage('');
$I->seeInTitle("Pori.fi");

//Look for Logo
print "\nTest 1: Look for the Logo.\n\n";
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

print "\n";

$I->makeScreenshot('Initial Navigation');
