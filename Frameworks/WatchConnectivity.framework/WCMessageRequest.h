/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCMessageRequest : WCMessage <NSSecureCoding> {
    BOOL  _expectsResponse;
}

@property BOOL expectsResponse;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)expectsResponse;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 dictionaryMessage:(BOOL)arg3 expectsResponse:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)setExpectsResponse:(BOOL)arg1;

@end