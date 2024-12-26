#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

int main()
{
    int score = 0;
    int userChoiceNum;
    int userChoiceNum1;
    int userChoiceNum2;
    int userChoiceNum3;
    string userChoiceString;

    cout << endl;
    cout << " :::=======       ===          :::  ===  === :::====  :::====  :::  === :::===  :::  === :::====  :::==== " << endl;
    cout << " ::: === ===        ===        :::  ===  === :::  === :::  === ::: ===  :::     :::  === :::  === :::  ===" << endl;
    cout << " === === ===          ===      ===  ===  === ===  === =======  ======    =====  ======== ===  === ======= " << endl;
    cout << " ===     ===        ===         ===========  ===  === === ===  === ===      === ===  === ===  === ===     " << endl;
    cout << " ===     ===      ===            ==== ====    ======  ===  === ===  === ======  ===  ===  ======  ===     " << endl;
    cout << endl;

    cout << "\033[31m"; // Set text color to red
    cout << "WELCOME TO DISTANT WORLDS QUIZ!" << endl;
    cout << "\033[32m" << endl; // Set text color to green
    cout << "Quiz consist of 10 Questions" << endl;
    cout << "Visit the Amaranthpedia for guidance -> https://amaranth-legacy.community/Scope:Distant_Worlds" << endl;
    cout << "\033[0m";
    this_thread::sleep_for(chrono::seconds(3));
    // Artificial Delay
    cout << " " << endl;
    cout << "Starting in 3..." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Starting in 2..." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Starting in 1..." << endl;
    this_thread::sleep_for(chrono::seconds(1));


    cout << "" << endl;
    cout << "<==========[Question 1]==========>" << endl;
    cout << "" << endl;

    cout << "What is the name of the Moon that Mark Cooper had spent 15 years prior to his death" << endl;
    cout << "1. Wolf Totem" << endl;
    cout << "2. Vishapakar" << endl;
    cout << "3. Emerald" << endl;
    cout << "4. Marie" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 3) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, Mark Cooper had crashed into a moon he named Emerald for its lush green forests." << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, Mark Cooper had crashed into a moon he named Emerald for its lush green forests" << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 2]==========>" << endl;
    cout << "" << endl;

    cout << "What is the previous name of The Palace generational megaship before capitulating to United Sol Command?. (Input name)" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceString;

    if (userChoiceString == "tiqqun" || userChoiceString == "TIQQUN" || userChoiceString == "Tiqqun") {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The previous name of The Palace megaship was - " << userChoiceString << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The previous name of The Palace megaship was Tiqqun." << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 3]==========>" << endl;
    cout << "" << endl;

    cout << "What is the Correct name of the Spaceship the crew in the novellas pioneered the Distant Worlds Expedition" << endl;
    cout << "1. CRS Gravitation" << endl;
    cout << "2. CRS Gravitron" << endl;
    cout << "3. CRS Voyager" << endl;
    cout << "4. CRS Graviton" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 4) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The Legendary ship was named CRS Graviton!." << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The ship name was CRS Graviton." << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 4]==========>" << endl;
    cout << "" << endl;

    cout << "What is the name of the Open Source Kernel Operation System used within QuantaTransistor Computers " << endl;
    cout << "1. Voles" << endl;
    cout << "2. Volex" << endl;
    cout << "3. StarOS" << endl;
    cout << "4. Linux" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 2) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, Volex Kernel is Open Source Operation System unifies classical transistors and quantum qubits hardware" << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The name of the Open Source Operation system kernel is Volex" << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 5]==========>" << endl;
    cout << "" << endl;

    cout << "What is the Numerical Designation of Milky Way in Galactic Numerical Designation System. (Input name)" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceString;

    if (userChoiceString == "lg:ffff:ffff:ffff" || userChoiceString == "LG:FFFF:FFFF:FFFF") {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The Numerical Designation of Milky Way is - " << userChoiceString << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The Numerical Designation of Milky Way is LG:FFFF:FFFF:FFFF" << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(2));

    cout << "" << endl;

    cout << "The Numerical Designation of Milky Way is: " << endl;
    cout << "1. Exclusive address to Milky Way" << endl;
    cout << "2. Reserved for Milky Way" << endl;
    cout << "3. Unique Address of Milky Way" << endl;
    cout << "4. for sale on the market" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 1 || userChoiceNum == 2 || userChoiceNum == 3) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The LG:FFFF:FFFF:FFFF Address is Unique Reserved for Milky Way and must remain Exclusive to it." << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The LG:FFFF:FFFF:FFFF Address is Unique Reserved for Milky Way and must remain Exclusive to it. " << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 6]==========>" << endl;
    cout << "" << endl;

    cout << "Gravity in the Universe of Distant Worlds is based on theory of:" << endl;
    cout << "1. General Relativity" << endl;
    cout << "2. ElectroGravity" << endl;
    cout << "3. Graviton Quantum Field" << endl;
    cout << "4. Newtonian Model" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 3) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, SuperString Quantum Field of Graviton is primary Gravitational Model in Distant Worlds." << endl;
        cout << "\033[0m";
        score += 25;
    }
    else if (userChoiceNum == 1) {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, General Relativity is not compatible with the fundamental theories on which Distant Worlds bases on." << endl;
        cout << "\033[0m";
        score -= 25;
    }
    else if (userChoiceNum == 2) {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, ElectroGravity is hinted about, but was dismissed from confirmation of Graviton's Existance." << endl;
        cout << "\033[0m";
        score -= 25;
    }
    else if (userChoiceNum == 4) {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, Distant Worlds is based on more complex SuperString model of Graviton Quantum Fields theory. " << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 7]==========>" << endl;
    cout << "" << endl;

    cout << "What is the Archangelic name of Milky Way Galaxy." << endl;
    cout << "1. Lehtaar" << endl;
    cout << "2. Sahuri" << endl;
    cout << "3. Po'kart" << endl;
    cout << "4. Silky Way" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 2) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The name of Milky Way in Archangelic is Sahuri, mentioned by Lotus in The Forgotten Planet Novella." << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The name of Milky Way in Archangelic is Sahuri, mentioned by Lotus in The Forgotten Planet Novella." << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 8]==========>" << endl;
    cout << "" << endl;

    cout << "In a far far future of Distant Worlds Universe, Which Amaranth Legacy Scope takes place. " << endl;
    cout << "1. Chomagaia" << endl;
    cout << "2. 13th Assemblage" << endl;
    cout << "3. Universe-6E" << endl;
    cout << "4. Vela Simulations" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 4) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, TheStellarExplorer's Vela Simulations scope takes place in same continuity of far-far future Distant Worlds" << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, TheStellarExplorer's Vela Simulations scope takes place in same continuity of far-far future Distant Worlds" << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 9]==========>" << endl;
    cout << "" << endl;

    cout << "Which Century the Distant Worlds novellas take place in. (Number)" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceString;

    if (userChoiceString == "24") {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The Distant Worlds Novellas take place in " << userChoiceString << "th Century" << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The previous name of The Palace megaship was Tiqqun." << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));

    cout << "" << endl;
    cout << "<==========[Question 10]==========>" << endl;
    cout << "" << endl;

    cout << "Who are the allies of Archangels? (Input multiple)" << endl;
    cout << "1. Athezians" << endl;
    cout << "2. Archdemons" << endl;
    cout << "3. SnowStorm Union" << endl;
    cout << "4. Tionislans" << endl;
    cout << "5. Ceres ShipYards" << endl;
    cout << "6. Gho'auld" << endl;
    cout << "7. Federal States" << endl;
    cout << "8. Humanity" << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum1;
    cout << " > ";
    cin >> userChoiceNum2;
    cout << " > ";
    cin >> userChoiceNum3;

    if (userChoiceNum1 == 1 && userChoiceNum2 == 4 && userChoiceNum3 == 8) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, The Athezians and Tioniaslans were in allied cooperation with Archangels, and Humanity later on carrying their Legacy" << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The Athezians and Tioniaslans were in allied cooperation with Archangels, and Humanity later on carrying their Legacy" << endl;
        cout << "\033[0m";
        score -= 25;
    }

    cout << "" << endl;

    cout << "From the List Above, Who were the enemies of the Angels " << endl;
    cout << "" << endl;
    cout << " > ";
    cin >> userChoiceNum;

    if (userChoiceNum == 2) {
        cout << "\033[32m" << endl; // Set text color to green
        cout << "Correct!, ArchDemons were considered rival civilistion to Archangels, thus their name" << endl;
        cout << "\033[0m";
        score += 25;
    }
    else {
        cout << "\033[31m"; // Set text color to red
        cout << "Incorrect!, The ArchDemon name hints their rivalry to Archangels " << endl;
        cout << "\033[0m";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(1));

    cout << " " << endl;
    cout << " " << endl;

    cout << "\033[33m" << endl; // Set text color to yellow
    cout << "Thank you for playing Distant Worlds Quiz, Your Final Score is: " << " " << score << endl;
    cout << "Wiki page is still in works so be sure to come back for new articles" << endl;
    cout << "Be Sure to check Silky Way and Vela's Simulations Scopes mentioned in this quiz!" << endl;
    cout << "Console automatically closes in 25 seconds..." << endl;
    this_thread::sleep_for(chrono::seconds(25));
    return 0;
}

