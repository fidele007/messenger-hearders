/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLoomRingBufferReaderDelegate.h>
#import <Messenger/FBLoomConfigurable.h>

@class FBLoomRingBufferWriter, NSNumber, NSMutableSet, FBLoomQPLController, FBLoomTraceContext, NSString;

@interface FBLoomTraceManager : NSObject <FBLoomRingBufferReaderDelegate, FBLoomConfigurable> {

	FBLoomRingBufferWriter* _writer;
	mutex _mutex;
	NSNumber* _maximumTraceDuration;
	unsigned long long _configID;
	NSMutableSet* _traceControllers;
	NSMutableSet* _traceProviders;
	FBLoomQPLController* _QPLController;
	FBLoomTraceContext* _traceContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyForConfiguration;
-(void)updateConfigurationWithDictionary:(id)arg1 ;
-(void)invalidateConfiguration;
-(id)initWithRingBufferWriter:(id)arg1 ;
-(id)configurableTraceControllers;
-(void)addTraceController:(id)arg1 ;
-(void)addProvider:(id)arg1 ;
-(BOOL)activateTrace:(id)arg1 ;
-(void)bufferedReader:(id)arg1 didTimeoutWithTrace:(long long)arg2 ;
-(id)customHeadersForProviders:(int)arg1 ;
-(void)bufferedReader:(id)arg1 traceDidFail:(long long)arg2 ;
-(id)defaultTraceControllers;
-(id)defaultTraceProviders;
-(void)_endCurrentTrace;
-(BOOL)stopTraceWithTriggerId:(long long)arg1 controller:(id)arg2 ;
-(BOOL)abortTraceWithTriggerId:(long long)arg1 controller:(id)arg2 ;
-(void)setTraceProviders:(id)arg1 ;
-(void)setTraceControllers:(id)arg1 ;
-(void)removeProvider:(id)arg1 ;
@end
