%define	desktop_vendor planetccrma

Summary: ALSA MIDI monitor
Name: kmidimon
Version: 0.4
Release: 1
License: GPL
Group: Applications/Multimedia
URL: http://kmetronome.sourceforge.net/kmidimon/
Source0: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-buildroot
Vendor: Planet CCRMA
Distribution: Planet CCRMA

BuildRequires: gcc-c++, kdelibs-devel, alsa-lib-devel
%{?fc1:BuildRequires: XFree86-devel, zlib-devel, libjpeg-devel, libpng-devel, libart_lgpl-devel, arts-devel}
%{?rh9:BuildRequires: XFree86-devel, zlib-devel, libjpeg-devel, libpng-devel, libart_lgpl-devel, arts-devel}

%description
MIDI monitor for Linux using ALSA sequencer and KDE user interface.

%prep
%setup -q

%build
%configure
%{__make} %{?_smp_mflags}

%install
%{__rm} -rf %{buildroot}
%{makeinstall}

%{__cat} << EOF > %{desktop_vendor}-%{name}.desktop
[Desktop Entry]
Name=Kmidimon
Comment=ALSA MIDI monitor
Icon=kmidimon
Exec=%{_bindir}/%{name}
Terminal=false
Type=Application
EOF

%{__mkdir} -p %{buildroot}%{_datadir}/applications
desktop-file-install --vendor %{desktop_vendor} \
  --dir %{buildroot}%{_datadir}/applications    \
  --add-category X-Red-Hat-Base                 \
  --add-category Application                    \
  --add-category AudioVideo                     \
  %{desktop_vendor}-%{name}.desktop

%{find_lang} %{name}

%clean
%{__rm} -rf %{buildroot}

%files -f %{name}.lang
%defattr(-,root,root,-)
%doc AUTHORS ChangeLog COPYING INSTALL NEWS README TODO
%{_bindir}/kmidimon
%exclude %{_datadir}/applnk/Utilities/kmidimon.desktop
%{_datadir}/apps/kmidimon/kmidimonui.rc
%{_datadir}/doc/HTML/en/kmidimon
%{_datadir}/icons/hicolor/*/actions/kmidimon_record.png
%{_datadir}/icons/hicolor/*/apps/kmidimon.png
%{_datadir}/applications/%{desktop_vendor}-%{name}.desktop

%changelog
* Fri Aug 19 2005 Fernando Lopez-Lezcano <nando@ccrma.stanford.edu> 0.3-1
- updated to version 0.3
* Wed May  4 2005 Fernando Lopez-Lezcano <nando@ccrma.stanford.edu> 0.1-1
- initial build.
