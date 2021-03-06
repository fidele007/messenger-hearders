/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBImageStreamerStreamSpecifier : NSObject {

	BOOL _useImageStreamer;
	NSURL* _URL;
	unsigned long long _desiredImageFlagForStreaming;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL useImageStreamer;                                        //@synthesize useImageStreamer=_useImageStreamer - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlagForStreaming;              //@synthesize desiredImageFlagForStreaming=_desiredImageFlagForStreaming - In the implementation block
-(id)initWithURL:(id)arg1 useImageStreamer:(BOOL)arg2 desiredImageFlagForStreaming:(unsigned long long)arg3 ;
-(BOOL)useImageStreamer;
-(unsigned long long)desiredImageFlagForStreaming;
-(NSURL *)URL;
@end

