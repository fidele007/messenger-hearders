/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)viewDidAppear;
-(void)viewDidDisappear;

@end

