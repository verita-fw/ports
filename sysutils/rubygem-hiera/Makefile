PORTNAME=	hiera
PORTVERSION=	3.12.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Pluggable data store for hierarchical data
WWW=		https://github.com/puppetlabs/hiera

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe gem

NO_ARCH=	yes

PLIST_DIRS=	/var/db/hiera
PLIST_FILES=	bin/hiera

CPE_VENDOR=	puppet

post-install:
	${REINPLACE_CMD} 's|/etc/puppetlabs/code/environments/%{environment}/hieradata|/var/db/hiera|' \
		${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/lib/hiera/util.rb \
		${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/spec/unit/util_spec.rb
	${REINPLACE_CMD} 's|/etc/puppetlabs/code|${PREFIX}/etc|' \
		${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/lib/hiera/util.rb \
		${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/spec/unit/util_spec.rb
	${FIND} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR} -name \*.bak -delete
	${MKDIR} ${STAGEDIR}/var/db/hiera

.include <bsd.port.mk>
