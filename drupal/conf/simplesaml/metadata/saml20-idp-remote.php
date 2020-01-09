<?php
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
      'X509Certificate' => 'MIIC1jCCAb6gAwIBAgIQHZMVb7mJP4hMaEUguqrsBjANBgkqhkiG9w0BAQsFADAnMSUwIwYDVQQDExxBREZTIEVuY3J5cHRpb24gLSBmcy5wb3JpLmZpMB4XDTE5MTExMjAwNTgxN1oXDTIwMTExMTAwNTgxN1owJzElMCMGA1UEAxMcQURGUyBFbmNyeXB0aW9uIC0gZnMucG9yaS5maTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAJftRT4OdSXHxVmqcew/0vhIug20VxEE5v1prCou6wVfim8OMUPNrd7rCnxO7PXFN1HmOcxp+yzvp/SBbERFtiDo0AXFAo0vjDelX+yi6Y/tmHTC2qOV+VdsUhcdpI0hZaLVQvJdrAMQBvciM45IV/3rVRMNuIapfH98yg4h8iPAp42bTxL+IjpmSlVZdxKVmCoTC7LcierLAEUAIOzsb40/+u8zT7TrT6tywUrVwoeojMyKdIZJLnVewKV/OGbjLDuE97yIkYQcq4IBAQTKkloJ9c+Idb/1xmamzI9klzGzQhFrbR7OivMDqv9P4La/7VEtMw7ggAkVzxUucfMcVuMCAwEAATANBgkqhkiG9w0BAQsFAAOCAQEAXdiTsa7QVm0XCy9oNsxQJ9uRBtFZJv0Za2wQGmNYcUSS/YvggMwltM8jJS3e3Miw9LTLN5TPMoZP9CvYSduGCCcQkwjdwHyOl7xC7lydwRu+QOjUV3M8gdlwjpNYiZXJWLZwfcyTxWFVRY11PaMEMmXd+Ahu8yvO7Tnh4e2uIqcidUNCp9hXXvzJrkyc2XTbX8vO1qB8/a7shfhyDWUQ1KlI+LyVgbi8eIUv/+7Ny/bpHHXXEeV5MaE6TwgPNovAUBkNaGYxd4++eb6TJ3OinTnpQxlLklFDkuChmloWSifcb/hQVzjs/tK1jc1TsVL7882CdKwMUJa8FQS1u2whoQ==',
    ),
    1 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIC0DCCAbigAwIBAgIQWq7P5sv+QaBAJwTjNpQsOTANBgkqhkiG9w0BAQsFADAkMSIwIAYDVQQDExlBREZTIFNpZ25pbmcgLSBmcy5wb3JpLmZpMB4XDTE5MTExMjAwNTgxOFoXDTIwMTExMTAwNTgxOFowJDEiMCAGA1UEAxMZQURGUyBTaWduaW5nIC0gZnMucG9yaS5maTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAI3+LFdMbnl4N7fU+/KiFUtn99CFennJD5Wbblc9+X80rnRktnRhnS6reA+SQFb2QdcfHHiAzMFxbp+v7AJYSK+y6EyB079g15Dl/DWquoNvVnvNZX+CX6uH5tGdt99QNOCGCojREorXyDJXxNu/C/wr8sIH4rJrjYofknN7djYaTKrbEF5yfu37qq2YYcuGOYe9BbO9ohEl4hJp7ZDQLsdda1m6D0LBFti0Os899q3do0Zvs6XlGhl+eD3omIB1fCP+qIKpsw1y42ZCpkvJRVVFL7aFz5JaI5RDm1s1mRuhoOjMmSgxZByLG+oHCMunoF3TLTZc41cWCMiCSS4r5y8CAwEAATANBgkqhkiG9w0BAQsFAAOCAQEALKRXkPqTEEArkHx56n7lVL32k4MgZ8r4q2BOCjNNkMp9f6DWlPFkUm71HRj1NQDhbyvPv4TtpPoG5q1rOo1tw1aVz8BF/dmNgR2p4zOpMuauHUu+WJ7yWgR+ggVPaX++1SGUDcp/AVAKh27AXJ28CQ+J7NmLmJPH0cZilGIASLZjJxODohYMKK0o3dtw7TbpPJCh+b+/lRm8ZzmSk479CRzPzqEPWRag/8P6JVFm6FwUK0hJGAHtRExxzU2dSWcTfhXMiZLYA0hvUq6AMvZH0H0N+6STWTjHlSPcR8kegIOn79FzYakSoRanIfcgmWHXia8fPGmkTYFKxlNADTnG2Q==',
    ),
  ),
);
