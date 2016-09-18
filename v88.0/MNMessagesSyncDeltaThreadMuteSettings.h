/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString;

@interface MNMessagesSyncDeltaThreadMuteSettings : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	long long __expireTime;
	BOOL __threadKey_isset;
	BOOL __expireTime_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (assign,setter=setExpireTime:,getter=expireTime,nonatomic) long long expireTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)threadKeyIsSet;
-(BOOL)expireTimeIsSet;
-(long long)expireTime;
-(void)unsetThreadKey;
-(void)setExpireTime:(long long)arg1 ;
-(id)initWithThreadKey:(id)arg1 expireTime:(long long)arg2 ;
-(void)unsetExpireTime;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(MNMessagesSyncThreadKey *)threadKey;
-(void)write:(id)arg1 ;
@end

