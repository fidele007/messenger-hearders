/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUIConfigBuilder.h>

@class NSString, UIColor, UIImage, UIFont;

@interface FBBadgeViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	unsigned long long _contentMode;
	long long _badgeCount;
	long long _maxBadgeCount;
	BOOL _ignoreBadgeCount;
	BOOL _autoHide;
	NSString* _badgeValue;
	UIColor* _backgroundColor;
	UIEdgeInsets _padding;
	UIImage* _badgeViewImage;
	UIEdgeInsets _badgeViewImageCapInsets;
	UIFont* _countLabelFont;
	UIColor* _countLabelTextColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderForErrorBadge;
+(id)builderForStyle:(unsigned long long)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setMaxBadgeCount:(long long)arg1 ;
-(id)setBadgeViewImage:(id)arg1 ;
-(id)setBadgeViewImageCapInsets:(UIEdgeInsets)arg1 ;
-(id)setCountLabelFont:(id)arg1 ;
-(id)setCountLabelTextColor:(id)arg1 ;
-(id)setIgnoreBadgeCount:(BOOL)arg1 ;
-(id)setAutoHide:(BOOL)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setContentMode:(unsigned long long)arg1 ;
-(id)_init;
-(id)setPadding:(UIEdgeInsets)arg1 ;
-(id)setBadgeValue:(id)arg1 ;
-(id)build;
-(id)setBadgeCount:(long long)arg1 ;
@end

