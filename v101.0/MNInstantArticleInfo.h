/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNInstantArticleInfo : FBValueObject <NSCopying> {

	NSString* _articleID;
	NSURL* _articleURL;

}

@property (nonatomic,copy,readonly) NSString * articleID;              //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * articleURL;                //@synthesize articleURL=_articleURL - In the implementation block
-(id)initWithArticleID:(id)arg1 articleURL:(id)arg2 ;
-(NSString *)articleID;
-(NSURL *)articleURL;
@end
