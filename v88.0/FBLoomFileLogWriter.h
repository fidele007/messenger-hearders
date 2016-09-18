/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoomFileLogWriterDelegate, FBLoomFileLogPermissionSource;
#import <Messenger/Messenger-Structs.h>
@class NSString, NSURL;

@interface FBLoomFileLogWriter : NSObject {

	BOOL _traceHasEnded;
	BOOL _traceHasWrittenHeader;
	NSString* _traceID;
	NSURL* _path;
	FBLoomLogEntry* _previousEntry;
	long long _previousArg1;
	long long _previousArg2;
	long long _previousExtras;
	gzFile_s* _fileHandle;
	int _timePrecisionFromNanosDenominator;
	id<FBLoomFileLogWriterDelegate> _delegate;
	id<FBLoomFileLogPermissionSource> _permissionSource;

}

@property (assign,nonatomic,__weak) id<FBLoomFileLogWriterDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBLoomFileLogPermissionSource> permissionSource;              //@synthesize permissionSource=_permissionSource - In the implementation block
-(BOOL)_createAndOpenLogFile;
-(id)_generateHeaderWithCustomHeaders:(id)arg1 ;
-(void)writeEntryID:(int)arg1 entryType:(int)arg2 ;
-(void)writeStringEntry:(const FBLoomLogEntry*)arg1 ;
-(void)writeTimeEntry:(const FBLoomLogEntry*)arg1 ;
-(BOOL)_privacyCheck;
-(id)_compressedPath;
-(id<FBLoomFileLogPermissionSource>)permissionSource;
-(id)initWithPath:(id)arg1 traceID:(id)arg2 ;
-(void)setPermissionSource:(id<FBLoomFileLogPermissionSource>)arg1 ;
-(void)endTraceAndDeleteWithReason:(short)arg1 ;
-(void)writeHeaderWithCustomHeaders:(id)arg1 ;
-(void)endTrace;
-(void)setDelegate:(id<FBLoomFileLogWriterDelegate>)arg1 ;
-(id<FBLoomFileLogWriterDelegate>)delegate;
-(void)writeEntry:(const FBLoomLogEntry*)arg1 ;
@end

