/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, SSURLConnectionRequest;

@interface RadioGetTrackEventsRequest : RadioRequest  {
    SSURLConnectionRequest *_request;
    NSArray *_stationTrackIDs;
}


- (id)initWithStationTrackIDs:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;

@end