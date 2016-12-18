/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBButtonConfig, PAInterfaceGuide;

@interface FBNativeAdVideoCTAButtonNodeMetrics : NSObject {

	FBButtonConfig* _buttonConfig;
	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) FBButtonConfig * actionButtonConfig; 
@property (nonatomic,readonly) CGSize maxActionButtonSize; 
@property (nonatomic,readonly) double buttonVerticalMargin; 
@property (nonatomic,readonly) double buttonHorizontalMargin; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(FBButtonConfig *)actionButtonConfig;
-(CGSize)calculateNodeSizeWithConstrainingSize:(CGSize)arg1 ;
-(CGSize)maxActionButtonSize;
-(double)buttonHorizontalMargin;
-(double)buttonVerticalMargin;
-(CGSize)calculateNodeSizeWithActionButtonSize:(CGSize)arg1 constrainedSize:(CGSize)arg2 ;
-(id)actionButtonTextFont;
@end
