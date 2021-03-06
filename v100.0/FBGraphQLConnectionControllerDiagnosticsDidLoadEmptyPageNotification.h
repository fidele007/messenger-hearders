/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLConnectionLoadLocation, FBGraphQLConnectionInsertionLocation, NSString;

@interface FBGraphQLConnectionControllerDiagnosticsDidLoadEmptyPageNotification : NSObject {

	FBGraphQLConnectionLoadLocation* _loadLocation;
	FBGraphQLConnectionInsertionLocation* _insertionLocation;
	unsigned long long _responseIndex;
	NSString* _networkLoadUUID;
	NSString* _responseUUID;

}

@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * loadLocation;                   //@synthesize loadLocation=_loadLocation - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionInsertionLocation * insertionLocation;              //@synthesize insertionLocation=_insertionLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long responseIndex;                                      //@synthesize responseIndex=_responseIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                                       //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                                          //@synthesize responseUUID=_responseUUID - In the implementation block
-(NSString *)responseUUID;
-(FBGraphQLConnectionInsertionLocation *)insertionLocation;
-(NSString *)networkLoadUUID;
-(FBGraphQLConnectionLoadLocation *)loadLocation;
-(unsigned long long)responseIndex;
-(id)initWithLoadLocation:(id)arg1 insertionLocation:(id)arg2 responseIndex:(unsigned long long)arg3 networkLoadUUID:(id)arg4 responseUUID:(id)arg5 ;
@end

