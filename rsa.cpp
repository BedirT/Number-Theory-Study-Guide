#include <iostream>
using namespace std;
const int maxN = 10000000;
bool isComposite[maxN];
vector<int> primes;
long decryptionKey = 0;

void sieve(){
	isComposite[0] = isComposite[1] = true; // Not in primes
	for (int i = 2; i * i < maxN; ++i)
		if (!isComposite[i]){
			primes.push_back(i);
			for(int j = i * i , j < maxN; j *= i)
				isComposite[j] = true;
		}
}

long gcd(long a, long b){
	if(b == 0) return a;
	else if(a > b) return gcd(a%b, b);
	else return gcd(b%a, a);
}

long chooseAnE(long phiNum){
	// It is really common to use 3, 5, 7 for E.
	// So I will just go with one of them
	int k = 2; long res = primes[k]; // 3
	while(gcd(res,phiNum) != 1)
		res = primes[++k];
	return res;
}

long findPhiOfN(long N){

}

void updateDecryptionKey(long e, long phiNum){
	for(long i = 0; i < phiNum; ++i){
		if((i * e) % phiNum == 0){
			decryptionKey = i;
			break;
		} 
	}
}

string encrypt() {
	cout << "Please Enter the Message which you want to encrypt";
	
	// Message to send
	string message; cin >> message;

	// Choosing first Prime P
	int randomPrimeP = primes[(rand() % (primes.size()-51)) + 50];
	
	// Choosing second Prime Q
	int randomPrimeQ = primes[(rand() % (primes.size()-101)) + 100];

	// N = P * Q
	long myN = randomPrimeP * randomPrimeQ;

	// phi(N) 
	long phiOfN = findPhiOfN(myN);

	// e (encryption key) is found
	long myEncKey = chooseAnE(phiOfN);

	// Since we found phi(N), lets find out decryption key before discarding phi(N)
	decryptionKey(myEncKey, phiOfN);

	// encryptedMessage init
	string encryptedMessage = "";

	for (int i = 0; i < message.size(); ++i)
		// using -> m[i]^e (mod N) - formula to find the encrypted version of the letter m[i]
		encryptedMessage += modPower(message[i], myEncKey, myN);

	// Now we can discard: P, Q, and phi(N) we just need N & e
	// And we publicize these... So that someone else can send
	// us message using out encryption key and N. Since we know our
	// decrytion key that we produced from these, we and only us
	// will be able to decrypt the message.

	return encryptedMessage;
}

string decrypt(){
	cout << "Please Enter the Message which you want to encrypt";
	
	// Message to send
	string message; cin >> message;
}

int main () {

	char input;
	while(true){
		cout << "Press:\n(1) For encrypt a message\n(2) For decrypt a message\nAnything else for exit\n";
		cin << input;
		if(input == '1') cout << "Encrypted message is:\n" << encrypt() << "\n\n";
		else if(input == '2') decrypt();
		else break
	}

}