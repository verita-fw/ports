PORTNAME=	oracle11g
PORTVERSION=	11.2.0.4
PORTREVISION=	2
CATEGORIES=	databases java
MASTER_SITES=	# http://www.oracle.com/technetwork/database/enterprise-edition/jdbc-112010-090769.html
PKGNAMEPREFIX=	jdbc-
DISTNAME=	ojdbc6.jar
EXTRACT_SUFX=	# none
DIST_SUBDIR=	oracle11g

MAINTAINER=	ports@FreeBSD.org
COMMENT=	JDBC drivers for Oracle 11g
WWW=		http://www.oracle.com/technetwork/database/features/jdbc/index-091264.html

# Converted from RESTRICTED
LICENSE=	ORACLE
LICENSE_NAME=	Oracle
LICENSE_TEXT=	Packaging prohibited by Oracle license
LICENSE_PERMS=	auto-accept

USE_JAVA=	yes
JAVA_VERSION=	8
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%JAVAJARDIR%%/ojdbc-${PORTVERSION}.jar

.include <bsd.port.pre.mk>

.if !exists(${DISTDIR}/${DIST_SUBDIR}/${DISTFILES})
IGNORE=	due to Oracle license restrictions, you must fetch the source\
distribution manually. Please access\
http://www.oracle.com/technetwork/database/enterprise-edition/jdbc-112010-090769.html\
(Oracle Database 11g Release 2 (${PORTVERSION} JDBC Drivers) with a web\
browser and follow the link for the ${DISTFILES}. You will be required to\
register and log in, but you can create an account on that page. After\
registration and accepting the Oracle License, download the distribution\
file, ${DISTFILES}, place into ${DISTDIR}/${DIST_SUBDIR}, and restart\
installation
.endif

do-install:
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} ${STAGEDIR}${JAVAJARDIR}/ojdbc-${PORTVERSION}.jar

.include <bsd.port.post.mk>
