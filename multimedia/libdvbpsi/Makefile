PORTNAME=	libdvbpsi
DISTVERSION=	1.3.3
CATEGORIES=	multimedia
MASTER_SITES=	https://get.videolan.org/${PORTNAME}/${DISTVERSION}/ \
		https://download.videolan.org/pub/libdvbpsi/${DISTVERSION}/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Library for MPEG TS and DVB PSI tables decoding and generation
WWW=		https://www.videolan.org/developers/libdvbpsi.html

LICENSE=	LGPL21

OPTIONS_DEFINE=	DEBUG
INSTALL_TARGET=	install-strip

USES=		libtool pathfix tar:bzip2
#CFLAGS=	-Wno-tautological-constant-out-of-range-compare

GNU_CONFIGURE=	yes
DEBUG_CONFIGURE_ON=		--enable-debug
DEBUG_CONFIGURE_OFF=		--enable-release
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} 's/-Werror //' ${WRKSRC}/configure

do-test:
	@(cd ${WRKSRC}/misc && ./test_dr)

.include <bsd.port.mk>
