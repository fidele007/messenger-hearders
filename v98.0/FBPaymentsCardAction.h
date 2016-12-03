/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCardAction <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsCardActionDelegate> actionDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@required
-(void)handleActionWithCard:(id)arg1 cardCollectedData:(id)arg2;
-(BOOL)shouldDisplayForCard:(id)arg1;
-(BOOL)shouldEnableForCard:(id)arg1 cardCollectedData:(id)arg2 cardOption:(id)arg3;
-(id)titleWithCard:(id)arg1;
-(BOOL)isActionDestructive;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id)arg1;
-(id<FBPaymentsCardActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end
