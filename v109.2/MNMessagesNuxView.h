/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MNMessagesNuxConfiguration;


@protocol MNMessagesNuxView <NSObject>
@property (assign,nonatomic,__weak) id<MNMessagesNuxViewDelegate> delegate; 
@property (nonatomic,copy) MNMessagesNuxConfiguration * configuration; 
@property (nonatomic,readonly) double showAnimationDelay; 
@required
+(CGSize*)sizeThatFitsWithMaxSize:(CGSize)arg1 forConfiguration:(id)arg2;
-(CGSize*)sizeThatFitsWithMaxSize:(CGSize)arg1;
-(double)showAnimationDelay;
-(void)setDelegate:(id)arg1;
-(id<MNMessagesNuxViewDelegate>)delegate;
-(void)setConfiguration:(id)arg1;
-(MNMessagesNuxConfiguration *)configuration;
-(void)viewDidDisappear;
-(void)viewDidAppear;

@end

