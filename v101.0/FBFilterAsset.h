/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBFilterAsset : FBValueObject <NSCopying> {

	NSString* _name;
	NSURL* _remoteURL;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSURL * remoteURL;              //@synthesize remoteURL=_remoteURL - In the implementation block
-(id)initWithName:(id)arg1 remoteURL:(id)arg2 ;
-(NSString *)name;
-(NSURL *)remoteURL;
@end

