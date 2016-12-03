/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface MNPaymentsPersistentStoreResult : NSObject {

	BOOL _success;
	BOOL _hasMoreData;
	NSError* _error;
	id _result;

}

@property (nonatomic,readonly) BOOL success;                  //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id result;                     //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreData;              //@synthesize hasMoreData=_hasMoreData - In the implementation block
-(id)initWithResult:(id)arg1 hasMoreData:(BOOL)arg2 ;
-(id)result;
-(BOOL)success;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(id)initWithResult:(id)arg1 ;
-(BOOL)hasMoreData;
@end
