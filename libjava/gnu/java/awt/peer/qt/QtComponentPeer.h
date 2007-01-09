
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtComponentPeer__
#define __gnu_java_awt_peer_qt_QtComponentPeer__

#pragma interface

#include <gnu/java/awt/peer/qt/NativeWrapper.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtComponentPeer;
              class QtContainerPeer;
              class QtFontPeer;
              class QtImage;
              class QtToolkit;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class BufferCapabilities;
        class BufferCapabilities$FlipContents;
        class Color;
        class Component;
        class Cursor;
        class Dimension;
        class Font;
        class FontMetrics;
        class Graphics;
        class GraphicsConfiguration;
        class Image;
        class Point;
        class Rectangle;
        class Toolkit;
      namespace event
      {
          class PaintEvent;
      }
      namespace image
      {
          class ColorModel;
          class ImageObserver;
          class ImageProducer;
          class VolatileImage;
      }
      namespace peer
      {
          class ContainerPeer;
      }
    }
  }
}

class gnu::java::awt::peer::qt::QtComponentPeer : public ::gnu::java::awt::peer::qt::NativeWrapper
{

public: // actually package-private
  QtComponentPeer(::gnu::java::awt::peer::qt::QtToolkit *, ::java::awt::Component *);
public: // actually protected
  virtual void callInit();
  virtual void init();
  virtual void setup();
public: // actually package-private
  virtual void QtUpdate();
  virtual void QtUpdateArea(jint, jint, jint, jint);
private:
  void disposeNative();
  void setGround(jint, jint, jint, jboolean);
  void setBoundsNative(jint, jint, jint, jint);
  void setCursor(jint);
  ::java::awt::Color * getNativeBackground();
  void setFontNative(::gnu::java::awt::peer::qt::QtFontPeer *);
  jint whichScreen();
  void reparentNative(::gnu::java::awt::peer::qt::QtContainerPeer *);
  void getLocationOnScreenNative(::java::awt::Point *);
  jboolean drawableComponent();
public: // actually package-private
  virtual void updateBounds();
  virtual void updateBackBuffer(jint, jint);
public: // actually protected
  virtual void closeEvent();
  virtual void enterEvent(jint, jint, jint, jint);
  virtual void focusInEvent();
  virtual void focusOutEvent();
  virtual void keyPressEvent(jint, jint, jint, jint);
  virtual void keyReleaseEvent(jint, jint, jint, jint);
  virtual void leaveEvent(jint, jint, jint, jint);
  virtual void mouseDoubleClickEvent(jint, jint, jint, jint);
  virtual void mouseMoveEvent(jint, jint, jint, jint);
  virtual void mousePressEvent(jint, jint, jint, jint);
  virtual void mouseReleaseEvent(jint, jint, jint, jint);
  virtual void moveEvent(jint, jint, jint, jint);
  virtual void resizeEvent(jint, jint, jint, jint);
  virtual void showEvent();
  virtual void hideEvent();
public:
  virtual void setEventMask(jlong);
  virtual jboolean canDetermineObscurity();
  virtual jint checkImage(::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual void createBuffers(jint, ::java::awt::BufferCapabilities *);
  virtual ::java::awt::Image * createImage(::java::awt::image::ImageProducer *);
  virtual ::java::awt::Image * createImage(jint, jint);
  virtual void coalescePaintEvent(::java::awt::event::PaintEvent *);
  virtual ::java::awt::image::VolatileImage * createVolatileImage(jint, jint);
  virtual void destroyBuffers();
  virtual void disable();
  virtual void dispose();
  virtual void enable();
  virtual void finalize();
  virtual void flip(::java::awt::BufferCapabilities$FlipContents *);
  virtual ::java::awt::Image * getBackBuffer();
  virtual ::java::awt::image::ColorModel * getColorModel();
  virtual ::java::awt::FontMetrics * getFontMetrics(::java::awt::Font *);
  virtual ::java::awt::Graphics * getGraphics();
  virtual ::java::awt::GraphicsConfiguration * getGraphicsConfiguration();
  virtual ::java::awt::Point * getLocationOnScreen();
private:
  void getSizeNative(::java::awt::Dimension *, jboolean);
  ::java::awt::Dimension * getSize(jboolean);
public:
  virtual ::java::awt::Dimension * getMinimumSize();
  virtual ::java::awt::Dimension * getPreferredSize();
  virtual ::java::awt::Toolkit * getToolkit();
  virtual jboolean handlesWheelScrolling();
  virtual void hide();
  virtual jboolean isFocusable();
  virtual jboolean isFocusTraversable();
  virtual jboolean isObscured();
  virtual ::java::awt::Dimension * minimumSize();
  virtual ::java::awt::Dimension * preferredSize();
  virtual void requestFocus();
  virtual jboolean requestFocus(::java::awt::Component *, jboolean, jboolean, jlong);
  virtual void reshape(jint, jint, jint, jint);
  virtual void setBackground(::java::awt::Color *);
  virtual void setBounds(jint, jint, jint, jint);
  virtual void setCursor(::java::awt::Cursor *);
  virtual void setEnabled(jboolean);
  virtual void setFont(::java::awt::Font *);
  virtual void setForeground(::java::awt::Color *);
  virtual void setVisible(jboolean);
  virtual void show();
  virtual void handleEvent(::java::awt::AWTEvent *);
  virtual void paint(::java::awt::Graphics *);
  virtual void paintBackBuffer();
  virtual void paintBackBuffer(jint, jint, jint, jint);
  virtual jboolean prepareImage(::java::awt::Image *, jint, jint, ::java::awt::image::ImageObserver *);
  virtual void print(::java::awt::Graphics *);
  virtual void repaint(jlong, jint, jint, jint, jint);
  virtual void updateCursorImmediately();
  virtual ::java::awt::Rectangle * getBounds();
  virtual void reparent(::java::awt::peer::ContainerPeer *);
  virtual void setBounds(jint, jint, jint, jint, jint);
  virtual jboolean isReparentSupported();
  virtual void layout();
public: // actually protected
  static const jint POPUP_TRIGGER = 3;
  ::gnu::java::awt::peer::qt::QtToolkit * __attribute__((aligned(__alignof__( ::gnu::java::awt::peer::qt::NativeWrapper)))) toolkit;
public: // actually package-private
  ::java::awt::Component * owner;
private:
  jlong eventMask;
  jboolean hasMotionListeners;
public: // actually protected
  ::gnu::java::awt::peer::qt::QtImage * backBuffer;
  jlong qtApp;
private:
  jboolean settingUp;
  jboolean ignoreResize;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtComponentPeer__
