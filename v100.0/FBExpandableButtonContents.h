/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BFTask, UIView;


@protocol FBExpandableButtonContents <NSObject>
@property (nonatomic,readonly) BFTask * initializationTask; 
@property (nonatomic,readonly) UIView * collapsedView; 
@property (nonatomic,readonly) UIView * expandedView; 
@property (nonatomic,readonly) CGSize collapsedSize; 
@property (nonatomic,readonly) CGSize expandedSize; 
@required
-(id)initWithCollapsedColor:(id)arg1 expandedColor:(id)arg2;
-(BFTask *)initializationTask;
-(UIView *)collapsedView;
-(UIView *)expandedView;
-(CGSize)collapsedSize;
-(CGSize)expandedSize;

@end

