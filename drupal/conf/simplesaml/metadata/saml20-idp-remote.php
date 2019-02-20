<?php
/**
 * SAML 2.0 remote IdP metadata for SimpleSAMLphp.
 *
 * Remember to remove the IdPs you don't use from this file.
 *
 * See: https://simplesamlphp.org/docs/stable/simplesamlphp-reference-idp-remote 
 */

$metadata['http://fs.pori.fi/adfs/services/trust'] = array (
  'entityid' => 'http://fs.pori.fi/adfs/services/trust',
  'contacts' => 
  array (
    0 => 
    array (
      'contactType' => 'support',
    ),
  ),
  'metadata-set' => 'saml20-idp-remote',
  'SingleSignOnService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://fs.pori.fi/adfs/ls/',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://fs.pori.fi/adfs/ls/',
    ),
  ),
  'SingleLogoutService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://fs.pori.fi/adfs/ls/',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://fs.pori.fi/adfs/ls/',
    ),
  ),
  'ArtifactResolutionService' => 
  array (
  ),
  'NameIDFormats' => 
  array (
    0 => 'urn:oasis:names:tc:SAML:1.1:nameid-format:emailAddress',
    1 => 'urn:oasis:names:tc:SAML:2.0:nameid-format:persistent',
    2 => 'urn:oasis:names:tc:SAML:2.0:nameid-format:transient',
  ),
  'keys' => 
  array (
    0 => 
    array (
      'encryption' => true,
      'signing' => false,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIC1jCCAb6gAwIBAgIQTB4KjSl+TJpKYnrAfjhHEDANBgkqhkiG9w0BAQsFADAnMSUwIwYDVQQDExxBREZTIEVuY3J5cHRpb24gLSBmcy5wb3JpLmZpMB4XDTE4MTIwMjAwMTI1NVoXDTE5MTIwMjAwMTI1NVowJzElMCMGA1UEAxMcQURGUyBFbmNyeXB0aW9uIC0gZnMucG9yaS5maTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKqSF4e1tJJ21t7oMjIN67tuhogtsoc1YeBj3YYLKR258pbk7Ai1cqZesEEai3KZjR0wgwZpqWXOMPNmzEOdxabdwqJ8pbV7gdTWA0aVdBRzqTKJUlqxVLlmx6UAUW4M8J1/sd4cDVCw5Dc3oQ4eG4w48kIPSCVrvvQ7zhO8b1b7y1qVd20l3bu8iWHg5ImrKa7D52ltuROsLtq4ARljJAF5yenKXIjHoZxhTrw6yckcbSzSkcJ6T9Q/8Z/cndZOWXpreE/u5MqT0HrsYCZ6xkrPhHON4a6pcWPU2o11jjcQx0ioVqlmR5Zg8n5lRddSH8/XrU+T9MgU090TT7Rd/lUCAwEAATANBgkqhkiG9w0BAQsFAAOCAQEAjqKXcPlF3s/3MgEbtgcjUB17BCN+v19HGrWY5SdUO+8GmbAIiruglncXmuwDQK4JdACB4yb7AnxfkkTseT+yMw3Xi5S2ftfy0063RyVgeyX0zwvLYc2OECtmfdZKGU3d1gTJXaQ//T3UgqKJaNF8lwKSP1wH00CL5yVbuOzFgP8Lg62fb6TRSBuDrKr1UzRgiMl53E5O6BkQN5oIlrNVO6zTYMZDqAg9qw1l4/enYHP6gs9E5dQ49PQrm1S05rvF2GMmqLCQnrWIPQ9moZDFV/Kq47e72PWQF1POc+xJkH35DH3gHg6M5SLy5D5kHDNvrsNIq9SGeBDcXSPaqbR22A==',
    ),
    1 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIC0DCCAbigAwIBAgIQWjxVtLHc85xIP3OCew1WqjANBgkqhkiG9w0BAQsFADAkMSIwIAYDVQQDExlBREZTIFNpZ25pbmcgLSBmcy5wb3JpLmZpMB4XDTE4MTIwMjAwMTI1NloXDTE5MTIwMjAwMTI1NlowJDEiMCAGA1UEAxMZQURGUyBTaWduaW5nIC0gZnMucG9yaS5maTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANLchyDHgXMvp95Q30+5QsPch2LADj55BTvg8sxfzogDCaq3oxHy8M1+cq5ZDrEpadYpg7BJmsSL+qsCS6xp6LF99JS2yrpZ3yiTl0HJgyeFj2VAia8QdwTakDfyYxORn8Hw7NIjOx+1IS1ju9gWDsiFJlxky4Gmw1PW+bXnGlosCgbPnNvU/l86DjX77EI38mri4dNSk6WL4fMgkF0PUykDhSktqGsSObUEVSnQH0AELmoWsjwocQ2PmGPH7KXYEaUdP2ngAaaiKcnCCza0nbf984zpJIzPkuHfLLoK73ov1CgbSi1QI2ZR8NBFn6nFHiaEmR8IFLBY3AycpYP88ZkCAwEAATANBgkqhkiG9w0BAQsFAAOCAQEAKWQy/pmrFdloV6v3tXOjDG9ujHBhXWN74ptLY5qz5Iww1ejwS8nQYTKgerKTZuOz6I1LcHWmQ3/bT3hNWA+25OWFGd+Yc7KM2j4342deaD0K9vDPISN3TCLhX6zOMviZqKB0Nl6GATwm7PFvGAM2awWPzSmUGCyllisn66VVkuHEU6Y+Qja+HXmsipefMvDHZk894ZDaN1X57AqKlAyJpq8Yu6QNqo2H4YgCF9KPb/vIGKRdlGwg8e0aTvumJo0z5HcNNaqFnGvcanE0VqPLo02mWuTB6JYSPr0vOS21gsF87NxQxIjUlYB383wW6y8SEG78wq0UNOp/+L4uFH3umg==',
    ),
  ),
);