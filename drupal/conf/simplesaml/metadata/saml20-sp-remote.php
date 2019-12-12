<?php
/**
 * SAML 2.0 remote SP metadata for SimpleSAMLphp.
 *
 * See: https://simplesamlphp.org/docs/stable/simplesamlphp-reference-sp-remote
 */

$metadata['https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/metadata.php/default-sp'] = array (
  'entityid' => 'https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/metadata.php/default-sp',
  'contacts' => 
  array (
    0 => 
    array (
      'contactType' => 'technical',
      'givenName' => 'Administrator',
      'emailAddress' => 
      array (
        0 => 'simplesaml_admin@example.com',
      ),
    ),
  ),
  'metadata-set' => 'saml20-sp-remote',
  'AssertionConsumerService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 0,
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:browser-post',
      'Location' => 'https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp',
      'index' => 1,
    ),
    2 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Artifact',
      'Location' => 'https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/saml2-acs.php/default-sp',
      'index' => 2,
    ),
    3 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:1.0:profiles:artifact-01',
      'Location' => 'https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/saml1-acs.php/default-sp/artifact',
      'index' => 3,
    ),
  ),
  'SingleLogoutService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://pori.dev.wunder.io/simplesaml/module.php/saml/sp/saml2-logout.php/default-sp',
    ),
  ),
  'keys' => 
  array (
    0 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIETTCCArWgAwIBAgIJAJJyI2fNvUGNMA0GCSqGSIb3DQEBCwUAMD0xCzAJBgNVBAYTAkZJMQ0wCwYDVQQHDARQb3JpMQ0wCwYDVQQKDARQb3JpMRAwDgYDVQQDDAdwb3JpLmZpMB4XDTE5MTIxMDA2NTEyM1oXDTI5MTIwOTA2NTEyM1owPTELMAkGA1UEBhMCRkkxDTALBgNVBAcMBFBvcmkxDTALBgNVBAoMBFBvcmkxEDAOBgNVBAMMB3BvcmkuZmkwggGiMA0GCSqGSIb3DQEBAQUAA4IBjwAwggGKAoIBgQDU244aaYCBGggzacZtq0WIYIHZ/zJtO3iqmkvkxc6Yc0R4kgM+7v2OWvM5zs6f5c6Gh8ncxOkjwK2WMQ1OwO+zfE59YhcoauOgnscT1aPYkDp7yXv5o+sfwyp28X4S2y6qWQhY7djFaWKnqxWJ54iCyfoZdt9cRdueQpM44aA9wxlKAqO8MVceMvJ3czBbxK0Br25CIJLnw2VH5TJ7/NKkpMebp0Vy2ABSuPk32Ci6tjSboBsoVd5rNrZPh7yiJd5ICw5V0Jw9XHuUvKS7nBWyEAJgWEDHW3bK98zC6t0DVMPcjNtwFOm8+Nt/jkmHyFR3rLk8EO0w6Y7IX0JJ8+XjgD/kG3IdDviiT/Slqqxk9atKXpbzW2VXCCS1uqfgBtL9LPsAWcc+aMXWHjlEPPeqxBfjlE6VitZ/w2MZkZUL35cnKVZ/SD4QJOBWHQPhWTOlUEXPc0gwQD9InYZE/y7C/ZGUY4fGzvi4hSGWwCH1tRwDCkk3lPTY5cNgK9vzUWcCAwEAAaNQME4wHQYDVR0OBBYEFNoH9bEXzVz0OmD/qFTw54tiBt9BMB8GA1UdIwQYMBaAFNoH9bEXzVz0OmD/qFTw54tiBt9BMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQADggGBAFaZq8UwUwQhuJNSKq6ZfqS/jF18sVvO7VIsxfwsJ7e3SsClq9W3b2w6a6eDxDx63Gn4wazglJI+T6Ux5sQuUEE9am9z0C24258f98lGul6sby9Jy3S9ebtJhOWnlTWb8hJOo48HARpkMSONvvU/zzofDkLjzHOy/lCsr0vaQqiZZEPA+hewoTF7JepvsnM4fSlejmcvdUKYeFdEx+S/3oF33VOdR3G6xgmY2ESk5QKsJdwf/HMbcSyEgBwFP3lGCVs6ucTbzQbqs5JXFXvgUUmZPrFOuKRwx76NQIAYfp6FRKBA2ze1rPJ5AexghNKQqXlOszK8NCj6unxtDglnMBZfd781XTrmgtwEnsaMd/6+H0Mve25dEzGSb0i7bgJ6vTvGUUB/i8Q94MppFGPV0Mbl8c052dZOE/LFYUXwLLmlnqU3hJ8dGeudJZQIcXhKGofmFAIHFxLamcbD+M8LSSFarjhEmCU7XlvhCK9OTk9MevLyFVvgBkIv7R5bQNErQA==',
    ),
    1 => 
    array (
      'encryption' => true,
      'signing' => false,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIETTCCArWgAwIBAgIJAJJyI2fNvUGNMA0GCSqGSIb3DQEBCwUAMD0xCzAJBgNVBAYTAkZJMQ0wCwYDVQQHDARQb3JpMQ0wCwYDVQQKDARQb3JpMRAwDgYDVQQDDAdwb3JpLmZpMB4XDTE5MTIxMDA2NTEyM1oXDTI5MTIwOTA2NTEyM1owPTELMAkGA1UEBhMCRkkxDTALBgNVBAcMBFBvcmkxDTALBgNVBAoMBFBvcmkxEDAOBgNVBAMMB3BvcmkuZmkwggGiMA0GCSqGSIb3DQEBAQUAA4IBjwAwggGKAoIBgQDU244aaYCBGggzacZtq0WIYIHZ/zJtO3iqmkvkxc6Yc0R4kgM+7v2OWvM5zs6f5c6Gh8ncxOkjwK2WMQ1OwO+zfE59YhcoauOgnscT1aPYkDp7yXv5o+sfwyp28X4S2y6qWQhY7djFaWKnqxWJ54iCyfoZdt9cRdueQpM44aA9wxlKAqO8MVceMvJ3czBbxK0Br25CIJLnw2VH5TJ7/NKkpMebp0Vy2ABSuPk32Ci6tjSboBsoVd5rNrZPh7yiJd5ICw5V0Jw9XHuUvKS7nBWyEAJgWEDHW3bK98zC6t0DVMPcjNtwFOm8+Nt/jkmHyFR3rLk8EO0w6Y7IX0JJ8+XjgD/kG3IdDviiT/Slqqxk9atKXpbzW2VXCCS1uqfgBtL9LPsAWcc+aMXWHjlEPPeqxBfjlE6VitZ/w2MZkZUL35cnKVZ/SD4QJOBWHQPhWTOlUEXPc0gwQD9InYZE/y7C/ZGUY4fGzvi4hSGWwCH1tRwDCkk3lPTY5cNgK9vzUWcCAwEAAaNQME4wHQYDVR0OBBYEFNoH9bEXzVz0OmD/qFTw54tiBt9BMB8GA1UdIwQYMBaAFNoH9bEXzVz0OmD/qFTw54tiBt9BMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQELBQADggGBAFaZq8UwUwQhuJNSKq6ZfqS/jF18sVvO7VIsxfwsJ7e3SsClq9W3b2w6a6eDxDx63Gn4wazglJI+T6Ux5sQuUEE9am9z0C24258f98lGul6sby9Jy3S9ebtJhOWnlTWb8hJOo48HARpkMSONvvU/zzofDkLjzHOy/lCsr0vaQqiZZEPA+hewoTF7JepvsnM4fSlejmcvdUKYeFdEx+S/3oF33VOdR3G6xgmY2ESk5QKsJdwf/HMbcSyEgBwFP3lGCVs6ucTbzQbqs5JXFXvgUUmZPrFOuKRwx76NQIAYfp6FRKBA2ze1rPJ5AexghNKQqXlOszK8NCj6unxtDglnMBZfd781XTrmgtwEnsaMd/6+H0Mve25dEzGSb0i7bgJ6vTvGUUB/i8Q94MppFGPV0Mbl8c052dZOE/LFYUXwLLmlnqU3hJ8dGeudJZQIcXhKGofmFAIHFxLamcbD+M8LSSFarjhEmCU7XlvhCK9OTk9MevLyFVvgBkIv7R5bQNErQA==',
    ),
  ),
  'validate.authnrequest' => true,
);
