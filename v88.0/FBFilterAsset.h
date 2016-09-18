/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

