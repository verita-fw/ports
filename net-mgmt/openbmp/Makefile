PORTNAME=	openbmp
DISTVERSIONPREFIX=	v
DISTVERSION=	0.14.0
PORTREVISION=	12
CATEGORIES=	net-mgmt

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	OpenBMP Server Collector
WWW=		https://github.com/OpenBMP/openbmp

LICENSE=	EPL
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/include/boost/exception/all.hpp:devel/boost-libs
LIB_DEPENDS=	librdkafka.so:net/librdkafka \
				libsasl2.so:security/cyrus-sasl2 \
				libyaml-cpp.so:devel/yaml-cpp

USES=		cmake compiler:c++11-lang ssl
USE_GITHUB=	yes
GH_ACCOUNT=	OpenBMP

.include <bsd.port.mk>
