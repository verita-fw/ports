PORTNAME=	opengl
PORTVERSION=	0.10.0
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	graphics ruby
MASTER_SITES=	RG
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OpenGL wrapper for Ruby
WWW=		https://github.com/larskanis/opengl

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

USES=		gl gem
USE_GL=		glut

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400091 || ( ${OSVERSION} >= 1302507 && ${OSVERSION} < 1400000 ))
CONFIGURE_ARGS+=	--with-cflags="-Wno-error=incompatible-function-pointer-types"
.endif

.include <bsd.port.mk>
