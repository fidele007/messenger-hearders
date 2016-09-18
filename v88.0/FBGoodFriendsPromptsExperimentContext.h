/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBGoodFriendsPromptsExperimentContext : FBExperimentContext {

	BOOL _enabled;
	double _expiryTime;
	NSString* _promptTitle;
	NSString* _promptSubtitle;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double expiryTime;                            //@synthesize expiryTime=_expiryTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle;                  //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptSubtitle;               //@synthesize promptSubtitle=_promptSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)expiryTime;
-(NSString *)promptTitle;
-(NSString *)promptSubtitle;
-(BOOL)enabled;
-(NSString *)placeholderText;
@end
