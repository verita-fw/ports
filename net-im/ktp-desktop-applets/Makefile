PORTNAME=	ktp-desktop-applets
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging plasma widgets
WWW=		https://community.kde.org/KTp

LIB_DEPENDS=	libKTpCommonInternals.so:net-im/ktp-common-internals

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

DEPRECATED=	Will not be part of KDE Gear 23.08 in August
EXPIRATION_DATE=	2023-09-30
KDE_APPLICATIONS_VERSION=	23.04.3

USES=		compiler:c++11-lang cmake gettext kde:5 qt:5 tar:xz xorg
USE_KDE=	plasma-framework windowsystem \
		ecm:build
USE_QT=		core dbus declarative gui network widgets \
		buildtools:build qmake:build
USE_XORG=	x11

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
