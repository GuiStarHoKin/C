from _typeshed import Incomplete
from typing import Any

log: Any
SIGNATURE_HMAC_SHA1: str
SIGNATURE_HMAC_SHA256: str
SIGNATURE_HMAC_SHA512: str
SIGNATURE_HMAC: str
SIGNATURE_RSA_SHA1: str
SIGNATURE_RSA_SHA256: str
SIGNATURE_RSA_SHA512: str
SIGNATURE_RSA: str
SIGNATURE_PLAINTEXT: str
SIGNATURE_METHODS: Any
SIGNATURE_TYPE_AUTH_HEADER: str
SIGNATURE_TYPE_QUERY: str
SIGNATURE_TYPE_BODY: str
CONTENT_TYPE_FORM_URLENCODED: str

class Client:
    SIGNATURE_METHODS: Any
    @classmethod
    def register_signature_method(cls, method_name, method_callback) -> None: ...
    client_key: Any
    client_secret: Any
    resource_owner_key: Any
    resource_owner_secret: Any
    signature_method: Any
    signature_type: Any
    callback_uri: Any
    rsa_key: Any
    verifier: Any
    realm: Any
    encoding: Any
    decoding: Any
    nonce: Any
    timestamp: Any
    def __init__(
        self,
        client_key,
        client_secret: Incomplete | None = ...,
        resource_owner_key: Incomplete | None = ...,
        resource_owner_secret: Incomplete | None = ...,
        callback_uri: Incomplete | None = ...,
        signature_method=...,
        signature_type=...,
        rsa_key: Incomplete | None = ...,
        verifier: Incomplete | None = ...,
        realm: Incomplete | None = ...,
        encoding: str = ...,
        decoding: Incomplete | None = ...,
        nonce: Incomplete | None = ...,
        timestamp: Incomplete | None = ...,
    ): ...
    def get_oauth_signature(self, request): ...
    def get_oauth_params(self, request): ...
    def sign(
        self,
        uri,
        http_method: str = ...,
        body: Incomplete | None = ...,
        headers: Incomplete | None = ...,
        realm: Incomplete | None = ...,
    ): ...
