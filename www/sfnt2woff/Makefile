PORTNAME=	sfnt2woff
PORTVERSION=	20091004
CATEGORIES=	www converters
MASTER_SITES=	https://BSDforge.com/projects/source/www/sfnt2woff/
DISTNAME=	woff-code-latest

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Convert TTF/OTF fonts to WOFF web embeddable format and back
WWW=		http://people.mozilla.org/~jkew/woff/

LICENSE=	GPLv2 LGPL21 MPL11
LICENSE_COMB=	multi

DEPRECATED=	Superseded by WOFF 2.0, please consider using devel/woff2
EXPIRATION_DATE=2023-10-31

NO_WRKSUBDIR=	yes
USES=		gmake zip

PLIST_FILES=	bin/sfnt2woff bin/woff2sfnt

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sfnt2woff ${WRKSRC}/woff2sfnt \
		 ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
