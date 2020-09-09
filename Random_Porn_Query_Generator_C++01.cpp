#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {

cout << ("WELCOME TO RANDOM PORN QUERY GENERATOR! C++ Edition");
cout << ("\n");
cout << ("Hello, Pornbuff!");
cout << ("\n");
cout << ("\n");
cout << ("Written by Elsa Versailles, GNU General Public License v3.0");
cout << ("\n");
cout << ("|            |");
cout << ("\n");
cout << ("|            |");
cout << ("\n");
cout << ("Press ENTER to Generate Query \n \n");

//Category 1 dataset
srand(time(0));

string p1[103] = {"Popular With Women", "Verified", "Amateurs", "Verified Models", "Virtual Reality", "60FPS", "Amateur", "Anal", "Arab", "Asian", "Babe", "Babysitter", "BBW", "Behind The Scenes", "Big Ass", "Big Dick", "Big Tits", "Bisexual Male", "Blonde", "Blowjob", "Bondage", "Brazilian", "British", "Brunette", "Bukkake", "Cartoon", "Casting","Celebrity", "Closed Captions", "College", "Compilation", "Cosplay", "Creampie", "Cuckold", "Cumshot", "Czech", "Described Video", "Double Penetration", "Ebony", "Euro", "Exclusive", "Feet", "Female Orgasm", "Fetish", "Fingering", "Fisting", "French", "Funny", "Gangbang", "Gay", "German", "Handjob", "Hardcore" "HD Porn", "Hentai", "Indian", "Interactive", "Interracial", "Italian", "Japanese", "Korean", "Latina", "Lesbian", "Massage", "Masturbation", "Mature," "MILF", "Muscular Men", "Music", "Old/Young", "Orgy", "Parody", "Party", "Pissing", "Pornstar", "POV", "Public", "Pussy Licking", "Reality", "Red Head", "Role Play", "Romantic", "Rough Sex", "School", "Scissoring", "SFW", "Small Tits", "Smoking", "Solo Female", "Solo Male", "Squirt", "Step Fantasy", "Strap On", "Striptease", "Tattooed Women", "Teen", "Threesome", "Toys", "Trans Male", "Trans With Girl", "Trans With Guy", "Transgender","Verified Couples", "Vintage", "Webcam",};

//category 2 dataset

string p2[39] = {"Philippines/Pinay", "South Africa", "United States", "Ukraine/Ukranian", "Canada/Canadian", "United Kingdom", "France/French", "Argentina", "Netherlands", "Australia/Australian", "Poland/Polish", "Germany", "Sweden/Swedish", "Mexico/Mexican", "Italy/Italian","Spain/Spanish", "Brazil/Brazillian", "Japan/Japanesse", "India/Indian", "Russia/Russian", "Czech", "Algeria", "Morocco", "Sri Lanka/Sri Lankan", "Fiji", "Latvia", "Ethiopia", "Hongkong", "China/Chinese", "Korea/Korean", "Taiwan/Taiwanesse", "Greece/Greek", "Iceland", "Austria", "Cyprus","Belarus", "Columbia", "Bulgaria", "Finland",};

//Characteristics

string p3[8] = {"Big tits", "Petite", "Red head", "Black", "Tall", "Brunette", "White", "Small tits",};

//profession

string p4[12] = {"Cop", "Doctor", "Teacher", "Driver", "Instructor", "Student", "Mother", "Father", "Writer", "Pornstar", "Actor", "Actress",};

//Fetish

string p5[15] = {"Foot Fetish", "Glass Fetish", "Hair Fetish", "Pee Fetish", "Latex", "Navel", "Shoe Fetishism", "Underwear Fetishism", "Erotic Asphyxiation", "Stimming", "Looning", "Dendrophillia", "Clothing Fetishism", "Leather", "Adult Breastfeeding",};

//Action

string p6[11] = {"Hardcore", "Softcore", "3some", "Orgy", "Group sex", "Underwater sex", "Brutal", "kinky", "Gangbang", "BDSM", "Masturbation",};

//Random logics here!

cout << ("Resultant Query \n");
cout << ("|--------------|");
cout << "\n \n";
cout << ("Category: \n \n" + p1[rand() % 135]);
cout << "\n \n";
cout << ("Country: \n \n" + p2[rand() % 42]);
cout << "\n \n";
cout << ("Characteristics: \n \n" + p3[rand() % 11]);
cout << "\n \n";
cout << ("Profession: \n \n" + p4[rand() % 12]);
cout << "\n \n";
cout << ("Fetish: \n \n" + p5[rand() % 24]);
cout << "\n \n";
cout << ("Action: \n \n" + p6[rand() % 13]);
cout << "\n \n";
cout << ("|------------|");
cout << "\n \n";
cout << ("For documentation and support visit http://bit.ly/2honreb");
cout << "\n";
cout << ("Ver 2.0");
return 0;
}

