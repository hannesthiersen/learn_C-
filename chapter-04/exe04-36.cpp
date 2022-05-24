// Exercise 4.36: exe34-36.cpp

// The explosive growth of internet communications and data storage on
// internet-connected compputers has greatly increased privacy concerns. The
// field of cryptography is concerned with coding data to make it difficult
// (and hopefully -- with the most advanced schemes -- impossible) for
// unauthorized users to read. In this exercise you'll investigate a simple
// scheme for encrypting and decrypting data. A company that wants to send data
// over the internet has asked you to write a program that will encrypt it so
// that it may be transmitted more securely. All the data is transmitted as
// four-digit integers. Your application should read a four-digit integer
// entered by the user and encrypt it as follows: Replace each digit with the
// result of adding 7 to the digit and getting the remainder after dividing the
// new value by 10. Then swap the first digit with the third, and swap the
// second digit with the fourth. Then print the encrypted integer. Write a
// separate application that inputs an encrypted four-digit integer and
// decrypts it (by reversing the encryption scheme) to form the original
// number. [_Optional reading project:_ Research ``public key cryptography'' in
// general and the PGP (Pretty Good Privacy) specific public key scheme. You
// may also want to investigate the RSA scheme, which is widely used in
// industry-strength applications.]

#include <iostream>

using namespace std;

int encrypt(int message) {

    int pos1, pos2, pos3, pos4;

    pos1 = message / 1000;
    pos2 = message / 100 % 10;
    pos3 = message / 10 % 10;
    pos4 = message / 1 % 10;

    pos1 = (pos1 + 7) % 10;
    pos2 = (pos2 + 7) % 10;
    pos3 = (pos3 + 7) % 10;
    pos4 = (pos4 + 7) % 10;

    int secret = pos3*1000 + pos4*100 + pos1*10 + pos2;

    return secret;
}

int decrypt(int secret) {

    int pos1, pos2, pos3, pos4;

    pos1 = secret / 1000;
    pos2 = secret / 100 % 10;
    pos3 = secret / 10 % 10;
    pos4 = secret / 1 % 10;

    pos1 = (pos1 + 3) % 10;
    pos2 = (pos2 + 3) % 10;
    pos3 = (pos3 + 3) % 10;
    pos4 = (pos4 + 3) % 10;

    int message = pos3*1000 + pos4*100 + pos1*10 + pos2;

    return message;
}

int main() {

    int message = 1234;

    cout << "Message = "<< message << "\n";

    int secret = encrypt(message);

    cout << "Encrypted = " << secret << "\n";

    cout << "Decrypted = " << decrypt(secret) << "\n";

}
