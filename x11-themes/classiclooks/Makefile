PORTNAME=	classiclooks
DISTVERSION=	2.2.0
PORTREVISION=	1
CATEGORIES=	x11-themes
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	fbsd@opal.com
COMMENT=	Retro theme providing a consistent look for all standard GUI toolkits
WWW=		http://www.itgroup.ro/classiclooks

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	fontconfig>0:x11-fonts/fontconfig \
		gtk-murrine-engine>0:x11-themes/gtk-murrine-engine \
		qt5-style-plugins>0:x11-themes/qt5-style-plugins

USES=		shebangfix gnome zip
USE_GNOME=	gtk20

SHEBANG_REGEX=	00.[0-4]0
bash_CMD=	/bin/sh

EXTRACT_AFTER_ARGS=	-d ${DISTNAME}
NO_ARCH=	yes
NO_BUILD=	yes

EXTRADIRS=	TOOLS/SETUP

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/themes
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} "ClassicLooks*" ${STAGEDIR}${PREFIX}/share/themes
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/fonts/conf.avail ${STAGEDIR}${PREFIX}/etc/fonts/conf.d
	@${CP} ${STAGEDIR}${PREFIX}/share/themes/ClassicLooks/TOOLS/SETUP/lib/90-classiclooks_qt5fontfix.conf \
		${STAGEDIR}${PREFIX}/etc/fonts/conf.avail/90-classiclooks_qt5fontfix.conf
	@${RLN} ${STAGEDIR}${PREFIX}/etc/fonts/conf.avail/90-classiclooks_qt5fontfix.conf \
		${STAGEDIR}${PREFIX}/etc/fonts/conf.d/90-classiclooks_qt5fontfix.conf
	@cd ${STAGEDIR}${PREFIX}/share/themes/ClassicLooks && ${RM} -r ${EXTRADIRS}

.include <bsd.port.mk>
