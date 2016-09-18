/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface MNPhotoQuickShareExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _actionSheetEnabled;
	BOOL _inboxUnitEnabled;
	long long _triggerInterval;
	NSString* _actionSheetTitle;
	NSString* _actionSheetSubtitle;
	NSString* _quickShareTypeName;
	NSString* _contactRetrieverTypeName;

}

@property (nonatomic,readonly) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long triggerInterval;                             //@synthesize triggerInterval=_triggerInterval - In the implementation block
@property (nonatomic,readonly) BOOL actionSheetEnabled;                               //@synthesize actionSheetEnabled=_actionSheetEnabled - In the implementation block
@property (nonatomic,readonly) BOOL inboxUnitEnabled;                                 //@synthesize inboxUnitEnabled=_inboxUnitEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionSheetTitle;                      //@synthesize actionSheetTitle=_actionSheetTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionSheetSubtitle;                   //@synthesize actionSheetSubtitle=_actionSheetSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * quickShareTypeName;                    //@synthesize quickShareTypeName=_quickShareTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactRetrieverTypeName;              //@synthesize contactRetrieverTypeName=_contactRetrieverTypeName - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)contactRetrieverType;
-(NSString *)actionSheetTitle;
-(NSString *)actionSheetSubtitle;
-(BOOL)inboxUnitEnabled;
-(long long)triggerInterval;
-(long long)quickShareType;
-(BOOL)actionSheetEnabled;
-(NSString *)quickShareTypeName;
-(NSString *)contactRetrieverTypeName;
-(BOOL)enabled;
@end

