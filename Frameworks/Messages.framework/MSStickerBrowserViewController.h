/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerBrowserViewController : UIViewController <MSStickerBrowserViewDataSource> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrameBeforeAppearance;
    MSStickerBrowserView * _stickerBrowserView;
    long long  _stickerSize;
    bool  _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrameBeforeAppearance;
@property (nonatomic, retain) MSStickerBrowserView *stickerBrowserView;
@property (nonatomic, readonly) long long stickerSize;
@property (readonly) Class superclass;
@property (nonatomic) bool viewHasAppeared;

- (void).cxx_destruct;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)didReceiveMemoryWarning;
- (void)disableUserInteraction;
- (void)enableUserInteraction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStickerSize:(long long)arg1;
- (id)initWithStickerSizeClass:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameBeforeAppearance;
- (void)loadView;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)setInitialFrameBeforeAppearance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStickerBrowserView:(id)arg1;
- (void)setViewHasAppeared:(bool)arg1;
- (id)stickerBrowserView;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (long long)stickerSize;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (bool)viewHasAppeared;
- (void)viewWillLayoutSubviews;

@end