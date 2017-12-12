# Number Theory Study Guide
---
Since I had hard time understanding Number theory topics from both my lectures and my book, I decided to make a study guide and add every source that I use to understand the topics. I was just going to make a blog post, but decided that repository would be more beneficial since everyone can contribute and it will be more dynamic this way...

### Topic 1: Preliminaries
It is preliminaries... I didn't really study here because I already knew the topics from my previous classes, but I will try to put some useful sources here.

Basically topics here are just proof systems and how to do proof properly in Math.

- Will put something about Basic Induction :)
- Will put something about Strong Induction :)
- Binomial Theorem

The book that I am working on, just passed over these topics so you don't really have to work deeply on them. Knowing how to use induction would be beneficial though (more like neccesity :) ). I don't think we will cover other proof methods like deductions etc. in this course, so Induction will be assumed as default proof solving concept.

### Topic 2: Divisibility Theory in the Integers
#### The Division Algorithm
This really is too basic... Literaly... 

I will just put the definition for "the Division Algorithm" and you will see what I mean:
**Theorem** Given integers a, b with b > 0 there exist some unique integers q and r such that,
a = qb + r where 0 <= r < b... Really...

#### The Greatest Common Divisor (GCD)
I used the book for the concept I believe. It is an easy topic, but it might be tricky if you are not using calculator and the numbers are enormous.

#### Euclidean Algorithm to find GCD
This is an algorithm to solve GCD problems. Basically, (at least in the book that I am studying) this is the way we approach to almost any gcd problems in hand.

#### Diophantine Equations
Fancy name,

#### The Least Common Multiple (LCM)


### Topic 3: Primes and Prime Distibutions

#### Fundamental Theorem of Arithmetic

#### Sieve of Erotosthenes

#### The Goldbach Conjecture

### Topic 4: The Theory on Congruences

- [Congurences and Fermat's Little Theorem - DLBmaths](https://www.youtube.com/watch?v=QgPfagOgOAc)
- [Chinese Remainder Theorem](https://www.youtube.com/watch?v=ru7mWZJlRQg)

### Topic 5: Fermat's Theorem

#### Fermat's Decomposition
[Fermat's decomposition - DLBmaths](https://www.youtube.com/watch?v=0a6R8qPZCk4) Beautiful video that explains what Fermat's decomposition is, with example questions. I love the guy who creates these videos (I already put couple videos of him for the previous chapters.) ENJOY!

This topic is not that hard, so just this video should be enough for understanding the topic. A little practice and you will be set for your exam...

#### Fermat's Little Theorem

[Video - Socratica](https://www.youtube.com/watch?v=w0ZQvZLx2KA) *

[Video - Maths with Jay](https://www.youtube.com/watch?v=pMA-dD-KCWM)

[Video (Visualization) - Khan Academy Labs](https://www.youtube.com/watch?v=OoQ16YCYksw)

[Practice questions and answers](http://www.math.cmu.edu/~mlavrov/arml/15-16/number-theory-09-27-15-solutions.pdf)

### Topic 6: Number Theoretic Functions

Even though they are easy to understand functions, calculations and problems might be difficult & tricky to process.

#### Tau Function
[Video Explanation (Explains both Tau and Sigma Functions) - Dustin Jones](https://www.youtube.com/watch?v=DcJxt7oD-_I)

#### Sigma Function
[Video Explanation (Explains both Tau and Sigma Functions) - Dustin Jones](https://www.youtube.com/watch?v=DcJxt7oD-_I) (Also concepts for **Sigma* Function**, **Proper divisors**, **Perfect Numbers**, **Deficiant Numbers**, **Abundunt Numbers**, **Amicable Pairs** introduced)

#### Euler's Phi Function
[Euler's Phi Function - Dustin Jones](https://www.youtube.com/watch?v=QbsWEVcjJy0)

[Euler's totient function | Journey into cryptography - Khan Academy](https://www.youtube.com/watch?v=qa_hksAzpSg) - Explains what is phi function really good. Not going into calculations and stuff, basic idea is covered though.

#### Mobius Function


#### Hensel's Lemma
This is not covered in this topic, but we learned it in this chapter, so I will just include it here. [Hensel's Lemma](http://www.cs.uleth.ca/~yazdani/courses/2011-2012/math3461/Hensel_sample.pdf)

### Topic 7: Euler's Generalization of Fermat's Theorem

### Topic 10: Cryptography

#### Ceasar Cipher

Ceasar Cipher is I guess one of the easiest crytography method. We only need a message and a key that will represent the shift value for our alphabet. So if I choose 2 as my shifting key, then all letters will shift by 2 (mod 26) - *Since we have 26 letters in English Alphabet*. So **A** will become A, B, **C** and **B** will be B, C, **D** if we apply this to every letter in the alphabet:

| A    | B    | C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y     | Z     |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ----- | ----- |
| C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y    | Z    | **A** | **B** |

And as you can see at the end (since I have mod 26) I included the numbers at the beginning lets say index 0 - and index 1 , which are **A** and **B**. I can convert any text into my encrypted message and vice versa, with this table. There is no public thing in this algorithm, only the message will be public, since we didn't use anything other then message and the key that should be obvious :smile:. And the biggest problem with this cipher is, even though without a computer (If we have it we don't even need to know the key, we can try all 26 shifts) the property of languages has the most frequent letter used. If we know this then we can easily count the letter used the most and find the key...

- **Public:** Encrypted Message
- **Private:** Key

If you are still confused, here is a short beautiful video from KhanAcademy (as usual) that explains: [The Ceaser Cipher](https://www.youtube.com/watch?v=sMOZf4GN3oc)

**IMPORTANT NOTE** This method that I explain is called Ceasar Cipher, however in the book that I am working from, this cipher has initial key value of **3**. I believe it comes from Ceasar since he was the one who uses this. But most of the other sources are using keys to represent the shift, so if there is no key given, and they want you to decipher some text with Ceasar Cipher, you may assume that the key is **3**.

#### Vigenere Cipher

Vigenere is again an easy ciphering method, more secure then Ceasar Cipher, but still vulnerable. This time we have a key as string instead of one letter or one number. To our message, we will add the repeting key and the result will be our encrypted message. With this way we will avoid the problem of frequency in the Ceasar Cipher. So how is it happening: Let's say that we have the key: **BEST**. And my message is **FOCUS MONKEY**. Since I have 4 letters key and 11 letters message, obviously I cannot use my key by itself. What do I do is, as I mentioned before, I just add my key to itself as long as it is shorter than my message. So: **BESTBESTBEST**, this is 12. Since it is longer than my message I am done. I will use the same logic as before for adding up the values. If you know a bit about Computers (not gaming wise, like legit computer stuff :slightly_smiling_face:) then you probably know ASCII table. This will be same logic, we can use some kind of table to convert letters to the others. This table is same for every one, we just add up the alphabetical values in mod 26 as before. So since **A** is the first letter it has the value of **00**, and since **B** is the second it will have the value of **1**… So table will be like this then:

| A    | B    | C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y    | Z    |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 10   | 11   | 12   | 13   | 14   | 15   | 16   | 17   | 18   | 19   | 20   | 21   | 22   | 23   | 24   | 25   |

I will be using this table to encrypt my message then ? Yes… We have **F** and **B** at the begining so **F = 5** and **B = 1** sum them, my decrypted message will start with value **6** which is **G**. I will not do the rest… (If you want you can do and put it here :smiley:)

Again a video if you still didn't get it: [Vigenere Cipher - MathAfterMath](https://www.youtube.com/watch?v=E352JJ8xv48&t=2s) - Not the best video quality… but works well

- **Public:** Encrypted Message
- **Private:** Key

#### Autokey Cipher

This is a method contrived from Vigenere, it is almost same with a small trick applied. This time we don't have a string key that repeats itself. Instead we have a short (or long, I never saw one) seed, maybe couple characters even one. And  this will be our only little secret. After using the seed, we will find out let's say the first character of the message. After seed ends, we will use our already encrypted part of the message to findout rest. For instance: Let's say our seed is **SA**, we will decipher first two character of our text which is lets say **TEEMV** with these two characters we already know secretly. So, **T** - **S** = 19 - 18 (mod 26) = 1 = **B**. We will go ahead: **E** - **A** = 4 - 0 (mod 26) = 4 = **E**. Now that we don't have any secret text left we will use the letters we already deciphered: **E** - **B** = 4 - 1 = 3 = **D**. Rest follows:

|   T   |   E   |   E   |   M   |   V   |
| :---: | :---: | :---: | :---: | :---: |
|   S   |   A   | **B** | **E** | **D** |
| **B** | **E** | **D** | **I** | **R** |

As you can see the result is marvelous :smile:.

I couldn't find any decent video about this so I am just going to include a good explanation if you want to read further [Crypto Corner - Autokey Cipher](http://crypto.interactive-maths.com/autokey-cipher.html)

#### Hill Cipher

This time it is a bit complex than the others, actually from now on it will not be as easy as before. We will devide our message to blocks to encrypt or decrypt. And we will be using a little bit of linear algebra here, matrix determinant. Anyway I think Jeff Suzuki explains this really well. Not that I cannot explain it with a little bit effort :sweat_smile: but I will let you watch him this time. 

[Jeff Suzuki - Hill Cipher](https://www.youtube.com/watch?v=4RhLNDqcjpA)

And if you have problem with taking inverse of matrix:

[Khan Academy - Taking Inverse of Matrix](https://www.youtube.com/watch?v=01c12NaUQDw)

#### One-time Pad Cipher

This one is the cipher that has most secrecy, and it cannot be improved more statistically… Basically you have random letters for all letters, you create a list and throw dices for every single letter and determine what other letter will represent that letter. Here is you video (Since there cannot be any complicated question for I am just going to include this short video for the main logic):

[Khan Academy - One-Time Pad Cipher](https://www.youtube.com/watch?v=FlIG3TvQCBQ)

#### The RSA Algorithm

Public RSA is the most important and popular public-key crypto system. Couple methods we need to know to use this algorithm are:

- Eulers Totient Function (phi function)
- Euler's Generalization of Fermat's Little Theorem
- Extended Euclidian Algorithm

For main source I will include a paper that my professor handed out, it is explaining really nice and smooth. So if you are ok with a bit of reading the paper should be enough by itself (Only 5 half pages with an example included)

[The Paper - The RSA Algorithm]() - Not included for now, just have physical version

###### Little Note: You don't have to watch all of the videos or follow all tutorials here. Choose the ones that works best for you, because most of them are doing the same thing with a bit different approaches.

[RSA Made Easy - Randell Heyman](https://www.youtube.com/watch?v=t5lACDDoQTk) - Really good explanation with everything included

[How RSA Works (No proof) - Anthony Vance](https://www.youtube.com/watch?v=Z8M2BTscoD4) - A nice video that goes over how to use formulas and general samples, not going deep into explanation (Actually none) but can be used to understand how to solve the questions, also used technique for Extended Euclidian is cool, first time I occured.

[RSA, tiny example - Eddie Woo](https://www.youtube.com/watch?v=4zahvcJ9glg) - Really simple explanation of how to solve the questions. Don't forget to watch both parts, 1st one is an example second one is mroe of an explanation

[How to Generate the keys - Eddie Woo](https://www.youtube.com/watch?v=oOcTVTpUsPQ) - Second Part of the one above

[Example of how to apply the Methods - Daniel Rees](https://www.youtube.com/watch?v=O-4_oS3G7MI&t=312s) - If you are still confused you can go ahead and watch people applying everything in a question. After that if you still didn't get it, watch it again with ambling this time.

**Lastly for fun :) If you want to learn how puclic key cryptography works watch this short video by ComputerPhile, (These guys are awesome) [Public Key Cryptography](https://www.youtube.com/watch?v=GSIDS_lvRv4)** 

- **Public:** Message, Encryption Key
- **Private:** Decryption Key

#### Knapsack Cryptosystem

blablabla some explanation:

##### Mechanics

**To Encrypt:**

**We already have access to the person's (that we will send message to) public information which includes series of numbers created … somehow (I will explain in decryption part). For the examples this set is let's say b = [47, 50 , 59, 32, 11]**

1. Convert the message to it's binary form. i.e.
   - The text we are trying to encrypt = **AHH**
   - Corresponding number and then binary number for each letter = **0 7 7** = **00000 00111 00111**
2. Since you have the binary form, create an integer using bits, one by one multiplied by $b_i$ for $i^{th}$ index in the letters binary form, sum all of them, then you will have only one integer. i.e. 
   - The letter we are trying to encrypt = **C**
   - Corresponding binary number for it **C** = **00010** 
   - Create the integer $m_i$ which will be one of the integers that you will send (Numbers :arrow_double_up:): **0 * 47 + 0 * 50 + 0 * 59 + 1 * 32 + 0 * 11 = 32**
3. Do this for every letter you have, and send this to the person, and no one else will be able to read it !

**To Decrypt:**

**We are going to need a Super Increasing Sequence, which has basic rule that every element of it is greater than sum of the element that has smaller index: $a_{i+1} < 2a_i$ - try to think a bit about this :slightly_smiling_face:(We will denote this as $$a$$). And we also will have an integer $N$ which will be denoting the modulus we use. So everyting will be smaller than $N$. Also $\sum a_i < N$. Last thing we choose will be $e$ such that $gcd(e, N) = 1$ which will help me create my public information. (Also will help me decrypt). All these are imoportant componants that we use to create our public information, since I will just go over Mechanics here, I will not explain more so check above description if you didn't do so :arrow_double_up:.** 

1. I have my list of letters (in the form of integers of course) = $M$. i.e.

   - $M$ = [74, 32, 12, 105, 34]

2. Derive $e^{-1}$ from $e$. We basically find inverse of e in modulo $N$. i.e.

   - $e\ *\ e^{-1}\equiv1\ (mod\ N)$ 

3. I will convert all $M_i$ by multiplying it to $e^{-1}$, and create a new list with it let's say $T$ i.e.

   - $T_i = M_i * e^{-1}\ (mod\ N)$

4. I now have the list $T$ that has $n$ elements in it **= [$T_1, T_2 … , T_n$]**, in this case $n$ is $5$.

5. We now will check $a$ and try to create numbers in $T$ one by one. i.e.

   - $a = [3, 5, 11, 20, 41]$ and $T_1 = 72$

   - Find the $x_i$'s in the equation and they will be our binary representation $72 = a_1 * x_1 + a_2 * x_2 + a_3 * x_3 + a_4 * x_4 + a_5 * x_5$ 

   - |    $a_i$    |     3     |  5   |  11  |  20  |  41  |
     | :---------: | :-------: | :--: | :--: | :--: | :--: |
     | $T_1 = 72$  | $x_1 = 0$ |  0   |  1   |  1   |  1   |
     | $T_2 = ...$ |    ...    | ...  | ...  | ...  | ...  |

6. Now that we have the binary values created, we will just convert them back to letters…

**NOTE** The size of $a$ doesn't need to be 5, so after you find the $T_i$'s in binary form, you might have 3 digit binary numbers… What you do is you put all $T_i$'s together and create blocks of 5 so that you can have your letters. i.e.

- $T = [110, 011, 101, 000, 010, 110, 100]$
- Our message will be: $110011101000010110100$
- Now we divide: $11001\ 11010\ 00010\ 11010\ 0$
- What about the 0 at the end ?? We add 1's instead of every missing element (Dummy text) so it will be $01111$. 

#### El Gamal Cryptosystem

Unlike Knapsack I guess I found a really good tutorial about this… so I don't have to type all those stuff YEY! If you don't understand (you specifically!) let me know by putting an issue [Right Here](https://github.com/BedirT/Number-Theory-Study-Guide/issues). 

Here is the link that you were searching for:

- [Jeff Suzuki - El Gamal Encryption](https://www.youtube.com/watch?v=pyirxbHuvOw) - Yes him again...
- [Daniel Rees - El Gamal](https://www.youtube.com/watch?v=Ex9sN5MorRs) - Really good sample, and explanation.

I really liked both videos so… Decide yourself. (second one :smile:) 

