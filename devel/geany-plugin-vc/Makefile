PORTNAME=	geany-plugin-vc
PORTVERSION=	${GEANY_VER}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}
WWW=		https://plugins.geany.org/geanyvc.html

LIB_DEPENDS=	libgtkspell3-3.so:textproc/gtkspell3 \
		libenchant-2.so:textproc/enchant2

OPTIONS_DEFINE=		GTKSPELL
OPTIONS_DEFAULT=	GTKSPELL

GTKSPELL_DESC=	Spell checking support via GtkSpell
GTKSPELL_CONFIGURE_ENABLE=	gtkspell

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
