/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSDate, UIImage, NSTimer, NSURL;

@interface FBBugReportVideoScreenRecorder : NSObject {

	AVAssetWriter* _writer;
	AVAssetWriterInput* _writerInput;
	AVAssetWriterInputPixelBufferAdaptor* _writerInputPixelBufferAdaptor;
	NSDate* _startTime;
	UIImage* _latestScreenshot;
	NSTimer* _timer;
	BOOL _captureFrameInProgress;
	NSURL* _originalFilenameURL;
	NSURL* _tmpFilenameURL;
	CGSize _frameSize;

}
-(void)captureFrame:(id)arg1 ;
-(void)captureFrameInternal;
-(id)imageRotatedByDegrees:(id)arg1 radians:(double)arg2 ;
-(void)stopRecording;
-(BOOL)startRecording:(id)arg1 ;
@end
