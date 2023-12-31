PORTNAME=	awffull
PORTVERSION=	3.10.2
PORTREVISION=	18
CATEGORIES?=	www
MASTER_SITES=	https://launchpadlibrarian.net/20395993/

MAINTAINER?=	ports@FreeBSD.org
COMMENT=	Web server log analysis tool forked from Webalizer
WWW=		http://www.stedee.id.au/awffull

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Abandonware, last release in 14+ years ago. Consider using www/awstats
EXPIRATION_DATE=2023-09-30

BUILD_DEPENDS=	${LOCALBASE}/share/fonts/bitstream-vera/Vera.ttf:x11-fonts/bitstream-vera
LIB_DEPENDS=	libgd.so:graphics/gd \
		libpng.so:graphics/png \
		libpcre.so:devel/pcre
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFLICTS?=	ja-awffull

FONTDEFAULT?=	${LOCALBASE}/share/fonts/bitstream-vera/VeraBd.ttf
FONTLABEL?=	${LOCALBASE}/share/fonts/bitstream-vera/Vera.ttf

OPTIONS_DEFINE=	DOCS EXAMPLES NLS
OPTIONS_SUB=	yes

USES=		gettext iconv localbase shebangfix
SHEBANG_FILES=	contrib/awffull_history_regen.pl \
		contrib/awffull_history_regen_german.pl

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-font-default=${FONTDEFAULT} \
		--with-font-label=${FONTLABEL} \
		--with-etcdir=${PREFIX}/etc

NLS_CONFIGURE_ENABLE=	nls

PORTDOCS=	*
PORTEXAMPLES=	*

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} \
		ChangeLog DNS.README PERFORMANCE_TIPS.txt \
		README* TODO country-codes.txt \
		${STAGEDIR}${DOCSDIR})

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/sample* ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/contrib/*.pl ${STAGEDIR}${EXAMPLESDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/flags
	${INSTALL_DATA} ${WRKSRC}/flags/README ${WRKSRC}/flags/*.png \
		${STAGEDIR}${EXAMPLESDIR}/flags

.include <bsd.port.mk>
