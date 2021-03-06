/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPreviewPlayButton : LPPlayButton <LPMediaPlayer> {
    id  _endObserver;
    AVPlayerItem * _item;
    AVPlayer * _player;
    NSURL * _previewURL;
    long long  _state;
    id  _timeObserver;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, readonly) bool isPlaying;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesSharedAudioSession;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)dealloc;
- (id)initWithPreviewURL:(id)arg1;
- (bool)isActive;
- (bool)isMuted;
- (bool)isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActive:(bool)arg1;
- (void)updateToState:(long long)arg1;
- (bool)usesSharedAudioSession;

@end
