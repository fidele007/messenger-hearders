/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKTransactionalSuspensionControllerChange, NSArray;

@interface CKTransactionalSuspensionControllerProcessingResult : NSObject {

	CKTransactionalSuspensionControllerChange* _changeToEmit;
	NSArray* _pendingOperations;

}

@property (nonatomic,readonly) CKTransactionalSuspensionControllerChange * changeToEmit;              //@synthesize changeToEmit=_changeToEmit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingOperations;                                      //@synthesize pendingOperations=_pendingOperations - In the implementation block
-(id)initWithChangeToEmit:(id)arg1 pendingOperations:(id)arg2 ;
-(CKTransactionalSuspensionControllerChange *)changeToEmit;
-(NSArray *)pendingOperations;
@end
