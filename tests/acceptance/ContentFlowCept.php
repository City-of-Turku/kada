<?php
$I = new WebGuy($scenario);
$I->wantTo('Find content');
$I->maximizeWindow();

$I->amOnPage('/');

$I->moveMouseOver('#block-menu-block-2 ul.menu a[href="/vapaa-aika-ja-kulttuuri"]');
$I->click('Kirjastot', '#block-menu-block-2 ul.menu');

$I->amOnPage('/vapaa-aika-ja-kulttuuri/kirjastot');
$I->see('Kirjastot', 'h1');