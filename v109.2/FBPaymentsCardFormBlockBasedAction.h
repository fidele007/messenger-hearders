/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsEventAnnouncing.h>
#import <Messenger/FBPaymentsCardAction.h>

@protocol FBPaymentsCardActionDelegate, FBPaymentsNavigationDelegate;
@class NSString, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsCardFormBlockBasedAction : NSObject <FBPaymentsEventAnnouncing, FBPaymentsCardAction> {

	/*^block*/id _actionBlock;
	/*^block*/id _enableActionBlock;
	NSString* _title;
	BOOL* _isActionDestructive;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsCardActionDelegate> _actionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCardActionDelegate> actionDelegate;                  //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)handleActionWithCard:(id)arg1 cardCollectedData:(id)arg2 ;
-(id)initWithTitle:(id)arg1 isActionDestructive:(BOOL)arg2 actionBlock:(/*^block*/id)arg3 enableActionBlock:(/*^block*/id)arg4 ;
-(BOOL)shouldDisplayForCard:(id)arg1 ;
-(BOOL)shouldEnableForCard:(id)arg1 cardCollectedData:(id)arg2 hasZipField:(BOOL)arg3 ;
-(id)titleWithCard:(id)arg1 ;
-(BOOL)isActionDestructive;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsCardActionDelegate>)arg1 ;
-(id<FBPaymentsCardActionDelegate>)actionDelegate;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

