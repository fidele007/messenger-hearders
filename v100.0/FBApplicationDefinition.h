/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBApplicationDefinition : FBValueObject <NSCopying> {

	NSString* _FBID;
	NSString* _secret;

}

@property (nonatomic,copy,readonly) NSString * FBID;                //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * secret;              //@synthesize secret=_secret - In the implementation block
-(NSString *)FBID;
-(id)initWithFBID:(id)arg1 secret:(id)arg2 ;
-(NSString *)secret;
@end

