PORTNAME=	paratype
PORTVERSION=	2.005
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	https://info.paratype.ru/wp-content/uploads/2019/07/
DISTFILES=	ptsans-1.zip \
		PTSansExpert.zip \
		ptserif.zip \
		ptserifexpert.zip \
		ptmono.zip

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ParaType font collection for the languages of Russia
WWW=		https://www.paratype.com/public/

LICENSE=	OFL11

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USES=		fonts zip

FONTNAME=	ParaType
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
