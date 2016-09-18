/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString;

@interface MNMessagesSyncDeltaNonPersistedPayload : NSObject <TBase, NSCoding> {

	NSData* __payload;
	long long __timestamp;
	BOOL __payload_isset;
	BOOL __timestamp_isset;

}

@property (setter=setPayload:,getter=payload,nonatomic,retain) NSData * payload; 
@property (assign,setter=setTimestamp:,getter=timestamp,nonatomic) long long timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)payloadIsSet;
-(void)unsetPayload;
-(BOOL)timestampIsSet;
-(void)unsetTimestamp;
-(id)initWithPayload:(id)arg1 timestamp:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)timestamp;
-(NSData *)payload;
-(void)setTimestamp:(long long)arg1 ;
-(void)validate;
-(void)setPayload:(NSData *)arg1 ;
-(void)write:(id)arg1 ;
@end

