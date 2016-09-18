/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCachedImage.h>

@class FBProgressiveJPEG;

@interface FBStreamingCachedImage : FBCachedImage {

	BOOL _lastImageFlag;
	unsigned long long _imageFlag;
	FBProgressiveJPEG* _jpegHandler;

}

@property (nonatomic,readonly) unsigned long long imageFlag;                 //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) BOOL lastImageFlag;                           //@synthesize lastImageFlag=_lastImageFlag - In the implementation block
@property (nonatomic,readonly) FBProgressiveJPEG * jpegHandler;              //@synthesize jpegHandler=_jpegHandler - In the implementation block
-(unsigned long long)imageFlag;
-(BOOL)lastImageFlag;
-(FBProgressiveJPEG *)jpegHandler;
-(id)initWithCGImage:(CGImageRef)arg1 imageDecoder:(/*^block*/id)arg2 imageFlag:(unsigned long long)arg3 lastImageFlag:(BOOL)arg4 jpegHandler:(id)arg5 ;
@end

