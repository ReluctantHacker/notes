# Encryptions method (list according to history)
🏺 Classical (Ancient & Pre-Modern)
- Caesar Cipher (Shift Cipher): Letters shifted by a fixed number. Used by Julius Caesar.
- Substitution Cipher: Each letter replaced with another (e.g., Atbash in Hebrew texts).
- Transposition Cipher: Rearranging letters without changing them (e.g., rail fence cipher).
- Polyalphabetic Cipher (Vigenère): Uses multiple substitution alphabets to resist frequency analysis.
- Playfair Cipher: Encrypts digraphs (pairs of letters) instead of single letters.
- Homophonic Substitution: Maps one plaintext symbol to multiple ciphertext symbols to obscure frequency.

⚙️ Mechanical & Electromechanical Era (19th–20th Century)
- Jefferson Disk / Bazeries Cylinder: Rotating disks with scrambled alphabets.
- Enigma Machine (WWII): German rotor-based cipher machine, famously broken at Bletchley Park.
- SIGABA & Purple Machines: Used by the US and Japan during WWII.
- Lorenz Cipher: German teleprinter cipher, cracked by British cryptanalysts.

💻 Modern Symmetric Encryption (Fast, Bulk Data)
- DES (Data Encryption Standard): 56-bit key, now obsolete due to brute-force vulnerability.
- Triple DES (3DES): Applies DES three times for stronger security.
- AES (Advanced Encryption Standard): Current global standard; secure and efficient.
- Blowfish / Twofish: Flexible key lengths, used in software applications.
- ChaCha20: Stream cipher, popular in mobile and VPNs for speed and security.
- RC4: Once widely used in SSL/TLS, now considered insecure.

🔑 Modern Asymmetric Encryption (Public/Private Keys)
- RSA: Based on factoring large integers; widely used in SSL/TLS, email encryption.
- Diffie–Hellman Key Exchange: First practical method for secure key exchange.
- Elliptic Curve Cryptography (ECC): Strong security with smaller keys; used in mobile, IoT.
- DSA (Digital Signature Algorithm): Used for authentication and integrity.

🧩 Hash Functions (Not Encryption, but Critical)
- MD5: Now broken, but historically used for checksums.
- SHA Family (SHA-1, SHA-2, SHA-3): Secure hashing for integrity, blockchain, password storage.
- RIPEMD, Whirlpool: Alternative cryptographic hash functions.

🌐 Hybrid Encryption
- TLS/SSL (HTTPS): Uses asymmetric keys to exchange symmetric session keys.
- PGP (Pretty Good Privacy): Combines symmetric encryption with public-key signatures for email.

🚀 Emerging & Post-Quantum
- Homomorphic Encryption: Allows computation on encrypted data without decryption (used in privacy-preserving cloud computing).
- Lattice-Based Cryptography: Candidate for post-quantum security.
- Multivariate Quadratic & Code-Based Schemes: Other quantum-resistant approaches.
- Quantum Key Distribution (QKD): Uses quantum mechanics to securely share keys.






# Simple Public–Private Key Example (Diffie–Hellman Style)

This document shows a **toy example** of public–private keys using small numbers,
followed by an explanation of how **the exact same math is used in practice**
with very large numbers.

---

## 1. What This Example Is

This is a **finite-field Diffie–Hellman–style construction**, based on the
**Discrete Logarithm Problem**.

The core formula is:

public = g^x mod p

- x → private key (secret)
- g, p → public parameters
- result → public key

---

## 2. Small-Number (Toy) Example — For Understanding

⚠️ This example is **not secure**.
It uses **tiny numbers** only so the math is easy to follow.

### Step 1: Public parameters

p = 11   (a small prime)
g = 3    (a generator)

These numbers are **public**.

---

### Step 2: Choose a private key

x = 7

This value is **secret**.

---

### Step 3: Compute the public key

y = g^x mod p
y = 3^7 mod 11

Calculation:

3^7 = 2187
2187 mod 11 = 9

✅ Public key = 9

---

### Step 4: Why this is easy to break

An attacker sees:

g = 3
p = 11
y = 9

They try all possible values of x:

3^1 mod 11 = 3
3^2 mod 11 = 9 ✅

Private key is found quickly.

---

## 3. Why This Example Is Insecure

The math is correct.
The **numbers are too small**.

Small p means:
- Few possibilities
- Brute-force is trivial

---

## 4. Real-World Version (Same Math, Huge Numbers)

✅ This is how the same math is used in practice.

### Public parameters

p = a 2048-bit prime number
g = a generator

### Private key

x = a randomly chosen large integer (hundreds of bits long)

### Public key

y = g^x mod p

---

## 5. Why the Real Version Is Secure

Because p is enormous:
- Trying all x values is impossible
- No known efficient algorithm can reverse the operation

This is the **Discrete Logarithm Problem**.

---

## 6. Key Insight

The toy example and the real system use the **exact same formula**:

public = g^private mod p

Only the **size of the numbers changes**.

---

## 7. Final Summary

- The math is real
- The example is simplified for learning
- Small numbers are insecure
- Large numbers make it secure
- This principle is used in real cryptographic systems today

The math stays the same — only the scale changes.
 
