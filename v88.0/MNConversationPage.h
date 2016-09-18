/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNConversationPage : FBValueObject <NSCopying> {

	BOOL _hasMessenger;
	NSString* _pageId;
	NSString* _name;
	NSString* _username;
	long long _contactPageType;

}

@property (nonatomic,copy,readonly) NSString * pageId;                 //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                      //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,readonly) long long contactPageType;              //@synthesize contactPageType=_contactPageType - In the implementation block
-(NSString *)pageId;
-(BOOL)hasMessenger;
-(id)initWithPageId:(id)arg1 name:(id)arg2 username:(id)arg3 hasMessenger:(BOOL)arg4 contactPageType:(long long)arg5 ;
-(long long)contactPageType;
-(NSString *)name;
-(NSString *)username;
@end

