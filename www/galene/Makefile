PORTNAME=	galene
DISTVERSION=	0.7.2
PORTREVISION=	2
CATEGORIES=	www net-im

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	The Galène videoconference server
WWW=		https://galene.org

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

USES=		go:modules

USE_GITHUB=	yes
GH_ACCOUNT=	jech
GH_TAGNAME=	7062ba100167d82808d982475880a588f0aa32bf

GH_TUPLE=	\
		at-wat:ebml-go:v0.17.0:at_wat_ebml_go/vendor/github.com/at-wat/ebml-go \
		golang-jwt:jwt:v4.5.0:golang_jwt_jwt_v4/vendor/github.com/golang-jwt/jwt/v4 \
		golang:crypto:v0.7.0:golang_crypto/vendor/golang.org/x/crypto \
		golang:net:v0.8.0:golang_net/vendor/golang.org/x/net \
		golang:sys:v0.6.0:golang_sys/vendor/golang.org/x/sys \
		google:uuid:v1.3.0:google_uuid/vendor/github.com/google/uuid \
		gorilla:websocket:v1.5.0:gorilla_websocket/vendor/github.com/gorilla/websocket \
		jech:cert:aca735647728:jech_cert/vendor/github.com/jech/cert \
		jech:samplebuilder:6cbba09fc1c9:jech_samplebuilder/vendor/github.com/jech/samplebuilder \
		pion:datachannel:v1.5.5:pion_datachannel/vendor/github.com/pion/datachannel \
		pion:dtls:v2.2.6:pion_dtls_v2/vendor/github.com/pion/dtls/v2 \
		pion:ice:v2.3.2:pion_ice_v2/vendor/github.com/pion/ice/v2 \
		pion:interceptor:v0.1.12:pion_interceptor/vendor/github.com/pion/interceptor \
		pion:logging:v0.2.2:pion_logging/vendor/github.com/pion/logging \
		pion:mdns:v0.0.7:pion_mdns/vendor/github.com/pion/mdns \
		pion:randutil:v0.1.0:pion_randutil/vendor/github.com/pion/randutil \
		pion:rtcp:v1.2.10:pion_rtcp/vendor/github.com/pion/rtcp \
		pion:rtp:d62c6716b99a:pion_rtp/vendor/github.com/pion/rtp \
		pion:sctp:v1.8.6:pion_sctp/vendor/github.com/pion/sctp \
		pion:sdp:v3.0.6:pion_sdp_v3/vendor/github.com/pion/sdp/v3 \
		pion:srtp:v2.0.12:pion_srtp_v2/vendor/github.com/pion/srtp/v2 \
		pion:stun:v0.4.0:pion_stun/vendor/github.com/pion/stun \
		pion:transport:v2.0.2:pion_transport_v2/vendor/github.com/pion/transport/v2 \
		pion:turn:v2.1.0:pion_turn_v2/vendor/github.com/pion/turn/v2 \
		pion:udp:v2.0.1:pion_udp_v2/vendor/github.com/pion/udp/v2 \
		pion:webrtc:v3.1.59:pion_webrtc_v3/vendor/github.com/pion/webrtc/v3

CGO_ENABLED=	0

PORTDOCS=	README README.FRONTEND README.PROTOCOL

OPTIONS_DEFINE=	DOCS

USE_RC_SUBR=	${PORTNAME}

USERS=	${PORTNAME}
GROUPS=	${PORTNAME}

SUB_LIST=	USERS="${USERS}" GROUPS="${GROUPS}"
PLIST_SUB=	USERS="${USERS}" GROUPS="${GROUPS}"

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	cd ${WRKSRC}/static ; ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}/var/db/galene/recordings \
		${STAGEDIR}/var/db/galene/data \
		${STAGEDIR}/var/db/galene/groups

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}; ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
