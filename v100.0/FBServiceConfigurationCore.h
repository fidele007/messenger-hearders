/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBServiceConfigurationCoring.h>

@protocol OS_dispatch_queue, FBCallPath;
@class FBScenePath, NSString, NSObject;

@interface FBServiceConfigurationCore : NSObject <FBServiceConfigurationCoring> {

	BOOL _disableCustomProtocols;
	FBScenePath* _scenePath;
	NSString* _logNamespace;
	NSString* _logName;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<FBCallPath> _callPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBScenePath * scenePath;                             //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) NSString * logNamespace;                               //@synthesize logNamespace=_logNamespace - In the implementation block
@property (nonatomic,copy) NSString * logName;                                    //@synthesize logName=_logName - In the implementation block
@property (nonatomic,retain) id<FBCallPath> callPath;                             //@synthesize callPath=_callPath - In the implementation block
@property (assign,nonatomic) BOOL disableCustomProtocols;                         //@synthesize disableCustomProtocols=_disableCustomProtocols - In the implementation block
-(void)setCallPath:(id<FBCallPath>)arg1 ;
-(void)setLogNamespace:(NSString *)arg1 ;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(FBScenePath *)scenePath;
-(void)setDisableCustomProtocols:(BOOL)arg1 ;
-(id<FBCallPath>)callPath;
-(BOOL)disableCustomProtocols;
-(NSString *)logNamespace;
-(NSString *)description;
-(void)setLogName:(NSString *)arg1 ;
-(NSString *)logName;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

