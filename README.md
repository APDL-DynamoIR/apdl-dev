# apdl-dev
APDL, the Application Provenance and Description Language.

UNDER DEVELOPMENT.  Please read the apdl-intro.pdf paper for an 
overview of the goals and rationale for APDL.  The "Reference Implementation" 
section on Page 8 relates to this repository.

The source files require Qt libraries to be installed, and provide 
in-process objects holding APDL data.  These values can then 
be serialized as a base32 character stream that can be saved in a file, 
included in a zipped folder, stored as an opaque binary value in 
a database or triplestore, or embedded in (say) XML documents.

This binary direct serialization is designed to be the focal method for sharing 
APDL data.  Other formats (like XML and RDF) will be supported if they behave 
in client-server and peer-to-peer scenarios similarly to binary serialization.


