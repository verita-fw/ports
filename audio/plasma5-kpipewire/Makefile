PORTNAME=	kpipewire
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
CATEGORIES=	audio kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Plasma pipewire plugin
WWW=		https://www.kde.org/plasma-desktop

LIB_DEPENDS=	libpipewire-0.3.so:multimedia/pipewire \
		libepoxy.so:graphics/libepoxy \
		libavcodec.so:multimedia/ffmpeg \
		libdrm.so:graphics/libdrm

USES=		cmake compiler:c++11-lib gettext gl gnome kde:5 pkgconfig qt:5 \
		shebangfix tar:xz
USE_GL=		egl gbm gl
USE_GNOME=	glib20
USE_KDE=	coreaddons i18n wayland \
		ecm:build plasma-wayland-protocols:build
USE_QT=		core declarative gui network wayland \
		buildtools:build qmake:build

.include <bsd.port.mk>
