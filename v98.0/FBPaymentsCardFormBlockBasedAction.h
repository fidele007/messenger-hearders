/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)handleActionWithCard:(id)arg1 cardCollectedData:(id)arg2 ;
-(BOOL)shouldDisplayForCard:(id)arg1 ;
-(BOOL)shouldEnableForCard:(id)arg1 cardCollectedData:(id)arg2 cardOption:(id)arg3 ;
-(id)titleWithCard:(id)arg1 ;
-(BOOL)isActionDestructive;
-(id)initWithTitle:(id)arg1 isActionDestructive:(BOOL)arg2 actionBlock:(/*^block*/id)arg3 enableActionBlock:(/*^block*/id)arg4 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsCardActionDelegate>)arg1 ;
-(id<FBPaymentsCardActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
