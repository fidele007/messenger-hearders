/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNThreadPresenceData : FBValueObject <NSCopying> {

	int _capability;
	NSString* _userId;
	NSString* _deviceId;
	NSString* _appId;
	unsigned long long _state;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) NSString * userId;                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceId;                  //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * appId;                     //@synthesize appId=_appId - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int capability;                            //@synthesize capability=_capability - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithUserId:(id)arg1 deviceId:(id)arg2 appId:(id)arg3 state:(unsigned long long)arg4 capability:(int)arg5 timestamp:(unsigned long long)arg6 ;
-(int)capability;
-(unsigned long long)timestamp;
-(unsigned long long)state;
-(NSString *)appId;
-(NSString *)userId;
-(NSString *)deviceId;
@end

