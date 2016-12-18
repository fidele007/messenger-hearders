/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPurchaseInfoExtension <FBPaymentsEventAnnouncing>
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic) long long presentationStrategy; 
@optional
-(id)stateData;
-(void)restoreWithStateData:(id)arg1;
-(long long)numberOfLines;

@required
-(long long)presentationStrategy;
-(void)setPresentationStrategy:(long long)arg1;
-(void)resetForCancelingOngoingPayment;
-(id)detailedText;
-(void)handleTapAction;
-(BOOL)hasMadeCriticalChanges;
-(id)fieldCollectedData;
-(id)fieldTitle;
-(BOOL)needFollowUp;
-(void)handleFollowUpAction;
-(id)extensionIdentifier;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(long long)status;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;
-(BOOL)isHiddenExtension;
-(void)setUp;

@end
