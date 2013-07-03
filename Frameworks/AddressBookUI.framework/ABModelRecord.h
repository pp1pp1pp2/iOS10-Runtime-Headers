/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;

@interface ABModelRecord : NSObject  {
    int _recordID;
    struct __CFString { } *_sortKey;
    long _highlightIndex;
    BOOL _isGroup;
    NSArray *_namePieces;
}


- (struct __CFString { }*)sortKey;
- (id)namePieces;
- (long)highlightIndex;
- (id)initWithRecordID:(int)arg1 highlightIndex:(long)arg2 group:(BOOL)arg3 namePieces:(id)arg4 sortKey:(struct __CFString { }*)arg5;
- (int)recordID;
- (void)dealloc;
- (BOOL)isGroup;

@end