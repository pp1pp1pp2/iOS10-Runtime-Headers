/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer  {
    UIDelayedAction *_touchDelay;
    struct CGPoint { 
        float x; 
        float y; 
    } _startScreenLocation;
}


- (void)dealloc;
- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)sendDelayedTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end