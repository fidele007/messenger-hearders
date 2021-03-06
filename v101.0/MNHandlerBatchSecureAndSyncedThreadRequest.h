/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNHandlerJointRequest, MNHandlerSecureThreadRequest;

@interface MNHandlerBatchSecureAndSyncedThreadRequest : FBValueObject <NSCopying> {

	unsigned long long _requestId;
	MNHandlerJointRequest* _syncedThreadRequest;
	MNHandlerSecureThreadRequest* _secureThreadRequest;

}

@property (nonatomic,readonly) unsigned long long requestId;                                         //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNHandlerJointRequest * syncedThreadRequest;                     //@synthesize syncedThreadRequest=_syncedThreadRequest - In the implementation block
@property (nonatomic,copy,readonly) MNHandlerSecureThreadRequest * secureThreadRequest;              //@synthesize secureThreadRequest=_secureThreadRequest - In the implementation block
-(id)initWithRequestId:(unsigned long long)arg1 syncedThreadRequest:(id)arg2 secureThreadRequest:(id)arg3 ;
-(MNHandlerJointRequest *)syncedThreadRequest;
-(MNHandlerSecureThreadRequest *)secureThreadRequest;
-(unsigned long long)requestId;
@end

