/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTSendMessageResponse : NSObject <TBase, NSCoding> {

	long long __offlineThreadingId;
	BOOL __sendSucceeded;
	int __errno;
	NSString* __errStr;
	BOOL __isRetryable;
	NSString* __fbTraceMeta;
	BOOL __isSICheckInMqttFailed;
	BOOL __offlineThreadingId_isset;
	BOOL __sendSucceeded_isset;
	BOOL __errno_isset;
	BOOL __errStr_isset;
	BOOL __isRetryable_isset;
	BOOL __fbTraceMeta_isset;
	BOOL __isSICheckInMqttFailed_isset;

}

@property (assign,setter=setOfflineThreadingId:,getter=offlineThreadingId,nonatomic) long long offlineThreadingId; 
@property (assign,setter=setSendSucceeded:,getter=sendSucceeded,nonatomic) BOOL sendSucceeded; 
@property (assign,setter=setErrno:,getter=errnum,nonatomic) int errnum; 
@property (setter=setErrStr:,getter=errStr,nonatomic,retain) NSString * errStr; 
@property (assign,setter=setIsRetryable:,getter=isRetryable,nonatomic) BOOL isRetryable; 
@property (setter=setFbTraceMeta:,getter=fbTraceMeta,nonatomic,retain) NSString * fbTraceMeta; 
@property (assign,setter=setIsSICheckInMqttFailed:,getter=isSICheckInMqttFailed,nonatomic) BOOL isSICheckInMqttFailed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)offlineThreadingId;
-(void)read:(id)arg1 ;
-(void)setOfflineThreadingId:(long long)arg1 ;
-(BOOL)offlineThreadingIdIsSet;
-(void)unsetOfflineThreadingId;
-(BOOL)sendSucceeded;
-(int)errnum;
-(NSString *)errStr;
-(BOOL)isRetryable;
-(void)setIsRetryable:(BOOL)arg1 ;
-(BOOL)isRetryableIsSet;
-(void)unsetIsRetryable;
-(void)setFbTraceMeta:(NSString *)arg1 ;
-(NSString *)fbTraceMeta;
-(BOOL)fbTraceMetaIsSet;
-(void)unsetFbTraceMeta;
-(void)setSendSucceeded:(BOOL)arg1 ;
-(void)setErrno:(int)arg1 ;
-(void)setErrStr:(NSString *)arg1 ;
-(void)setIsSICheckInMqttFailed:(BOOL)arg1 ;
-(id)initWithOfflineThreadingId:(long long)arg1 sendSucceeded:(BOOL)arg2 errnum:(int)arg3 errStr:(id)arg4 isRetryable:(BOOL)arg5 fbTraceMeta:(id)arg6 isSICheckInMqttFailed:(BOOL)arg7 ;
-(BOOL)sendSucceededIsSet;
-(void)unsetSendSucceeded;
-(BOOL)errnoIsSet;
-(void)unsetErrno;
-(BOOL)errStrIsSet;
-(void)unsetErrStr;
-(BOOL)isSICheckInMqttFailed;
-(BOOL)isSICheckInMqttFailedIsSet;
-(void)unsetIsSICheckInMqttFailed;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

