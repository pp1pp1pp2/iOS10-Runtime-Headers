/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPanGestureRecognizer, UIWindow, UIImageView, UIResponder, NSMutableArray, NSMapTable, UIScrollView, NSArray;

@interface _UIResponderSelectionCursor : NSObject  {
    UIImageView *_responderSelectionView;
    struct CGPoint { 
        float x; 
        float y; 
    } _responderSelectionStartLocation;
    UIPanGestureRecognizer *_panResponderSelectionRecognizer;
    NSArray *_remoteGestures;
    BOOL _isFlick;
    double _timeOnTouchDown;
    float _consecutiveWithinRowAccumulator;
    BOOL _isKeepingCompetitiveFarDiagonalResiduals;
    UIResponder *_selectedItemOnTouchDown;
    NSMutableArray *_selectableItems;
    UIScrollView *_scrollingScrollView;
    struct CGPoint { 
        float x; 
        float y; 
    } _scrollingOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _activeFirstResponderScrollViewOffset;
    NSMapTable *_selectionThresholdDictionary;
    NSMapTable *_selectionAccumulationDictionary;
    BOOL _dirtyGeometry;
    UIWindow *_targetWindow;
    UIResponder *_mostLikelyToBeSelectedItem;
    UIScrollView *_activeFirstResponderScrollView;
}

@property UIWindow * targetWindow;
@property(retain) UIResponder * mostLikelyToBeSelectedItem;
@property(retain) UIScrollView * activeFirstResponderScrollView;

+ (void)initialize;

- (void)reset;
- (void)dealloc;
- (id)mostLikelyToBeSelectedItem;
- (void)moveResponderSelectionInDirection:(struct CGSize { float x1; float x2; })arg1;
- (float)selectionThresholdForResponder:(id)arg1;
- (void)setSelectionThreshold:(float)arg1 forResponder:(id)arg2;
- (void)longFlick;
- (id)itemsInDirectionOfVector:(struct CGPoint { float x1; float x2; })arg1 withConeOfDegrees:(float)arg2 fromItem:(id)arg3;
- (void)setMostLikelyToBeSelectedItem:(id)arg1;
- (float)verticalSpacingFromItem:(id)arg1;
- (float)horizontalSpacingFromItem:(id)arg1;
- (void)keepSecondaryResidualsCompetitiveTo:(id)arg1;
- (BOOL)inSelectedRow:(id)arg1;
- (void)setSelectionAccumulation:(float)arg1 forResponder:(id)arg2;
- (id)possibleResponders;
- (float)selectionAccumulationForResponder:(id)arg1;
- (struct CGPoint { float x1; float x2; })centerForResponder:(id)arg1;
- (void)updateResponderSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 possibleResponders:(id)arg2;
- (id)respondersInDirection:(struct CGSize { float x1; float x2; })arg1 inView:(id)arg2;
- (void)loadFirstResponderScrollViewContentInDirection:(struct CGSize { float x1; float x2; })arg1;
- (id)responderForPoint:(struct CGPoint { float x1; float x2; })arg1 possibleResponders:(id)arg2;
- (void)panTouchUp;
- (void)accumulateWithDelta:(struct CGPoint { float x1; float x2; })arg1 velocity:(struct CGPoint { float x1; float x2; })arg2;
- (void)panTouchDown;
- (void)resetIfNecessary;
- (void)setActiveFirstResponderScrollView:(id)arg1;
- (id)activeFirstResponderScrollView;
- (void)updateResponderSelectionRect;
- (void)scrollingToFirstResponderDidFinish:(id)arg1;
- (void)moveSelection:(id)arg1;
- (void)panResponderSelection:(id)arg1;
- (id)targetWindow;
- (void)setSelectedItem:(id)arg1;
- (void)_responderGeometryDidChange;
- (void)updateFirstResponder:(id)arg1;
- (void)setTargetWindow:(id)arg1;

@end