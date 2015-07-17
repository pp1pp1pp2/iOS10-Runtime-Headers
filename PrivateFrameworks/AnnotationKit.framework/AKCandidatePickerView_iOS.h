/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCandidatePickerView_iOS : UIView {
    SEL  _action;
    NSArray * _annotations;
    int  _blurStyle;
    UIView * _buttonContainer;
    NSArray * _buttons;
    NSArray * _itemTags;
    id  _target;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) NSArray *annotations;
@property (nonatomic) int blurStyle;
@property (nonatomic, retain) UIView *buttonContainer;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) NSArray *itemTags;
@property (nonatomic) id target;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_createButtonsWithBlurStyle:(int)arg1;
- (void)_selectBackground:(id)arg1;
- (void)_selectBackground:(id)arg1 animated:(BOOL)arg2;
- (SEL)action;
- (id)annotations;
- (int)blurStyle;
- (id)buttonContainer;
- (id)buttons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(int)arg6;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)itemTags;
- (void)setAction:(SEL)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setBlurStyle:(int)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setItemTags:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setTarget:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)target;
- (id)visualEffectView;

@end