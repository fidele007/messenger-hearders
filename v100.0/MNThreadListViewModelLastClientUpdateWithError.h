/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadClientUpdate, NSError;

@interface MNThreadListViewModelLastClientUpdateWithError : FBValueObject <NSCopying> {

	MNThreadClientUpdate* _update;
	NSError* _error;
	long long _consecutiveFailureCounter;

}

@property (nonatomic,copy,readonly) MNThreadClientUpdate * update;               //@synthesize update=_update - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long consecutiveFailureCounter;              //@synthesize consecutiveFailureCounter=_consecutiveFailureCounter - In the implementation block
-(id)initWithUpdate:(id)arg1 error:(id)arg2 consecutiveFailureCounter:(long long)arg3 ;
-(long long)consecutiveFailureCounter;
-(MNThreadClientUpdate *)update;
-(NSError *)error;
@end

