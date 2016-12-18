/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@class NSString, UIImageView, UILabel;

@interface FBBadgeView : UIView <FBUIConfigurable, FBUIThreadSafeSizable> {

	NSString* _accessibilityFormat;
	UIImageView* _badgeView;
	UILabel* _countLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)badgeImageWithSize:(CGSize)arg1 cornerRadius:(double)arg2 color:(id)arg3 strokeWidth:(double)arg4 strokeColor:(id)arg5 ;
+(id)newWithConfig:(id)arg1 ;
+(id)newWithStyle:(unsigned long long)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)defaultFBUIConfig;
+(id)newWithStyle:(unsigned long long)arg1 maxBadgeCount:(long long)arg2 ;
+(id)_badgeCountAttributedStringForConfig:(id)arg1 ;
+(CGSize)_threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 attributedString:(id)arg3 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_setUpBadgeView;
-(void)_setUpCountLabel;
-(void)_setUpAccessibility;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end

