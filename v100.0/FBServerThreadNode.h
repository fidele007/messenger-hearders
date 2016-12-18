/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBThreadTrace, NSString, FBServerTrace, NSDictionary;

@interface FBServerThreadNode : NSObject {

	FBThreadTrace* _threadTrace;
	/*^block*/id _timeBlock;
	BOOL _isRoot;
	NSString* _nodeID;
	FBServerTrace* _trace;

}

@property (nonatomic,readonly) BOOL isRoot;                                  //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeID;                       //@synthesize nodeID=_nodeID - In the implementation block
@property (nonatomic,readonly) FBServerTrace * trace;                        //@synthesize trace=_trace - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * traceResult; 
+(id)resumeFromToken:(id)arg1 ;
+(id)resumeFromRemoteToken:(id)arg1 nodeID:(id)arg2 ;
-(FBTraceEventRef)startWithIdentifier:(id)arg1 info:(id)arg2 instructionPointer:(void*)arg3 ;
-(void)stopTraceEvent:(FBTraceEventRef)arg1 instructionPointer:(void*)arg2 ;
-(id)initWithNodeID:(id)arg1 trace:(id)arg2 isRoot:(BOOL)arg3 timeBlock:(/*^block*/id)arg4 ;
-(id)captureRemoteWithNodeID:(id)arg1 remoteNodeID:(id)arg2 description:(id)arg3 ;
-(void)addEventOfType:(int)arg1 withIdentifier:(id)arg2 withInfo:(id)arg3 withNodeID:(id)arg4 instructionPointer:(void*)arg5 ;
-(NSDictionary *)traceResult;
-(id)captureWithNodeID:(id)arg1 ;
-(FBServerTrace *)trace;
-(id)init;
-(BOOL)isRoot;
-(NSString *)nodeID;
@end

