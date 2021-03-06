/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBLazyCreator, NSString;

@interface MNQPLEventLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isRunning;
	int _markerID;
	FBLazyCreator* _qplLogger;
	NSString* _loggingTag;
	int _instanceKey;

}

@property (nonatomic,readonly) BOOL isRunning;                 //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) int instanceKey;                  //@synthesize instanceKey=_instanceKey - In the implementation block
@property (nonatomic,copy) NSString * loggingTag; 
-(NSString *)loggingTag;
-(void)setLoggingTag:(NSString *)arg1 ;
-(BOOL)_guardIsRunning:(BOOL)arg1 withCallingMethodName:(id)arg2 ;
-(void)addNote:(int)arg1 customTimestamp:(double)arg2 ;
-(void)addNote:(int)arg1 ;
-(id)initWithMarkerID:(int)arg1 instanceKey:(int)arg2 queue:(id)arg3 qplLogger:(id)arg4 ;
-(void)setInstanceKey:(int)arg1 ;
-(void)markStartWithCustomTimestamp:(double)arg1 ;
-(void)markStart;
-(void)markEndWithAction:(int)arg1 customTimestamp:(double)arg2 ;
-(void)markEndWithAction:(int)arg1 ;
-(void)annotateWithKey:(id)arg1 value:(id)arg2 ;
-(void)renameToMarkerId:(int)arg1 ;
-(int)instanceKey;
-(void)cancel;
-(BOOL)isRunning;
-(void)addChildLogger:(id)arg1 ;
-(void)addTag:(id)arg1 ;
@end

