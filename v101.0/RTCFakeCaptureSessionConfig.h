/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTCFakeCaptureSessionConfig : NSObject {

	BOOL _isPortrait;
	long long _width;
	long long _height;
	long long _fps;

}

@property (nonatomic,readonly) long long width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long fps;                 //@synthesize fps=_fps - In the implementation block
@property (nonatomic,readonly) BOOL isPortrait;               //@synthesize isPortrait=_isPortrait - In the implementation block
-(id)initWithWidth:(int)arg1 height:(int)arg2 fps:(int)arg3 isPortrait:(BOOL)arg4 ;
-(long long)fps;
-(long long)width;
-(long long)height;
-(BOOL)isPortrait;
@end

