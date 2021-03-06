/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCustomNoteViewControllerDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsPurchaseInfoExtension.h>

@protocol FBPaymentsPurchaseInfoExtensionDelegate, FBPaymentsNavigationDelegate;
@class NSString, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsPurchaseInfoCustomNoteExtension : NSObject <FBPaymentsCustomNoteViewControllerDelegate, FBPaymentsEventListener, FBPaymentsPurchaseInfoExtension> {

	NSString* _customNote;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	BOOL _isOptional;
	id<FBPaymentsPurchaseInfoExtensionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _presentationStrategy;
	unsigned long long _lengthLimit;
	NSString* _placeholderText;
	NSString* _prefilledNote;

}

@property (assign,nonatomic) unsigned long long lengthLimit;                                           //@synthesize lengthLimit=_lengthLimit - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                                 //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy) NSString * prefilledNote;                                                   //@synthesize prefilledNote=_prefilledNote - In the implementation block
@property (assign,nonatomic) BOOL isOptional;                                                          //@synthesize isOptional=_isOptional - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;               //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStrategy;                                           //@synthesize presentationStrategy=_presentationStrategy - In the implementation block
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(long long)presentationStrategy;
-(void)setPresentationStrategy:(long long)arg1 ;
-(void)resetForCancelingOngoingPayment;
-(id)detailedText;
-(void)handleTapAction;
-(BOOL)hasMadeCriticalChanges;
-(void)setIsOptional:(BOOL)arg1 ;
-(void)setLengthLimit:(unsigned long long)arg1 ;
-(void)setPrefilledNote:(NSString *)arg1 ;
-(void)handleFollowUpAction;
-(id)fieldCollectedData;
-(id)fieldTitle;
-(BOOL)needFollowUp;
-(id)stateData;
-(void)restoreWithStateData:(id)arg1 ;
-(void)customNoteViewControllerDidCancel:(id)arg1 ;
-(void)customNoteViewController:(id)arg1 didSaveWithNote:(id)arg2 ;
-(unsigned long long)lengthLimit;
-(NSString *)prefilledNote;
-(BOOL)isOptional;
-(id)extensionIdentifier;
-(void)setDelegate:(id<FBPaymentsPurchaseInfoExtensionDelegate>)arg1 ;
-(id)init;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(void)_dismissViewController;
-(long long)status;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(BOOL)isHiddenExtension;
-(void)setUp;
@end

