/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@class CAShapeLayer, UILabel, NSString;

@interface FBBubbleView : UIView <FBUIConfigurable, FBUIThreadSafeSizable> {

	CAShapeLayer* _backgroundLayer;
	UILabel* _textLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)defaultFBUIConfig;
-(CGRect)_contentRect;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(CGPathRef)_currentPath;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end

