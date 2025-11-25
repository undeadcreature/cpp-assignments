// //A serial transmission line can transmit 960 characters per second. WAP that will calculate
// total time required to send a file if the file&#39;s size is given. (Check it for 400 MB file size)
#include <iostream>
using namespace std;
int main() {
    const int charactersPerSecond = 960;
    const int bytesPerCharacter = 1; // Assuming 1 character = 1 byte
    const int fileSizeMB = 400;
    const int bytesPerMB = 1024 * 1024;

    long long fileSizeBytes = static_cast<long long>(fileSizeMB) * bytesPerMB;

    long long totalCharacters = fileSizeBytes / bytesPerCharacter;

    double timeInSeconds = static_cast<double>(totalCharacters) / charactersPerSecond;
    int hours = static_cast<int>(timeInSeconds) / 3600;
    int minutes = (static_cast<int>(timeInSeconds) % 3600) / 60;
    int seconds = static_cast<int>(timeInSeconds) % 60;

    cout << "Total time required to send a " << fileSizeMB << " MB file: "
         << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}

//output:
//Total time required to send a 400 MB file: 1 hours, 12 minutes, 16 seconds.
