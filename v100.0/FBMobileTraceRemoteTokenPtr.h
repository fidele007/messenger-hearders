/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBServerTrace, NSDictionary;

@interface FBMobileTraceRemoteTokenPtr : NSObject {

	NSString* _nodeID;
	NSString* _remoteNodeID;
	NSString* _nodeDescription;
	FBServerTrace* _trace;
	/*^block*/id _timeBlock;

}

@property (nonatomic,readonly) FBServerTrace * trace;                                  //@synthesize trace=_trace - In the implementation block
@property (nonatomic,readonly) id timeBlock;                                           //@synthesize timeBlock=_timeBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteMetadata; 
@property (nonatomic,copy,readonly) NSString * nodeID;                                 //@synthesize nodeID=_nodeID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * remoteCallAnnotations; 
@property (nonatomic,copy,readonly) NSString * remoteNodeID;                           //@synthesize remoteNodeID=_remoteNodeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeDescription;                        //@synthesize nodeDescription=_nodeDescription - In the implementation block
-(id)timeBlock;
-(NSDictionary *)remoteCallAnnotations;
-(id)initWithNodeID:(id)arg1 remoteNodeID:(id)arg2 description:(id)arg3 trace:(id)arg4 timeBlock:(/*^block*/id)arg5 ;
-(NSString *)remoteNodeID;
-(NSString *)nodeDescription;
-(FBServerTrace *)trace;
-(id)debugInfo;
-(NSString *)nodeID;
-(NSString *)remoteMetadata;
@end

