/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <Messenger/FBUIConfig.h>

@class NSString, UIColor, UIImage, UIFont;

@interface FBBadgeViewConfig : FBValueObject <FBUIConfig> {

	BOOL _ignoreBadgeCount;
	BOOL _autoHide;
	unsigned long long _contentMode;
	long long _badgeCount;
	long long _maxBadgeCount;
	NSString* _badgeValue;
	UIColor* _backgroundColor;
	UIImage* _badgeViewImage;
	UIFont* _countLabelFont;
	UIColor* _countLabelTextColor;
	UIEdgeInsets _padding;
	UIEdgeInsets _badgeViewImageCapInsets;

}

@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) unsigned long long contentMode;                    //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) long long badgeCount;                              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) long long maxBadgeCount;                           //@synthesize maxBadgeCount=_maxBadgeCount - In the implementation block
@property (nonatomic,readonly) BOOL ignoreBadgeCount;                             //@synthesize ignoreBadgeCount=_ignoreBadgeCount - In the implementation block
@property (nonatomic,readonly) BOOL autoHide;                                     //@synthesize autoHide=_autoHide - In the implementation block
@property (nonatomic,copy,readonly) NSString * badgeValue;                        //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,copy,readonly) UIImage * badgeViewImage;                     //@synthesize badgeViewImage=_badgeViewImage - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets badgeViewImageCapInsets;              //@synthesize badgeViewImageCapInsets=_badgeViewImageCapInsets - In the implementation block
@property (nonatomic,copy,readonly) UIFont * countLabelFont;                      //@synthesize countLabelFont=_countLabelFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * countLabelTextColor;                //@synthesize countLabelTextColor=_countLabelTextColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithContentMode:(unsigned long long)arg1 badgeCount:(long long)arg2 maxBadgeCount:(long long)arg3 ignoreBadgeCount:(BOOL)arg4 autoHide:(BOOL)arg5 badgeValue:(id)arg6 backgroundColor:(id)arg7 padding:(UIEdgeInsets)arg8 badgeViewImage:(id)arg9 badgeViewImageCapInsets:(UIEdgeInsets)arg10 countLabelFont:(id)arg11 countLabelTextColor:(id)arg12 ;
+(Class)viewClass;
-(UIFont *)countLabelFont;
-(UIColor *)countLabelTextColor;
-(long long)maxBadgeCount;
-(id)_initWithContentMode:(unsigned long long)arg1 badgeCount:(long long)arg2 maxBadgeCount:(long long)arg3 ignoreBadgeCount:(BOOL)arg4 autoHide:(BOOL)arg5 badgeValue:(id)arg6 backgroundColor:(id)arg7 padding:(UIEdgeInsets)arg8 badgeViewImage:(id)arg9 badgeViewImageCapInsets:(UIEdgeInsets)arg10 countLabelFont:(id)arg11 countLabelTextColor:(id)arg12 ;
-(BOOL)ignoreBadgeCount;
-(BOOL)autoHide;
-(UIImage *)badgeViewImage;
-(UIEdgeInsets)badgeViewImageCapInsets;
-(UIColor *)backgroundColor;
-(BOOL)isHidden;
-(unsigned long long)contentMode;
-(UIEdgeInsets)padding;
-(NSString *)badgeValue;
-(long long)badgeCount;
@end

