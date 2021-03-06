/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString;

@interface MNMessagesSyncDeltaVideoCall : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	BOOL __answered;
	long long __startTime;
	long long __duration;
	BOOL __messageMetadata_isset;
	BOOL __answered_isset;
	BOOL __startTime_isset;
	BOOL __duration_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (assign,setter=setAnswered:,getter=answered,nonatomic) BOOL answered; 
@property (assign,setter=setStartTime:,getter=startTime,nonatomic) long long startTime; 
@property (assign,setter=setDuration:,getter=duration,nonatomic) long long duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(BOOL)messageMetadataIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(void)unsetMessageMetadata;
-(BOOL)answeredIsSet;
-(void)unsetAnswered;
-(BOOL)startTimeIsSet;
-(void)unsetStartTime;
-(BOOL)durationIsSet;
-(void)unsetDuration;
-(id)initWithMessageMetadata:(id)arg1 answered:(BOOL)arg2 startTime:(long long)arg3 duration:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)validate;
-(long long)startTime;
-(BOOL)answered;
-(void)setAnswered:(BOOL)arg1 ;
-(void)write:(id)arg1 ;
@end

