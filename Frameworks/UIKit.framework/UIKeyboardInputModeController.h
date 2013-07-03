/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardInputMode, NSArray, NSString, <UIKeyboardInputModeControllerDelegate>;

@interface UIKeyboardInputModeController : NSObject  {
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSString *currentLocale;
    NSString *currentLanguage;
    NSArray *keyboardInputModes;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    <UIKeyboardInputModeControllerDelegate> *_delegate;
}

@property(readonly) NSArray * supportedInputModeIdentifiers;
@property(readonly) NSArray * inputModesWithoutHardwareSupport;
@property(readonly) NSArray * enabledInputModeIdentifiers;
@property(readonly) NSArray * normalizedEnabledInputModeIdentifiers;
@property(readonly) NSArray * enabledInputModeLanguages;
@property(retain) UIKeyboardInputMode * currentInputMode;
@property(readonly) UIKeyboardInputMode * currentPublicInputMode;
@property(readonly) BOOL containsDictationSupportedInputMode;
@property <UIKeyboardInputModeControllerDelegate> * delegate;
@property(retain) NSString * currentLocale;
@property(retain) NSString * currentLanguage;
@property(retain) NSArray * keyboardInputModes;
@property(retain) NSArray * enabledInputModes;
@property(retain) NSArray * normalizedInputModes;
@property(retain) NSArray * defaultKeyboardInputModes;
@property(copy) NSArray * defaultRawInputModes;
@property(retain) NSArray * defaultInputModes;
@property(retain) NSArray * defaultNormalizedInputModes;

+ (id)sharedInputModeController;

- (id)inputModeWithIdentifier:(id)arg1;
- (id)enabledInputModes;
- (id)currentLanguage;
- (id)defaultInputModes;
- (void)setDefaultInputModes:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (void)setCurrentLanguage:(id)arg1;
- (void)setCurrentLocale:(id)arg1;
- (id)enabledInputModeIdentifiers;
- (id)supportedInputModeIdentifiers;
- (id)currentLocale;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)enabledInputModeLanguages;
- (id)inputModesWithoutHardwareSupport;
- (id)enabledInputModeIdentifiers:(BOOL)arg1;
- (id)defaultKeyboardInputModes;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)suggestedInputModesForCurrentLocale;
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1;
- (BOOL)currentLocaleRequiresExtendedSetup;
- (BOOL)containsDictationSupportedInputMode;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)defaultNormalizedInputModes;
- (id)defaultRawInputModes;
- (id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2;
- (id)normalizedInputModes;
- (void)updateCurrentInputMode:(id)arg1;
- (id)keyboardInputModes;
- (void)setDefaultNormalizedInputModes:(id)arg1;
- (void)setDefaultRawInputModes:(id)arg1;
- (void)setDefaultKeyboardInputModes:(id)arg1;
- (void)setNormalizedInputModes:(id)arg1;
- (void)setKeyboardInputModes:(id)arg1;
- (void)setCurrentInputMode:(id)arg1;
- (id)activeInputModes;
- (id)normalizedEnabledInputModeIdentifiers;
- (id)currentPublicInputMode;
- (id)currentInputMode;

@end