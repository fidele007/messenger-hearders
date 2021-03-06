/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIViewController;


@protocol FBStackViewControllerProtocol <NSObject,FBAnalyticsInfoSource>
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
@optional
-(void)modalItem:(id)arg1 didUpdateOcclusionState:(BOOL)arg2;

@required
-(UIViewController *)topModalViewController;
-(UIViewController *)bottomModalViewController;
-(NSArray *)modalPresentationItems;
-(void)addModalItem:(id)arg1;
-(void)removeModalItem:(id)arg1;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;

@end

