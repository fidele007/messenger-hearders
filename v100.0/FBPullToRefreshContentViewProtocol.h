/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPullToRefreshContentViewProtocol
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (assign,nonatomic) UIEdgeInsets contentInsets; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double triggerThreshold; 
@required
-(void)setTriggerThreshold:(double)arg1;
-(id)initWithTintColor:(id)arg1;
-(void)setLoading:(BOOL)arg1 isUserInitiated:(BOOL)arg2;
-(double)triggerThreshold;
-(void)scrollViewDidScroll:(double)arg1 withVelocity:(CGPoint)arg2 isUserInitiated:(BOOL)arg3;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1;
-(void)setVisible:(BOOL)arg1;
-(double)height;
-(BOOL)isVisible;
-(BOOL)isLoading;
-(void)setHeight:(double)arg1;

@end
