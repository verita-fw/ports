PORTNAME=	jekyll-sitemap
PORTVERSION=	1.4.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Automatically generate a sitemap.xml for Jekyll sites
WWW=		https://github.com/jekyll/jekyll-sitemap

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-jekyll>=3.7<5.0:www/rubygem-jekyll

USES=		gem shebangfix

NO_ARCH=	yes

SHEBANG_FILES=	script/*

.include <bsd.port.mk>
