/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNContactSearchPage : FBValueObject <NSCopying> {

	NSString* _pageId;
	NSString* _name;
	NSString* _username;

}

@property (nonatomic,copy,readonly) NSString * pageId;                //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
-(NSString *)pageId;
-(id)initWithPageId:(id)arg1 name:(id)arg2 username:(id)arg3 ;
-(NSString *)name;
-(NSString *)username;
@end

