PORTNAME=	htop
DISTVERSION=	3.2.2
PORTREVISION=	1
CATEGORIES=	sysutils

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES=	fd62b7549533e9a0acc3fb6238f1462d380b8618.patch:-p1

MAINTAINER=	gaod@hychen.org
COMMENT=	Better top(1) - interactive process viewer
WWW=		https://htop.dev/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf compiler:c11 cpe libtool localbase ncurses pkgconfig \
		python:build shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	htop-dev

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-unicode

PLIST_FILES=	bin/htop \
		man/man1/htop.1.gz \
		share/applications/htop.desktop \
		share/icons/hicolor/scalable/apps/htop.svg \
		share/pixmaps/htop.png

OPTIONS_DEFINE=	LSOF

LSOF_RUN_DEPENDS=	lsof:sysutils/lsof

.include <bsd.port.mk>
