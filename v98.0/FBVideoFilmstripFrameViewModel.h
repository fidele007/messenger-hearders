/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoFilmstripVideoSourceProtocol;
@class UIImage;

@interface FBVideoFilmstripFrameViewModel : NSObject {

	/*^block*/id _requestCancelBlock;
	id<FBVideoFilmstripVideoSourceProtocol> _videoSource;
	unsigned long long _frameIndex;
	BOOL _placeholder;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(void)cancelFrameRequest;
-(void)_handleRequestCallback:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 videoSource:(id)arg2 ;
-(void)requestFrame;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(BOOL)isPlaceholder;
@end

