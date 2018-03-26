/* soapAdvancedSecurityServiceBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapAdvancedSecurityServiceBindingProxy_H
#define soapAdvancedSecurityServiceBindingProxy_H
#include "soapH.h"

class SOAP_CMAC AdvancedSecurityServiceBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'AdvancedSecurityServiceBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	AdvancedSecurityServiceBindingProxy();
	/// Constructor to use/share an engine state
	AdvancedSecurityServiceBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	AdvancedSecurityServiceBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	AdvancedSecurityServiceBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	AdvancedSecurityServiceBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	AdvancedSecurityServiceBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~AdvancedSecurityServiceBindingProxy();
	/// Initializer used by constructors
	virtual	void AdvancedSecurityServiceBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsrm__SequenceType *wsrm__Sequence, int __sizeAckRequested, struct wsrm__AckRequestedType *wsrm__AckRequested, int __sizeSequenceAcknowledgement, struct _wsrm__SequenceAcknowledgement *wsrm__SequenceAcknowledgement, struct wsrm__SequenceFaultType *wsrm__SequenceFault, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	/* virtual	const SOAP_ENV__Fault *soap_fault(); */
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse *ns1__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, ns1__GetServiceCapabilities, ns1__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse *ns1__GetServiceCapabilitiesResponse);

	/// Web service operation 'CreateRSAKeyPair' (returns error code or SOAP_OK)
	virtual	int CreateRSAKeyPair(_ns1__CreateRSAKeyPair *ns1__CreateRSAKeyPair, _ns1__CreateRSAKeyPairResponse *ns1__CreateRSAKeyPairResponse) { return this->CreateRSAKeyPair(NULL, NULL, ns1__CreateRSAKeyPair, ns1__CreateRSAKeyPairResponse); }
	virtual	int CreateRSAKeyPair(const char *endpoint, const char *soap_action, _ns1__CreateRSAKeyPair *ns1__CreateRSAKeyPair, _ns1__CreateRSAKeyPairResponse *ns1__CreateRSAKeyPairResponse);

	/// Web service operation 'GetKeyStatus' (returns error code or SOAP_OK)
	virtual	int GetKeyStatus(_ns1__GetKeyStatus *ns1__GetKeyStatus, _ns1__GetKeyStatusResponse *ns1__GetKeyStatusResponse) { return this->GetKeyStatus(NULL, NULL, ns1__GetKeyStatus, ns1__GetKeyStatusResponse); }
	virtual	int GetKeyStatus(const char *endpoint, const char *soap_action, _ns1__GetKeyStatus *ns1__GetKeyStatus, _ns1__GetKeyStatusResponse *ns1__GetKeyStatusResponse);

	/// Web service operation 'GetPrivateKeyStatus' (returns error code or SOAP_OK)
	virtual	int GetPrivateKeyStatus(_ns1__GetPrivateKeyStatus *ns1__GetPrivateKeyStatus, _ns1__GetPrivateKeyStatusResponse *ns1__GetPrivateKeyStatusResponse) { return this->GetPrivateKeyStatus(NULL, NULL, ns1__GetPrivateKeyStatus, ns1__GetPrivateKeyStatusResponse); }
	virtual	int GetPrivateKeyStatus(const char *endpoint, const char *soap_action, _ns1__GetPrivateKeyStatus *ns1__GetPrivateKeyStatus, _ns1__GetPrivateKeyStatusResponse *ns1__GetPrivateKeyStatusResponse);

	/// Web service operation 'GetAllKeys' (returns error code or SOAP_OK)
	virtual	int GetAllKeys(_ns1__GetAllKeys *ns1__GetAllKeys, _ns1__GetAllKeysResponse *ns1__GetAllKeysResponse) { return this->GetAllKeys(NULL, NULL, ns1__GetAllKeys, ns1__GetAllKeysResponse); }
	virtual	int GetAllKeys(const char *endpoint, const char *soap_action, _ns1__GetAllKeys *ns1__GetAllKeys, _ns1__GetAllKeysResponse *ns1__GetAllKeysResponse);

	/// Web service operation 'DeleteKey' (returns error code or SOAP_OK)
	virtual	int DeleteKey(_ns1__DeleteKey *ns1__DeleteKey, _ns1__DeleteKeyResponse *ns1__DeleteKeyResponse) { return this->DeleteKey(NULL, NULL, ns1__DeleteKey, ns1__DeleteKeyResponse); }
	virtual	int DeleteKey(const char *endpoint, const char *soap_action, _ns1__DeleteKey *ns1__DeleteKey, _ns1__DeleteKeyResponse *ns1__DeleteKeyResponse);

	/// Web service operation 'CreatePKCS10CSR' (returns error code or SOAP_OK)
	virtual	int CreatePKCS10CSR(_ns1__CreatePKCS10CSR *ns1__CreatePKCS10CSR, _ns1__CreatePKCS10CSRResponse *ns1__CreatePKCS10CSRResponse) { return this->CreatePKCS10CSR(NULL, NULL, ns1__CreatePKCS10CSR, ns1__CreatePKCS10CSRResponse); }
	virtual	int CreatePKCS10CSR(const char *endpoint, const char *soap_action, _ns1__CreatePKCS10CSR *ns1__CreatePKCS10CSR, _ns1__CreatePKCS10CSRResponse *ns1__CreatePKCS10CSRResponse);

	/// Web service operation 'CreateSelfSignedCertificate' (returns error code or SOAP_OK)
	virtual	int CreateSelfSignedCertificate(_ns1__CreateSelfSignedCertificate *ns1__CreateSelfSignedCertificate, _ns1__CreateSelfSignedCertificateResponse *ns1__CreateSelfSignedCertificateResponse) { return this->CreateSelfSignedCertificate(NULL, NULL, ns1__CreateSelfSignedCertificate, ns1__CreateSelfSignedCertificateResponse); }
	virtual	int CreateSelfSignedCertificate(const char *endpoint, const char *soap_action, _ns1__CreateSelfSignedCertificate *ns1__CreateSelfSignedCertificate, _ns1__CreateSelfSignedCertificateResponse *ns1__CreateSelfSignedCertificateResponse);

	/// Web service operation 'UploadCertificate' (returns error code or SOAP_OK)
	virtual	int UploadCertificate(_ns1__UploadCertificate *ns1__UploadCertificate, _ns1__UploadCertificateResponse *ns1__UploadCertificateResponse) { return this->UploadCertificate(NULL, NULL, ns1__UploadCertificate, ns1__UploadCertificateResponse); }
	virtual	int UploadCertificate(const char *endpoint, const char *soap_action, _ns1__UploadCertificate *ns1__UploadCertificate, _ns1__UploadCertificateResponse *ns1__UploadCertificateResponse);

	/// Web service operation 'GetCertificate' (returns error code or SOAP_OK)
	virtual	int GetCertificate(_ns1__GetCertificate *ns1__GetCertificate, _ns1__GetCertificateResponse *ns1__GetCertificateResponse) { return this->GetCertificate(NULL, NULL, ns1__GetCertificate, ns1__GetCertificateResponse); }
	virtual	int GetCertificate(const char *endpoint, const char *soap_action, _ns1__GetCertificate *ns1__GetCertificate, _ns1__GetCertificateResponse *ns1__GetCertificateResponse);

	/// Web service operation 'GetAllCertificates' (returns error code or SOAP_OK)
	virtual	int GetAllCertificates(_ns1__GetAllCertificates *ns1__GetAllCertificates, _ns1__GetAllCertificatesResponse *ns1__GetAllCertificatesResponse) { return this->GetAllCertificates(NULL, NULL, ns1__GetAllCertificates, ns1__GetAllCertificatesResponse); }
	virtual	int GetAllCertificates(const char *endpoint, const char *soap_action, _ns1__GetAllCertificates *ns1__GetAllCertificates, _ns1__GetAllCertificatesResponse *ns1__GetAllCertificatesResponse);

	/// Web service operation 'DeleteCertificate' (returns error code or SOAP_OK)
	virtual	int DeleteCertificate(_ns1__DeleteCertificate *ns1__DeleteCertificate, _ns1__DeleteCertificateResponse *ns1__DeleteCertificateResponse) { return this->DeleteCertificate(NULL, NULL, ns1__DeleteCertificate, ns1__DeleteCertificateResponse); }
	virtual	int DeleteCertificate(const char *endpoint, const char *soap_action, _ns1__DeleteCertificate *ns1__DeleteCertificate, _ns1__DeleteCertificateResponse *ns1__DeleteCertificateResponse);

	/// Web service operation 'CreateCertificationPath' (returns error code or SOAP_OK)
	virtual	int CreateCertificationPath(_ns1__CreateCertificationPath *ns1__CreateCertificationPath, _ns1__CreateCertificationPathResponse *ns1__CreateCertificationPathResponse) { return this->CreateCertificationPath(NULL, NULL, ns1__CreateCertificationPath, ns1__CreateCertificationPathResponse); }
	virtual	int CreateCertificationPath(const char *endpoint, const char *soap_action, _ns1__CreateCertificationPath *ns1__CreateCertificationPath, _ns1__CreateCertificationPathResponse *ns1__CreateCertificationPathResponse);

	/// Web service operation 'GetCertificationPath' (returns error code or SOAP_OK)
	virtual	int GetCertificationPath(_ns1__GetCertificationPath *ns1__GetCertificationPath, _ns1__GetCertificationPathResponse *ns1__GetCertificationPathResponse) { return this->GetCertificationPath(NULL, NULL, ns1__GetCertificationPath, ns1__GetCertificationPathResponse); }
	virtual	int GetCertificationPath(const char *endpoint, const char *soap_action, _ns1__GetCertificationPath *ns1__GetCertificationPath, _ns1__GetCertificationPathResponse *ns1__GetCertificationPathResponse);

	/// Web service operation 'GetAllCertificationPaths' (returns error code or SOAP_OK)
	virtual	int GetAllCertificationPaths(_ns1__GetAllCertificationPaths *ns1__GetAllCertificationPaths, _ns1__GetAllCertificationPathsResponse *ns1__GetAllCertificationPathsResponse) { return this->GetAllCertificationPaths(NULL, NULL, ns1__GetAllCertificationPaths, ns1__GetAllCertificationPathsResponse); }
	virtual	int GetAllCertificationPaths(const char *endpoint, const char *soap_action, _ns1__GetAllCertificationPaths *ns1__GetAllCertificationPaths, _ns1__GetAllCertificationPathsResponse *ns1__GetAllCertificationPathsResponse);

	/// Web service operation 'DeleteCertificationPath' (returns error code or SOAP_OK)
	virtual	int DeleteCertificationPath(_ns1__DeleteCertificationPath *ns1__DeleteCertificationPath, _ns1__DeleteCertificationPathResponse *ns1__DeleteCertificationPathResponse) { return this->DeleteCertificationPath(NULL, NULL, ns1__DeleteCertificationPath, ns1__DeleteCertificationPathResponse); }
	virtual	int DeleteCertificationPath(const char *endpoint, const char *soap_action, _ns1__DeleteCertificationPath *ns1__DeleteCertificationPath, _ns1__DeleteCertificationPathResponse *ns1__DeleteCertificationPathResponse);

	/// Web service operation 'AddServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int AddServerCertificateAssignment(_ns1__AddServerCertificateAssignment *ns1__AddServerCertificateAssignment, _ns1__AddServerCertificateAssignmentResponse *ns1__AddServerCertificateAssignmentResponse) { return this->AddServerCertificateAssignment(NULL, NULL, ns1__AddServerCertificateAssignment, ns1__AddServerCertificateAssignmentResponse); }
	virtual	int AddServerCertificateAssignment(const char *endpoint, const char *soap_action, _ns1__AddServerCertificateAssignment *ns1__AddServerCertificateAssignment, _ns1__AddServerCertificateAssignmentResponse *ns1__AddServerCertificateAssignmentResponse);

	/// Web service operation 'RemoveServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int RemoveServerCertificateAssignment(_ns1__RemoveServerCertificateAssignment *ns1__RemoveServerCertificateAssignment, _ns1__RemoveServerCertificateAssignmentResponse *ns1__RemoveServerCertificateAssignmentResponse) { return this->RemoveServerCertificateAssignment(NULL, NULL, ns1__RemoveServerCertificateAssignment, ns1__RemoveServerCertificateAssignmentResponse); }
	virtual	int RemoveServerCertificateAssignment(const char *endpoint, const char *soap_action, _ns1__RemoveServerCertificateAssignment *ns1__RemoveServerCertificateAssignment, _ns1__RemoveServerCertificateAssignmentResponse *ns1__RemoveServerCertificateAssignmentResponse);

	/// Web service operation 'ReplaceServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int ReplaceServerCertificateAssignment(_ns1__ReplaceServerCertificateAssignment *ns1__ReplaceServerCertificateAssignment, _ns1__ReplaceServerCertificateAssignmentResponse *ns1__ReplaceServerCertificateAssignmentResponse) { return this->ReplaceServerCertificateAssignment(NULL, NULL, ns1__ReplaceServerCertificateAssignment, ns1__ReplaceServerCertificateAssignmentResponse); }
	virtual	int ReplaceServerCertificateAssignment(const char *endpoint, const char *soap_action, _ns1__ReplaceServerCertificateAssignment *ns1__ReplaceServerCertificateAssignment, _ns1__ReplaceServerCertificateAssignmentResponse *ns1__ReplaceServerCertificateAssignmentResponse);

	/// Web service operation 'GetAssignedServerCertificates' (returns error code or SOAP_OK)
	virtual	int GetAssignedServerCertificates(_ns1__GetAssignedServerCertificates *ns1__GetAssignedServerCertificates, _ns1__GetAssignedServerCertificatesResponse *ns1__GetAssignedServerCertificatesResponse) { return this->GetAssignedServerCertificates(NULL, NULL, ns1__GetAssignedServerCertificates, ns1__GetAssignedServerCertificatesResponse); }
	virtual	int GetAssignedServerCertificates(const char *endpoint, const char *soap_action, _ns1__GetAssignedServerCertificates *ns1__GetAssignedServerCertificates, _ns1__GetAssignedServerCertificatesResponse *ns1__GetAssignedServerCertificatesResponse);
};
#endif