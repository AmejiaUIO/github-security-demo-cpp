// NOTE: This is a FAKE private key used only for demonstrating GitHub
// Secret Scanning. The base64 body is randomly generated garbage, not
// a real cryptographic key — it cannot be used to authenticate or
// decrypt anything. It matches the structural PEM format GitHub's
// scanner detects, without relying on any partner-validated checksum.

#ifndef CONFIG_H
#define CONFIG_H

#define FAKE_PRIVATE_KEY \
"-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEpAIBAAKCAQEA7X8k2mQ9vLpR3nJdY6wKtF4hB1cS8zN0aG5xU2pV7eD9qM3k\n" \
"L6yW4rT8jC1nB5vX0oP9sA2dF7gH3iK6mN8qR1tU4wY7zB0eC3fJ6lO9pS2vX5aD\n" \
"H8kM1nQ4rT7wZ0cF3iL6oR9uX2aD5gJ8mP1sV4yB7eH0kN3qT6wZ9cF2iL5oR8uX\n" \
"-----END RSA PRIVATE KEY-----"

#endif