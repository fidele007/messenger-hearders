/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface FBMqttCredential : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSData* _raw_authPayload;
	NSString* _idAndPwd_userName;
	NSString* _idAndPwd_password;

}
+(id)idAndPwdWithUserName:(id)arg1 password:(id)arg2 ;
+(id)rawWithAuthPayload:(id)arg1 ;
-(void)matchRaw:(/*^block*/id)arg1 idAndPwd:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

