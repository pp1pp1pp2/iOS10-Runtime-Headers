/* Generated by RuntimeBrowser.
 */

@protocol TSWPLayoutTarget <NSObject>

@required

- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned int)arg1 outRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (NSMutableArray *)columns;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (struct CGSize { float x1; float x2; })currentSize;
- (<TSWPFootnoteHeightMeasurer> *)footnoteHeightMeasurer;
- (<TSWPFootnoteMarkProvider> *)footnoteMarkProvider;
- (BOOL)isLastTarget;
- (BOOL)isLayoutOffscreen;
- (BOOL)layoutIsValid;
- (float)maxAnchorY;
- (struct CGSize { float x1; float x2; })maxSize;
- (struct CGSize { float x1; float x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (TSPObject<TSDHint> *)nextTargetFirstChildHint;
- (<TSWPOffscreenColumn> *)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)nextTargetTopicNumbers;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;
- (struct CGPoint { float x1; float x2; })position;
- (<TSWPOffscreenColumn> *)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; }*)previousTargetTopicNumbers;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)textIsVertical;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (TSDLayout *)validatedLayoutForInlineDrawable:(id <TSDInfo>)arg1;
- (int)verticalAlignment;
- (BOOL)wantsLineFragments;

@optional

- (struct CGPoint { float x1; float x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { float x1; float x2; })arg1;
- (NSMutableArray *)anchoredDrawablesForRelayout;
- (TSDCanvas *)canvas;
- (struct __CFLocale { }*)hyphenationLocale;
- (TSUBezierPath *)interiorClippingPath;
- (BOOL)invalidateForPageCountChange;
- (struct CGPoint { float x1; float x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })layoutPositionFromInlineAttachmentPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maskRect;
- (unsigned int)pageIndex;
- (TSDLayout *)parentLayoutForInlineAttachments;
- (void)setAnchoredDrawablesForRelayout:(NSMutableArray *)arg1;
- (BOOL)shouldHyphenate;
- (BOOL)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;

@end