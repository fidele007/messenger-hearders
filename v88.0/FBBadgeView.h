/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
+(id)newWithConfig:(id)arg1 ;
+(id)newWithStyle:(unsigned long long)arg1 ;
+(id)badgeImageWithSize:(CGSize)arg1 cornerRadius:(double)arg2 color:(id)arg3 strokeWidth:(double)arg4 strokeColor:(id)arg5 ;
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
