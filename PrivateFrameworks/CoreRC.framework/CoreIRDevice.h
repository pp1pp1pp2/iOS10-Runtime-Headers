/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRDevice : CoreRCDevice {
    NSString * _OSDName;
    NSArray * _buttons;
    bool  _isReceiver;
    bool  _isTransmitter;
    CoreIRLearningSession * _learningSession;
    unsigned long long  _vendorID;
}

@property (nonatomic, copy) NSString *OSDName;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, readonly) NSUUID *deviceID;
@property (nonatomic, readonly) bool is3rdPartyRemote;
@property (nonatomic, readonly) bool isAppleRemote;
@property (nonatomic) bool isReceiver;
@property (nonatomic) bool isTransmitter;
@property (nonatomic, retain) CoreIRLearningSession *learningSession;
@property (nonatomic) unsigned long long vendorID;

+ (bool)supportsSecureCoding;

- (id)OSDName;
- (id)buttons;
- (bool)changeButtonCombination:(id)arg1 delay:(double)arg2 enabled:(bool)arg3 error:(id*)arg4;
- (bool)clearAllStoredCommands:(id*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)deviceID;
- (bool)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3;
- (bool)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBus:(id)arg1 local:(bool)arg2;
- (id)initWithBus:(id)arg1 local:(bool)arg2 deviceType:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)is3rdPartyRemote;
- (bool)isAppleRemote;
- (bool)isReceiver;
- (bool)isTransmitter;
- (id)learningSession;
- (id)mergeProperties;
- (bool)pairAppleRemote:(id*)arg1;
- (bool)sendCommand:(id)arg1 error:(id*)arg2;
- (void)setButtons:(id)arg1;
- (bool)setCommand:(unsigned long long)arg1 target:(id)arg2 forButtonCombination:(id)arg3 delay:(double)arg4 error:(id*)arg5;
- (void)setIsReceiver:(bool)arg1;
- (void)setIsTransmitter:(bool)arg1;
- (void)setLearningSession:(id)arg1;
- (void)setOSDName:(id)arg1;
- (bool)setOSDName:(id)arg1 error:(id*)arg2;
- (bool)setRemoteName:(id)arg1 error:(id*)arg2;
- (void)setVendorID:(unsigned long long)arg1;
- (id)startLearningSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (bool)unpairAppleRemote:(id*)arg1;
- (bool)updateMappingWithSession:(id)arg1 error:(id*)arg2;
- (unsigned long long)vendorID;

@end
