#include <iostream>
#include "music_system.h"
using namespace std;

// Language Menu
void showLanguageMenu() {
    cout << "\nSelect Language:\n";
    cout << "1. Hindi\n";
    cout << "2. Telugu\n";
    cout << "3. Tamil\n";
    cout << "0. Exit\n";
}

// Mood Menu
void showMoodMenu() {
    cout << "\nSelect Mood:\n";
    cout << "1. Happy\n";
    cout << "2. Sad\n";
    cout << "3. Romantic\n";
    cout << "4. Energetic\n";
    cout << "5. Devotional\n";
    cout << "6. Chill\n";
}

// Songs Logic
void showSongs(int lang, int mood) {

    cout << "\n--- Songs ---\n";

    if (lang == 1) {
        switch (mood) {
            case 1:
                cout << "Badtameez Dil\nGallan Goodiyaan\nLondon Thumakda\nBalam Pichkari\nNagada Sang Dhol\nAankh Marey\nKar Gayi Chull\nDil Dhadakne Do\n";
                break;
            case 2:
                cout << "Tum Hi Ho\nChanna Mereya\nTeri Mitti\nAe Dil Hai Mushkil\nJudaai\nPhir Bhi Tumko\nKabhi Alvida Na Kehna\nSoch Na Sake\n";
                break;
            case 3:
                cout << "Tujhe Kitna Chahne Lage\nRaataan Lambiyaan\nTera Ban Jaunga\nPehla Nasha\nTum Se Hi\nMere Naam Tu\nKal Ho Naa Ho\nDilbaro\n";
                break;
            case 4:
                cout << "Zinda\nSultan Title\nJai Jai Shivshankar\nKala Chashma\nDhan Te Nan\nSher Khul Gaye\nWar Title\nNaach Meri Rani\n";
                break;
            case 5:
                cout << "Vaishnav Jana To\nOm Namah Shivaya\nJai Ganesh\nAchyutam Keshavam\nRaghupati Raghav\nSatyam Shivam\nJai Ho\nMan Ki Shakti\n";
                break;
            case 6:
                cout << "Iktara\nTu Jaane Na\nKhaabon Ke Parindey\nMoh Moh Ke Dhaage\nTum Tak\nJab We Met OST\nSooraj Ki Bahon Mein\nBaat Cheet\n";
                break;
        }
    }

    else if (lang == 2) {
        switch (mood) {
            case 1:
                cout << "Samajavaragamana\nButtabomma\nSeeti Maar\nDayyam Dayyam\nThandaana\nRangamma Mangamma\nMass Maharaja\nNaa Ready\n";
                break;
            case 2:
                cout << "Ye Mantram Vesave\nEe Mazha\nManase Manase\nNee Navve\nNinne Ninne\nYenti Yenti\nKalasapaina\nAndham Neekai\n";
                break;
            case 3:
                cout << "Inkem Inkem\nYenti Yenti\nSaranga Dariya\nVachindamma\nPrema Kavali\nOo Antava\nNuvvu Nuvvu\nAa Ante\n";
                break;
            case 4:
                cout << "Naatu Naatu\nOo Bolega\nSrivalli\nPushpa Pushpa\nBimbisara Theme\nMass BGM\nDhakka Lakka\nRoar BGM\n";
                break;
            case 5:
                cout << "Annamayya\nGovinda Govinda\nSuprabhatam\nOm Namah Shivaya\nBhavani\nDurga Stotram\nSaraswathi\nJai Simha\n";
                break;
            case 6:
                cout << "Ye Mayan\nSita Ramam BGM\nMounam\nNee Kallalona\nMeka Suri\nPadi Padi OST\nAndham Neekai\nRa Ra Rakkamma\n";
                break;
        }
    }

    else if (lang == 3) {
        switch (mood) {
            case 1:
                cout << "Vaathi Coming\nRowdy Baby\nVerithanam\nKutti Story\nMarana Mass\nKaavaalaa\nAaluma Doluma\nKannaana Kanney\n";
                break;
            case 2:
                cout << "Nenjukulle\nMunbe Vaa\nThalli Pogathey\nVenmathi\nUyire\nMun Andhi\nKannamoochi\nIdhayam\n";
                break;
            case 3:
                cout << "VTV\nKannu Neja\nNee Paartha\nPutham Pudhu\nKadhal Sadugudu\nNenjil Nenjil\nAnbil Avan\nKaadhal Mannan\n";
                break;
            case 4:
                cout << "Simtaangaran\nBeast Mode\nAnnaatthe\nVera Maari\nInaindha Neram\nChella Kutti\nSinga Penne\nGaruda BGM\n";
                break;
            case 5:
                cout << "Kanda Sashti\nThirupugazh\nVel Vel\nOm Nama Sivaya\nMurugan\nAyyappa\nAmman\nPillayar\n";
                break;
            case 6:
                cout << "Mazhai Kuruvi\nVellai Pookal\nPoo Thedum\nOru Maalai\nThooriga\nUn Mela\nNaan Un\nManmadhan Ambu\n";
                break;
        }
    }

    cout << "\n-----------------------------\n";
}
