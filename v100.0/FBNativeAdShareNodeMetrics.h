/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIColor;

@interface FBNativeAdShareNodeMetrics : NSObject

@property (nonatomic,readonly) UIEdgeInsets adNodePadding; 
@property (nonatomic,readonly) UIEdgeInsets contentNodeRedesignPadding; 
@property (nonatomic,readonly) double hairlineBoxLineWeight; 
@property (nonatomic,readonly) UIColor * hairlineBoxColor; 
@property (nonatomic,readonly) UIColor * borderlineBoxColor; 
-(CGSize)defaultImageSizeWithConstrainedSize:(CGSize)arg1 ;
-(double)hairlineBoxLineWeight;
-(UIColor *)hairlineBoxColor;
-(UIColor *)borderlineBoxColor;
-(CGSize)defaultContentNodeSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)calculateNodeSizeWithContentNodeSize:(CGSize)arg1 constrainedSize:(CGSize)arg2 ;
-(UIEdgeInsets)adNodePadding;
-(UIEdgeInsets)contentNodeRedesignPadding;
-(CGSize)defaultIconSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)defaultNodeSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)maxNodeSizeWithConstrainedSize:(CGSize)arg1 ;
-(CGSize)maxRedesignNodeSizeWithConstrainedSize:(CGSize)arg1 ;
@end

