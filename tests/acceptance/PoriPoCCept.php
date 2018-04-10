<?php

$I = new WebGuy($scenario);
$I->wantTo("Confirm that links exist");
$I->maximizeWindow();
$I->amOnPage('');
$I->seeInTitle("Pori.fi");

// Look for Logo
print "\nTest 1: Look for the Logo.\n\n";
$I->seeElement('/html/body/div[1]/header/div[2]/div/div[1]');

// Look for menu_item_first-level elements.
print "\nTest 2: Look for menu_item_first-level elements.\n\n";
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[1]/a');		// Lapsiperheet
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[2]/a');		// Maahanmuutajat
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[3]/a');		// Matkailijat
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[4]/a');		// Nuoret
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[5]/a');		// Seniorit
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[6]/a');		// Uudet Asukaat
$I->seeElement('/html/body/div[1]/header/div[1]/div/div/nav/div/ul/li[7]/a');		// Vammaiset

/*
// FIXME: This doesn't work, why?
// Language Switcher
print "\nTest 4: Language Switcher.\n\n";
$I->see('FI', '#block-locale-language .toggler');
$I->click('#block-locale-language .toggler');			// Click to open and show language choices.
$I->seeLink('EN', 'https://www.pori.fi/en/index.html');
*/

print "\n";

$I->makeScreenshot('Initial Navigation');
