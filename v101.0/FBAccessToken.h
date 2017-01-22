/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBAccessToken : NSObject <NSCopying> {

	NSString* _token;

}

@property (copy,readonly) NSString * token;                            //@synthesize token=_token - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)loggedOutAccessTokenWithAppID:(id)arg1 loginSecret:(id)arg2 ;
-(BOOL)_tokenIsValid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
@end
