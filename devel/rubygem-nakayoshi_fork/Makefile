PORTNAME=	nakayoshi_fork
PORTVERSION=	0.0.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Solves CoW friendly problem on MRI 2.2 and later
WWW=		https://github.com/ko1/nakayoshi_fork

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		gem

NO_ARCH=	yes

post-patch:
	@${CHMOD} -R o-w ${WRKSRC}/*

.include <bsd.port.mk>
