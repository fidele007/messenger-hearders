/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoBroadcastSessionResult.h>

@protocol FBVideoBroadcastSessionResult <NSObject>
@required
-(Either<NSError *, NSArray<FBManagedFileURL *> *>*)diskRecordingResult;
-(FBVideoBroadcastSessionLoggingInfo*)loggingInfo;
-(id)sendEndOfStreamError;

@end


@class NSError, NSString;

@interface FBVideoBroadcastSessionResult : NSObject <FBVideoBroadcastSessionResult> {

	NSError* _sendEndOfStreamError;
	Either<NSError *, NSArray<FBManagedFileURL *> *> _diskRecordingResult;
	FBVideoBroadcastSessionLoggingInfo _loggingInfo;

}

@property (nonatomic,readonly) Either<NSError * diskRecordingResult;                        //@synthesize diskRecordingResult=_diskRecordingResult - In the implementation block
@property (nonatomic,readonly) FBVideoBroadcastSessionLoggingInfo loggingInfo;              //@synthesize loggingInfo=_loggingInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Either<NSError *)diskRecordingResult;
-(FBVideoBroadcastSessionLoggingInfo)loggingInfo;
-(id)sendEndOfStreamError;
-(id)initWithDiskRecordingResult:(Either<NSError *, NSArray<FBManagedFileURL *> *>)arg1 sendEndOfStreamError:(id)arg2 loggingInfo:(FBVideoBroadcastSessionLoggingInfo)arg3 ;
@end
