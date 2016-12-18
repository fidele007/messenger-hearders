/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray;

@interface FBMQTTSendMessageResponseBatch : NSObject <TBase, NSCoding> {

	long long __batchId;
	NSString* __fbTraceMeta;
	NSMutableArray* __responses;
	BOOL __supported;
	BOOL __batchId_isset;
	BOOL __fbTraceMeta_isset;
	BOOL __responses_isset;
	BOOL __supported_isset;

}

@property (assign,setter=setBatchId:,getter=batchId,nonatomic) long long batchId; 
@property (setter=setFbTraceMeta:,getter=fbTraceMeta,nonatomic,retain) NSString * fbTraceMeta; 
@property (setter=setResponses:,getter=responses,nonatomic,retain) NSMutableArray * responses; 
@property (assign,setter=setSupported:,getter=supported,nonatomic) BOOL supported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)batchIdIsSet;
-(void)unsetBatchId;
-(void)setFbTraceMeta:(NSString *)arg1 ;
-(NSString *)fbTraceMeta;
-(BOOL)fbTraceMetaIsSet;
-(void)unsetFbTraceMeta;
-(id)initWithBatchId:(long long)arg1 fbTraceMeta:(id)arg2 responses:(id)arg3 supported:(BOOL)arg4 ;
-(BOOL)responsesIsSet;
-(void)unsetResponses;
-(BOOL)supportedIsSet;
-(void)unsetSupported;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)setBatchId:(long long)arg1 ;
-(long long)batchId;
-(NSMutableArray *)responses;
-(void)setResponses:(NSMutableArray *)arg1 ;
-(void)write:(id)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)supported;
@end

