/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVSPDeltaPaymentRequestStatus : NSObject <TBase, NSCoding> {

	long long __requestFbId;
	long long __timestampMs;
	int __newStatus;
	long long __transferFbId;
	BOOL __requestFbId_isset;
	BOOL __timestampMs_isset;
	BOOL __newStatus_isset;
	BOOL __transferFbId_isset;

}

@property (assign,setter=setRequestFbId:,getter=requestFbId,nonatomic) long long requestFbId; 
@property (assign,setter=setTimestampMs:,getter=timestampMs,nonatomic) long long timestampMs; 
@property (assign,setter=setNewStatus:,getter=newStatus,nonatomic) int newStatus; 
@property (assign,setter=setTransferFbId:,getter=transferFbId,nonatomic) long long transferFbId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequestFbId:(long long)arg1 ;
-(long long)requestFbId;
-(BOOL)requestFbIdIsSet;
-(void)unsetRequestFbId;
-(long long)timestampMs;
-(BOOL)timestampMsIsSet;
-(void)setTransferFbId:(long long)arg1 ;
-(long long)transferFbId;
-(BOOL)transferFbIdIsSet;
-(void)unsetTransferFbId;
-(void)setNewStatus:(int)arg1 ;
-(id)initWithRequestFbId:(long long)arg1 timestampMs:(long long)arg2 newStatus:(int)arg3 transferFbId:(long long)arg4 ;
-(int)newStatus;
-(BOOL)newStatusIsSet;
-(void)unsetNewStatus;
-(void)read:(id)arg1 ;
-(void)setTimestampMs:(long long)arg1 ;
-(void)unsetTimestampMs;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

