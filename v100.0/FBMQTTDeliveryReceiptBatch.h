/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface FBMQTTDeliveryReceiptBatch : NSObject <TBase, NSCoding> {

	NSMutableArray* __deliveryReceipts;
	long long __batchId;
	BOOL __deliveryReceipts_isset;
	BOOL __batchId_isset;

}

@property (setter=setDeliveryReceipts:,getter=deliveryReceipts,nonatomic,retain) NSMutableArray * deliveryReceipts; 
@property (assign,setter=setBatchId:,getter=batchId,nonatomic) long long batchId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(NSMutableArray *)deliveryReceipts;
-(void)setDeliveryReceipts:(NSMutableArray *)arg1 ;
-(id)initWithDeliveryReceipts:(id)arg1 batchId:(long long)arg2 ;
-(BOOL)deliveryReceiptsIsSet;
-(void)unsetDeliveryReceipts;
-(BOOL)batchIdIsSet;
-(void)unsetBatchId;
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
-(void)write:(id)arg1 ;
@end

